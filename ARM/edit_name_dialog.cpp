#include "edit_name_dialog.h"
#include "ui_edit_name_dialog.h"

edit_name_dialog::edit_name_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_name_dialog)
{
    ui->setupUi(this);
}

edit_name_dialog::~edit_name_dialog()
{
    delete ui;
}

void edit_name_dialog::on_pushButton_clicked()
{
    QString new_name = ui->textEdit->toPlainText();
    emit NameChanged(new_name);
    this->close();
}

