#include "add_pos_form_dialog.h"
#include "ui_add_pos_form_dialog.h"

add_pos_form_dialog::add_pos_form_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_pos_form_dialog)
{
    ui->setupUi(this);
}

add_pos_form_dialog::~add_pos_form_dialog()
{
    delete ui;
}

void add_pos_form_dialog::on_add_btn_clicked()
{
    Position new_pos;
    new_pos.title = ui->posname_textEdit->toPlainText().toStdString();
    new_pos.min_age = ui->age_spinBox_1->value();
    new_pos.max_age = ui->age_spinBox_2->value();
    new_pos.req_experience_from = ui->exp_spinBox->value();
    new_pos.req_experience_to = 10;
    switch (ui->edu_comboBox->currentIndex())
    {
        case 0: new_pos.req_grade = "высшее"; break;
        case 1: new_pos.req_grade = "среднее"; break;
        case 2: new_pos.req_grade = "нет"; break;
        default: new_pos.req_grade = "ошибка"; break;
    }
    new_pos.rec_sal_from = ui->sal_spinBox_1->value();
    new_pos.rec_sal_to = ui->sal_spinBox_2->value();
    new_pos.dop_info = ui->dop_info_textEdit->toPlainText().toStdString();

    emit AddPos(new_pos);

    this->close();
}

