#pragma once

#include <QDebug>
#include <fstream>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add_vac_dialog.h"
#include "otklik_1_dialog.h"
#include "pos_view_dialig.h"
#include "vac_view_dialog.h"
#include "check_vac_dialog.h"
#include "emp_view_dialog.h"



QDataStream& operator<<(QDataStream& stream, const Position& position)
{
    stream << position.min_age;
    stream << position.max_age;
    stream << QString::fromStdString(position.title);
    stream << QString::fromStdString(position.req_grade);
    stream << position.req_experience_from;
    stream << position.req_experience_to;
    stream << position.rec_sal_from;
    stream << position.rec_sal_to;
    stream << QString::fromStdString(position.dop_info);
    return stream;
}

QDataStream& operator>>(QDataStream& stream, Position& position)
{
    stream >> position.min_age;
    stream >> position.max_age;
    QString title, req_grade, dop_info;
    stream >> title;
    stream >> req_grade;
    stream >> position.req_experience_from;
    stream >> position.req_experience_to;
    stream >> position.rec_sal_from;
    stream >> position.rec_sal_to;
    stream >> dop_info;
    position.title = title.toStdString();
    position.req_grade = req_grade.toStdString();
    position.dop_info = dop_info.toStdString();
    return stream;
}



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString pos_file = "pos.dat";
    QString vac_file = "vac.dat";
    QString emp_file = "emp.dat";
    QString name_file = "name.txt";


    // загрузка позиций
    company.Positions = ReadPositionsFromFile("pos.dat");
    for(auto pos : company.Positions)
    {
        ui->poses_listWidget->addItem(QString::fromStdString(pos.title));
    }

    // загрузка вакансий
    company.Vacancies = ReadPositionsFromFile("vac.dat");
    ui->vac_tableWidget->setRowCount(company.Vacancies.size());
    int v_i = 0;
    for(auto vac : company.Vacancies)
    {
        ui->vac_tableWidget->setItem(v_i, 0, new QTableWidgetItem(QString::fromStdString(vac.title)));
        ui->vac_tableWidget->setItem(v_i, 1, new QTableWidgetItem(QString::number(vac.req_experience_from) + " - " + QString::number(vac.req_experience_to)));
        ui->vac_tableWidget->setItem(v_i, 2, new QTableWidgetItem(QString::fromStdString(vac.req_grade)));
        ui->vac_tableWidget->setItem(v_i, 3, new QTableWidgetItem(QString::number(vac.rec_sal_from) + " - " + QString::number(vac.rec_sal_to)));

        v_i++;
    }
    ui->vac_tableWidget->horizontalHeader()->setVisible(true);

    // загрузка сотрудников
    company.Employees = ReadEmployeesFromFile("emp.dat");
    ui->Employee_tableWidget->setRowCount(company.Employees.size());
    int e_i = 0;
    for(auto emp : company.Employees)
    {
        ui->Employee_tableWidget->setItem(e_i, 0, new QTableWidgetItem(QString::fromStdString(emp.FIO)));
        ui->Employee_tableWidget->setItem(e_i, 1, new QTableWidgetItem(QString::number(emp.age)));
        ui->Employee_tableWidget->setItem(e_i, 2, new QTableWidgetItem(QString::fromStdString(emp.pos.title)));
        ui->Employee_tableWidget->setItem(e_i, 3, new QTableWidgetItem(QString::fromStdString(emp.edu_category)));
        ui->Employee_tableWidget->setItem(e_i, 4, new QTableWidgetItem(QString::number(emp.exp)));
        ui->Employee_tableWidget->setItem(e_i, 5, new QTableWidgetItem(emp.start_work.toString("dd.MM.yyyy")));
    }
    ui->Employee_tableWidget->horizontalHeader()->setVisible(true);



    company.name = readStringFromFile("name.txt").toStdString();



    // НАСТРОЙКА СПИСКА ДОЛЖНОСТЕЙ
    ui->poses_listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    QObject::connect(ui->poses_listWidget, &QListWidget::customContextMenuRequested, [this](const QPoint &pos) {
            QListWidgetItem *selectedItem = ui->poses_listWidget->itemAt(pos);
            if (selectedItem) {
                QMenu contextMenu(ui->poses_listWidget);
                QAction *editAction = contextMenu.addAction("Просмотреть");
                QAction *deleteAction = contextMenu.addAction("Удалить");

                // Обработка выбранных действий контекстного меню
                QAction *selectedAction = contextMenu.exec(ui->poses_listWidget->mapToGlobal(pos));
                if (selectedAction == editAction) {
                    int row = ui->poses_listWidget->row(selectedItem);
                    pos_view_dialig* popupPOSview = new pos_view_dialig(this, company.Positions[row]);
                    popupPOSview->show();
                } else if (selectedAction == deleteAction) {
                    // Логика удаления элемента списка должностей
                    int row = ui->poses_listWidget->row(selectedItem);
                    delete ui->poses_listWidget->takeItem(row);

                    auto it = company.Positions.begin();
                    advance(it, row);
                    company.Positions.erase(it);

                    UPDstat();
                }
            }
        });


    // НАСТРОЙКА ТАБЛИЦЫ ВАКАНСИЙ
    ui->vac_tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    QObject::connect(ui->vac_tableWidget, &QTableWidget::customContextMenuRequested, [this](const QPoint &pos) {
            QTableWidgetItem *selectedItem = ui->vac_tableWidget->itemAt(pos);
            if (selectedItem) {
                QMenu contextMenu(ui->poses_listWidget);
                QAction *otklikAction = contextMenu.addAction("Отклик");
                QAction *editAction = contextMenu.addAction("Просмотреть");
                QAction *deleteAction = contextMenu.addAction("Удалить");

                // Обработка выбранных действий контекстного меню
                QAction *selectedAction = contextMenu.exec(ui->vac_tableWidget->mapToGlobal(pos));
                if (selectedAction == editAction) {
                    int row = ui->vac_tableWidget->row(selectedItem);
                    //qDebug() << row;
                    vac_view_dialog* popupVACview = new vac_view_dialog(this, company.Vacancies[row]);
                    popupVACview->show();
                } else if (selectedAction == deleteAction) {
                    int row = ui->vac_tableWidget->row(selectedItem);
                    ui->vac_tableWidget->removeRow(row);

                    auto it = company.Vacancies.begin();
                    advance(it, row);
                    company.Vacancies.erase(it);

                    UPDstat();
                }
                else if (selectedAction == otklikAction)
                {
                    otklik_1_dialog* popupOTKLIK = new otklik_1_dialog(this, company.Vacancies);
                    connect(popupOTKLIK, &otklik_1_dialog::AddEmpToCheck, this, &MainWindow::on_AddEmpToCheck_fun);
                    popupOTKLIK->show();
                }
            }
        });


    // НАСТРОЙКА ТАБЛИЦЫ СОТРУДНИКОВ
        ui->Employee_tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        QObject::connect(ui->Employee_tableWidget, &QTableWidget::customContextMenuRequested, [this](const QPoint &pos) {
                QTableWidgetItem *selectedItem = ui->Employee_tableWidget->itemAt(pos);
                if (selectedItem) {
                    QMenu contextMenu(ui->Employee_tableWidget);
                    QAction *editAction = contextMenu.addAction("Просмотреть");
                    QAction *deleteAction = contextMenu.addAction("Уволить");

                    // Обработка выбранных действий контекстного меню
                    QAction *selectedAction = contextMenu.exec(ui->Employee_tableWidget->mapToGlobal(pos));
                    if (selectedAction == editAction) {
                        int row = ui->Employee_tableWidget->row(selectedItem);

                        //vac_view_dialog* popupVACview = new vac_view_dialog(this, company.Vacancies[row]);
                        //popupVACview->show();

                        emp_view_dialog* popupEMP = new emp_view_dialog(this, company.Employees[row]);
                        popupEMP->show();

                    } else if (selectedAction == deleteAction) {
                        int row = ui->Employee_tableWidget->row(selectedItem);
                        ui->Employee_tableWidget->removeRow(row);

                        auto it = company.Employees.begin();
                        advance(it, row);
                        company.Employees.erase(it);

                        UPDstat();
                    }
                }
            });


    UPDstat();
}

