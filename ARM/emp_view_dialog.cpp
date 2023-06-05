#include "emp_view_dialog.h"
#include "ui_emp_view_dialog.h"

emp_view_dialog::emp_view_dialog(QWidget *parent, Employee emp) :
    QDialog(parent),
    ui(new Ui::emp_view_dialog)
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
}

emp_view_dialog::~emp_view_dialog()
{
    delete ui;
}
