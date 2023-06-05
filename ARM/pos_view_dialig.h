#ifndef POS_VIEW_DIALIG_H
#define POS_VIEW_DIALIG_H

#include <QDialog>
#include "Position.h"

namespace Ui {
class pos_view_dialig;
}

class pos_view_dialig : public QDialog
{
    Q_OBJECT

public:
    explicit pos_view_dialig(QWidget *parent = nullptr, Position pos = Position());
    ~pos_view_dialig();

private:
    Ui::pos_view_dialig *ui;
    Position POS;
};

#endif // POS_VIEW_DIALIG_H
