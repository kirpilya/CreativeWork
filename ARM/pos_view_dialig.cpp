#include "pos_view_dialig.h"
#include "ui_pos_view_dialig.h"
#include "Position.h"

pos_view_dialig::pos_view_dialig(QWidget *parent, Position pos) :
    QDialog(parent),
    ui(new Ui::pos_view_dialig)
{
    ui->setupUi(this);
    POS = pos;

    ui->pos_title_textBrowser->setText(QString::fromStdString(POS.title));
    ui->age_textBrowser->setText(QString::number(POS.min_age) + " - " + QString::number(POS.max_age));
    ui->exp_textBrowser->setText(QString::number(POS.req_experience_from));
    ui->edu_title_textBrowser->setText(QString::fromStdString(POS.req_grade));
    ui->sal_textBrowser->setText(QString::number(POS.rec_sal_from) + " - " + QString::number(POS.rec_sal_to));
    ui->textBrowser->setText(QString::fromStdString(POS.dop_info));
}

pos_view_dialig::~pos_view_dialig()
{
    delete ui;
}
