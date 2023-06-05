#ifndef ADD_POS_FORM_DIALOG_H
#define ADD_POS_FORM_DIALOG_H

#include <QDialog>

#include "Position.h"

namespace Ui {
class add_pos_form_dialog;
}

class add_pos_form_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit add_pos_form_dialog(QWidget *parent = nullptr);
    ~add_pos_form_dialog();

private slots:
    void on_add_btn_clicked();

signals:
    void AddPos(Position new_pos);

private:
    Ui::add_pos_form_dialog *ui;
};

#endif // ADD_POS_FORM_DIALOG_H
