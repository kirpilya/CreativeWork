#ifndef VAC_VIEW_DIALOG_H
#define VAC_VIEW_DIALOG_H

#include <QDialog>
#include "Position.h"

namespace Ui {
class vac_view_dialog;
}

class vac_view_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit vac_view_dialog(QWidget *parent = nullptr, Position vac = Position());
    ~vac_view_dialog();

private:
    Ui::vac_view_dialog *ui;
    Position VAC;
};

#endif // VAC_VIEW_DIALOG_H
