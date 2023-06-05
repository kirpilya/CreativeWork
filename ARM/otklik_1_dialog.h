#ifndef OTKLIK_1_DIALOG_H
#define OTKLIK_1_DIALOG_H

#include <QDialog>
#include <vector>
#include "Position.h"
#include "Employee.h"

namespace Ui {
class otklik_1_dialog;
}

class otklik_1_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit otklik_1_dialog(QWidget *parent = nullptr, std::vector<Position> = std::vector<Position>());
    ~otklik_1_dialog();

private slots:
    void on_pushButton_clicked();
    void on_pos_comboBox_IndexChanged(int index);

signals:
    void AddEmpToCheck(Employee emp, int vac_i);

private:
    Ui::otklik_1_dialog *ui;
    std::vector<Position> POSES;
};

#endif // OTKLIK_1_DIALOG_H