MainWindow::~MainWindow()
{
    delete ui;
}


// ОБНОВЛЕНИЕ СТАТЫ

void MainWindow::UPDstat()
{
    int month_pay = 0;
    for(auto i : company.Employees)
    {
        month_pay += i.salary;
    }

    ui->pos_count_label->setText("Позиций: " + QString::number(company.Positions.size()));
    ui->emp_count_label->setText("Сотрудников: " + QString::number(company.Employees.size()));
    ui->vac_count_label->setText("Вакансий: " + QString::number(company.Vacancies.size()));
    ui->sal_count_label->setText("Ежемесячная оплата<br>труда сотрудников: " + QString::number(month_pay));

    // выравнивание таблицы вакансий
    int rowCount = ui->vac_tableWidget->rowCount();
    int columnCount = ui->vac_tableWidget->columnCount();

    for (int row = 0; row < rowCount; ++row) {
        for (int column = 0; column < columnCount; ++column) {
            QTableWidgetItem* item = ui->vac_tableWidget->item(row, column);
            if (item) {
                item->setTextAlignment(Qt::AlignCenter);
            }
        }
    }

    // выравнивание таблицы сотрудников
    int erowCount = ui->Employee_tableWidget->rowCount();
    int ecolumnCount = ui->Employee_tableWidget->columnCount();

    for (int row = 0; row < erowCount; ++row) {
        for (int column = 0; column < ecolumnCount; ++column) {
            QTableWidgetItem* item = ui->Employee_tableWidget->item(row, column);
            if (item) {
                item->setTextAlignment(Qt::AlignCenter);
            }
        }
    }


    ui->poses_listWidget->update();
    ui->vac_tableWidget->update();
    ui->Employee_tableWidget->update();

    ui->cmp_name_label->setText(QString::fromStdString(company.name));

}



