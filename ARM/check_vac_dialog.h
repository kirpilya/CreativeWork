#ifndef CHECK_VAC_DIALOG_H
#define CHECK_VAC_DIALOG_H

#include <QDialog>
#include "Employee.h"

namespace Ui {
class check_vac_dialog;
}

class check_vac_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit check_vac_dialog(QWidget *parent = nullptr, Employee emp = Employee());
    ~check_vac_dialog();

private slots:
    void on_no_pushButton_clicked();

    void on_yes_pushButton_clicked();

signals:
    void addEmp_Yes(Employee emp);

private:
    Ui::check_vac_dialog *ui;
    Employee EMP;
};

#endif // CHECK_VAC_DIALOG_H
