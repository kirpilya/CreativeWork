#ifndef EMP_VIEW_DIALOG_H
#define EMP_VIEW_DIALOG_H

#include <QDialog>
#include "Employee.h"

namespace Ui {
class emp_view_dialog;
}

class emp_view_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit emp_view_dialog(QWidget *parent = nullptr, Employee emp = Employee());
    ~emp_view_dialog();

private:
    Ui::emp_view_dialog *ui;
    Employee EMP;
};

#endif // EMP_VIEW_DIALOG_H