// СОХРАНЕНИЕ СТАТЫ

void MainWindow::SAVE()
{
    // сохранение позиций
    WritePositionsToFile(company.Positions, "pos.dat");
    WritePositionsToFile(company.Vacancies, "vac.dat");
    WriteEmployeesToFile("emp.dat", company.Employees);
    writeStringToFile(QString::fromStdString(company.name), "name.txt");
}



// ИЗМЕНЕНИЕ НАЗВАНИЯ КОМПАНИИ

void MainWindow::updateCMPname(QString name)
{
    company.name = name.toStdString();
    ui->cmp_name_label->setText(QString::fromStdString(company.name));
    UPDstat();
}

void MainWindow::on_cmp_name_edit_btn_clicked()
{
   edit_name_dialog* popupEditName = new edit_name_dialog(this);
   connect(popupEditName, &edit_name_dialog::NameChanged, this, &MainWindow::updateCMPname);
   popupEditName->show();
}



// ДОБАВЛЕНИЕ ПОЗИЦИИ

void MainWindow::on_AddPos_fun(Position new_pos)
{
    company.Positions.push_back(new_pos);
    ui->poses_listWidget->addItem(QString::fromStdString(company.Positions[company.Positions.size() - 1].title));
    UPDstat();
}

void MainWindow::on_add_pos_pushButton_clicked()
{
    add_pos_form_dialog* popupAddPos = new add_pos_form_dialog(this);
    connect(popupAddPos, &add_pos_form_dialog::AddPos, this, &MainWindow::on_AddPos_fun);
    popupAddPos->show();
}


// ДОБАВЛЕНИЕ ВАКАНСИИ

void MainWindow::on_AddVac_fun(Position new_pos)
{
    company.Vacancies.push_back(new_pos);
    ui->vac_tableWidget->setRowCount(ui->vac_tableWidget->rowCount() + 1);
    int row = ui->vac_tableWidget->rowCount() - 1;
    ui->vac_tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(new_pos.title)));
    ui->vac_tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(new_pos.req_experience_from) + " - " + QString::number(new_pos.req_experience_to)));
    ui->vac_tableWidget->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(new_pos.req_grade)));
    ui->vac_tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(new_pos.rec_sal_from) + " - " + QString::number(new_pos.rec_sal_to)));
    UPDstat();
}

