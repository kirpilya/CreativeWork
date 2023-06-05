#include "vac_view_dialog.h"
#include "ui_vac_view_dialog.h"

vac_view_dialog::vac_view_dialog(QWidget *parent, Position vac) :
    QDialog(parent),
    ui(new Ui::vac_view_dialog)
{
    ui->setupUi(this);

    VAC = vac;

    ui->pos_title_textBrowser->setText(QString::fromStdString(VAC.title));
    ui->age_textBrowser->setText(QString::number(VAC.min_age) + " - " + QString::number(VAC.max_age));
    ui->exp_textBrowser->setText(QString::number(VAC.req_experience_from) + " - " + QString::number(VAC.req_experience_to));
    ui->edu_title_textBrowser->setText(QString::fromStdString(VAC.req_grade));
    ui->sal_textBrowser->setText(QString::number(VAC.rec_sal_from) + " - " + QString::number(VAC.rec_sal_to));
    ui->textBrowser->setText(QString::fromStdString(VAC.dop_info));
}

vac_view_dialog::~vac_view_dialog()
{
    delete ui;
}
