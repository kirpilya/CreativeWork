#ifndef EDIT_NAME_DIALOG_H
#define EDIT_NAME_DIALOG_H

#pragma once

#include <QDialog>

namespace Ui {
class edit_name_dialog;
}

class edit_name_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit edit_name_dialog(QWidget *parent = nullptr);
    ~edit_name_dialog();

private slots:
    void on_pushButton_clicked();

signals:
    void NameChanged(QString newNamee);

private:
    Ui::edit_name_dialog *ui;
};

#endif // EDIT_NAME_DIALOG_H
