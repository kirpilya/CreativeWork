#include "otklik_1_dialog.h"
#include "ui_otklik_1_dialog.h"

#include <vector>
#include "Position.h"
#include "Employee.h"
#include <QDebug>

otklik_1_dialog::otklik_1_dialog(QWidget *parent, std::vector<Position> poses_vec) :
    QDialog(parent),
    ui(new Ui::otklik_1_dialog)
{
    ui->setupUi(this);

    POSES = poses_vec;

    // НАСТРОЙКА pos_covboBox
    for(auto i : POSES)
    {
        ui->pos_comboBox->addItem(QString::fromStdString(i.title));
    }
    on_pos_comboBox_IndexChanged(0);
    QObject::connect(ui->pos_comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(on_pos_comboBox_IndexChanged(int)));

}

void otklik_1_dialog::on_pos_comboBox_IndexChanged(int index)
{
    ui->edu_comboBox->clear();
    if(POSES[index].req_grade == "высшее")
    {
        ui->edu_comboBox->addItem("высшее");
        ui->edu_comboBox->setCurrentIndex(0);
    }
    else if(POSES[index].req_grade == "среднее")
    {
        ui->edu_comboBox->addItem("высшее");
        ui->edu_comboBox->addItem("среднее");
        ui->edu_comboBox->setCurrentIndex(1);
    }
    else if(POSES[index].req_grade == "нет")
    {
        ui->edu_comboBox->addItem("высшее");
        ui->edu_comboBox->addItem("среднее");
        ui->edu_comboBox->addItem("нет");
        ui->edu_comboBox->setCurrentIndex(2);
    }

    ui->exp_spinBox->setMinimum(POSES[index].req_experience_from);
    ui->exp_spinBox->setMaximum(POSES[index].req_experience_to);
    ui->exp_spinBox->setValue(POSES[index].req_experience_from);

    ui->sal_spinBox->setMinimum(POSES[index].rec_sal_from);
    ui->sal_spinBox->setMaximum(POSES[index].rec_sal_to);
    ui->sal_spinBox->setValue(POSES[index].rec_sal_from);

    ui->dateEdit->clear();
    QDate cur = QDate::currentDate();
    QDate min = cur.addYears(-1*POSES[index].max_age);
    QDate max = cur.addYears(-1*POSES[index].min_age);
    ui->dateEdit->setDateRange(min, max);
}

otklik_1_dialog::~otklik_1_dialog()
{
    delete ui;
}

void otklik_1_dialog::on_pushButton_clicked()
{
    // ПОКА БЕЗ ПРОВЕРОК
    Employee new_emp;

    new_emp.f_name = ui->f_name_textEdit->toPlainText().toStdString();
    new_emp.s_name = ui->s_name_textEdit->toPlainText().toStdString();
    new_emp.p_name = ui->p_name_textEdit->toPlainText().toStdString();

    QString qFIO = ui->s_name_textEdit->toPlainText() + " " + ui->f_name_textEdit->toPlainText().at(0) + ". " + ui->p_name_textEdit->toPlainText().at(0) + ".";

    new_emp.FIO = qFIO.toStdString();

    //qDebug() << QString::fromStdString(new_emp.FIO);

    new_emp.birth = ui->dateEdit->date();
    QDate cur = QDate::currentDate();
    new_emp.age = new_emp.birth.daysTo(cur) / 365;

    new_emp.passport = ui->pasp_textEdit->toPlainText().toStdString();
    new_emp.tel_num = ui->tel_textEdit->toPlainText().toStdString();
    new_emp.email = ui->email_textEdit->toPlainText().toStdString();

    new_emp.pos = POSES[ui->pos_comboBox->currentIndex()];
    switch(ui->edu_comboBox->currentIndex())
    {
        case 0: new_emp.edu_category = "высшее"; break;
        case 1: new_emp.edu_category = "среднее"; break;
        case 2: new_emp.edu_category = "нет"; break;
    }
    new_emp.edu_place = ui->edu_place_textEdit->toPlainText().toStdString();

    new_emp.exp = ui->exp_spinBox->value();
    new_emp.salary = ui->sal_spinBox->value();
    new_emp.resume = ui->resume_textEdit->toPlainText().toStdString();

    new_emp.start_work = QDate::currentDate();

    //qDebug() << QString::number(ui->pos_comboBox->currentIndex());

    emit AddEmpToCheck(new_emp, ui->pos_comboBox->currentIndex());

    this->close();
}