void MainWindow::on_add_vac_pushButton_clicked()
{
    if(company.Positions.size() > 0)
    {
        add_vac_dialog* popupAddVac = new add_vac_dialog(this, company.Positions);
        connect(popupAddVac, &add_vac_dialog::AddVac, this, &MainWindow::on_AddVac_fun);
        popupAddVac->show();
    }
}


// ДОБАВЛЕНИЕ СОТРУДНИКА

void MainWindow::on_AddEmpToCheck_fun(Employee emp, int vac_i)
{
    emp.vac_idx = vac_i;
    check_vac_dialog* popupCHECKvac = new check_vac_dialog(this, emp);
    connect(popupCHECKvac, &check_vac_dialog::addEmp_Yes, this, &MainWindow::on_AddEmp_Yes);
    popupCHECKvac->show();


}

void MainWindow::on_AddEmp_Yes(Employee emp)
{

    int trow = emp.vac_idx;
    ui->vac_tableWidget->removeRow(trow);

    auto it = company.Vacancies.begin();
    advance(it, trow);
    company.Vacancies.erase(it);



    company.Employees.push_back(emp);
    ui->Employee_tableWidget->setRowCount(ui->Employee_tableWidget->rowCount() +1);
    int row = ui->Employee_tableWidget->rowCount() - 1;

    ui->Employee_tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(emp.FIO)));
    ui->Employee_tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(emp.age)));
    ui->Employee_tableWidget->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(emp.pos.title)));
    ui->Employee_tableWidget->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(emp.edu_category)));
    ui->Employee_tableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(emp.exp)));
    ui->Employee_tableWidget->setItem(row, 5, new QTableWidgetItem(emp.start_work.toString("dd.MM.yyyy")));

    UPDstat();

}




// ФУНКЦИИ СОХРАНЕНИЯ И ЗАПИСИ ДАННЫХ


// СОХРАНЕНИЕ И ЗАПИСЬ ПОЗИЦИЙ

void MainWindow::WritePositionsToFile(const std::vector<Position>& positions, const QString& filename)
{
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly)) {
        QDataStream stream(&file);

        // Записываем размер вектора
        quint32 size = positions.size();
        stream << size;

        // Записываем каждый объект Position в файл
        for (const Position& pos : positions) {
            stream << pos.min_age;
            stream << pos.max_age;
            stream << QString::fromStdString(pos.title);
            stream << QString::fromStdString(pos.req_grade);
            stream << pos.req_experience_from;
            stream << pos.req_experience_to;
            stream << pos.rec_sal_from;
            stream << pos.rec_sal_to;
            stream << QString::fromStdString(pos.dop_info);
        }

        file.close();
        qDebug() << "Данные успешно записаны в файл.";
    } else {
        qDebug() << "Ошибка открытия файла для записи.";
    }
}

std::vector<Position> MainWindow::ReadPositionsFromFile(const QString& filename)
{
    std::vector<Position> positions;

    QFile file(filename);
    if (file.open(QIODevice::ReadOnly)) {
        QDataStream stream(&file);

        // Чтение размера вектора
        quint32 size;
        stream >> size;

        // Чтение каждого объекта Position из файла
        for (quint32 i = 0; i < size; ++i) {
            Position pos;
            stream >> pos.min_age;
            stream >> pos.max_age;
            QString title;
            stream >> title;
            pos.title = title.toStdString();
            QString req_grade;
            stream >> req_grade;
            pos.req_grade = req_grade.toStdString();
            stream >> pos.req_experience_from;
            stream >> pos.req_experience_to;
            stream >> pos.rec_sal_from;
            stream >> pos.rec_sal_to;
            QString dop_info;
            stream >> dop_info;
            pos.dop_info = dop_info.toStdString();

            positions.push_back(pos);
        }

        file.close();
        qDebug() << "Данные успешно прочитаны из файла.";
    } else {
        qDebug() << "Ошибка открытия файла для чтения.";
    }

    return positions;
}


