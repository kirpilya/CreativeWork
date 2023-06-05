#include "add_vac_dialog.h"
#include "ui_add_vac_dialog.h"

#include <vector>
#include <QDebug>
#include "Position.h"

add_vac_dialog::add_vac_dialog(QWidget *parent, std::vector<Position> poses_vec) :
    QDialog(parent),
    ui(new Ui::add_vac_dialog)
{
    ui->setupUi(this);

    POSES = poses_vec;

    // НАСТРОЙКА comboBox
    for(auto i : poses_vec)
    {
        ui->comboBox->addItem(QString::fromStdString(i.title));
    }
    onComboBoxIndexChanged(0);
    QObject::connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(onComboBoxIndexChanged(int)));

}

void add_vac_dialog::onComboBoxIndexChanged(int index)
{
    ui->age_spinBox_1->setMinimum(POSES[index].min_age);
    ui->age_spinBox_1->setMaximum(POSES[index].max_age);
    ui->age_spinBox_1->setValue(POSES[index].min_age);

    ui->age_spinBox_2->setMinimum(POSES[index].min_age);
    ui->age_spinBox_2->setMaximum(POSES[index].max_age);
    ui->age_spinBox_2->setValue(POSES[index].max_age);

    ui->exp_spinBox_1->setMinimum(POSES[index].req_experience_from);
    ui->exp_spinBox_1->setMaximum(POSES[index].req_experience_to);
    ui->exp_spinBox_1->setValue(POSES[index].req_experience_from);

    ui->exp_spinBox_2->setMinimum(POSES[index].req_experience_from);
    ui->exp_spinBox_2->setMaximum(POSES[index].req_experience_to);
    ui->exp_spinBox_2->setValue(POSES[index].req_experience_to);

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

    ui->sal_spinBox_1->setMinimum(POSES[index].rec_sal_from);
    ui->sal_spinBox_1->setMaximum(POSES[index].rec_sal_to);
    ui->sal_spinBox_1->setValue(POSES[index].rec_sal_from);

    ui->sal_spinBox_2->setMinimum(POSES[index].rec_sal_from);
    ui->sal_spinBox_2->setMaximum(POSES[index].rec_sal_to);
    ui->sal_spinBox_2->setValue(POSES[index].rec_sal_to);

    ui->dop_info_textEdit->setText(QString::fromStdString(POSES[index].dop_info + "\n"));
}

add_vac_dialog::~add_vac_dialog()
{
    delete ui;
}

void add_vac_dialog::on_add_btn_clicked()
{
    // ПОКА БЕЗ ПРОВЕРОК

    Position new_pos;

    int titleIdx = ui->comboBox->currentIndex();
    new_pos.title = POSES[titleIdx].title;

    new_pos.min_age = ui->age_spinBox_1->value();
    new_pos.max_age = ui->age_spinBox_2->value();
    new_pos.req_experience_from = ui->exp_spinBox_1->value();
    new_pos.req_experience_to = ui->exp_spinBox_2->value();
    int edu = ui->edu_comboBox->currentIndex();
    switch (edu)
    {
        case 0: new_pos.req_grade = "высшее"; break;
        case 1: new_pos.req_grade = "среднее"; break;
        case 2: new_pos.req_grade = "нет"; break;
        default: new_pos.req_grade = "ошибка"; break;
    }
    new_pos.rec_sal_from = ui->sal_spinBox_1->value();
    new_pos.rec_sal_to = ui->sal_spinBox_2->value();
    new_pos.dop_info = ui->dop_info_textEdit->toPlainText().toStdString();

    emit AddVac(new_pos);

    this->close();
}

