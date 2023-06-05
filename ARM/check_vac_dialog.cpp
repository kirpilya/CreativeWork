#include "check_vac_dialog.h"
#include "ui_check_vac_dialog.h"

check_vac_dialog::check_vac_dialog(QWidget *parent, Employee emp) :
    QDialog(parent),
    ui(new Ui::check_vac_dialog)
{
    ui->setupUi(this);

    EMP = emp;

    ui->f_name_textBrowser->setText(QString::fromStdString(EMP.f_name));
    ui->s_name_textBrowser->setText(QString::fromStdString(EMP.s_name));
    ui->p_name_textBrowser->setText(QString::fromStdString(EMP.p_name));

    ui->age_textBrowser->setText(QString::number(EMP.age));
    ui->pasp_textBrowser->setText(QString::fromStdString(EMP.passport));
    ui->tel_textBrowser->setText(QString::fromStdString(EMP.tel_num));
    ui->email_textBrowser->setText(QString::fromStdString(EMP.email));

    ui->pos_textBrowser->setText(QString::fromStdString(EMP.pos.title));
    ui->edu_textBrowser->setText(QString::fromStdString(EMP.edu_category));
    ui->edu_place__textBrowser->setText(QString::fromStdString(EMP.edu_place));

    ui->exp_textBrowser->setText(QString::number(EMP.exp));
    ui->sal_textBrowser->setText(QString::number(EMP.salary));
    ui->res_textBrowser->setText(QString::fromStdString(EMP.resume));

}

check_vac_dialog::~check_vac_dialog()
{
    delete ui;
}

void check_vac_dialog::on_no_pushButton_clicked()
{
    this->close();
}


void check_vac_dialog::on_yes_pushButton_clicked()
{
    emit addEmp_Yes(EMP);

    this->close();
}