// СОХРАНЕНИЕ И ЗАПИСЬ ВАКАНСИЙ;

void MainWindow::WriteEmployeesToFile(const QString& filename, const std::vector<Employee>& employees)
{
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly)) {
        QDataStream stream(&file);

        // Запись размера вектора
        quint32 size = employees.size();
        stream << size;

        // Запись каждого объекта Employee в файл
        for (const Employee& emp : employees) {
            QString f_name = QString::fromStdString(emp.f_name);
            QString s_name = QString::fromStdString(emp.s_name);
            QString p_name = QString::fromStdString(emp.p_name);
            QString FIO = QString::fromStdString(emp.FIO);
            stream << f_name;
            stream << s_name;
            stream << p_name;
            stream << FIO;
            stream << emp.birth;
            stream << emp.age;
            QString passport = QString::fromStdString(emp.passport);
            stream << passport;
            stream << emp.pos;
            stream << emp.start_work;
            QString tel_num = QString::fromStdString(emp.tel_num);
            stream << tel_num;
            QString email = QString::fromStdString(emp.email);
            stream << email;
            QString edu_category = QString::fromStdString(emp.edu_category);
            stream << edu_category;
            QString edu_place = QString::fromStdString(emp.edu_place);
            stream << edu_place;
            stream << emp.exp;
            QString resume = QString::fromStdString(emp.resume);
            stream << resume;
            QString dop_info = QString::fromStdString(emp.dop_info);
            stream << dop_info;
            stream << emp.salary;
            stream << emp.vac_idx;
        }

        file.close();
        qDebug() << "Данные успешно записаны в файл.";
    } else {
        qDebug() << "Ошибка открытия файла для записи.";
    }
}

std::vector<Employee> MainWindow::ReadEmployeesFromFile(const QString& filename)
{
    std::vector<Employee> employees;

    QFile file(filename);
    if (file.open(QIODevice::ReadOnly)) {
        QDataStream stream(&file);

        // Чтение размера вектора
        quint32 size;
        stream >> size;

        // Чтение каждого объекта Employee из файла
        for (quint32 i = 0; i < size; ++i) {
            Employee emp;
            QString f_name, s_name, p_name, FIO, passport, tel_num, email, edu_category, edu_place, resume, dop_info;
            stream >> f_name;
            emp.f_name = f_name.toStdString();
            stream >> s_name;
            emp.s_name = s_name.toStdString();
            stream >> p_name;
            emp.p_name = p_name.toStdString();
            stream >> FIO;
            emp.FIO = FIO.toStdString();
            stream >> emp.birth;
            stream >> emp.age;
            stream >> passport;
            emp.passport = passport.toStdString();
            stream >> emp.pos;
            stream >> emp.start_work;
            stream >> tel_num;
            emp.tel_num = tel_num.toStdString();
            stream >> email;
            emp.email = email.toStdString();
            stream >> edu_category;
            emp.edu_category = edu_category.toStdString();
            stream >> edu_place;
            emp.edu_place = edu_place.toStdString();
            stream >> emp.exp;
            stream >> resume;
            emp.resume = resume.toStdString();
            stream >> dop_info;
            emp.dop_info = dop_info.toStdString();
            stream >> emp.salary;
            stream >> emp.vac_idx;

            employees.push_back(emp);
        }

        file.close();
        qDebug() << "Данные успешно прочитаны из файла.";
    } else {
        qDebug() << "Ошибка открытия файла для чтения.";
    }

    return employees;
}


// СОХРАНЕНИЕ И ЗАПИСЬ НАЗВАНИЯ

void MainWindow::writeStringToFile(const QString& text, const QString& filePath)
{
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        out << text;
        file.close();
    }
}

QString MainWindow::readStringFromFile(const QString& filePath)
{
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString text = in.readAll();
        file.close();
        return text;
    }
    return QString();
}



// СОХРАНЕНИЕ ПРИ ЗАКРЫТИИ

void MainWindow::closeEvent(QCloseEvent *event)
{
    SAVE();
    event->accept();
}

