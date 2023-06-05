#ifndef ADD_VAC_DIALOG_H
#define ADD_VAC_DIALOG_H

#include <QDialog>
#include <vector>
#include "Position.h"

namespace Ui {
class add_vac_dialog;
}

class add_vac_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit add_vac_dialog(QWidget *parent = nullptr, std::vector<Position> = std::vector<Position>());
    ~add_vac_dialog();

private slots:
    void on_add_btn_clicked();
    void onComboBoxIndexChanged(int index);

signals:
    void AddVac(Position new_pos);

private:
    Ui::add_vac_dialog *ui;
    std::vector<Position> POSES;
};

#endif // ADD_VAC_DIALOG_H
