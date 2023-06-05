#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

#include "edit_name_dialog.h"
#include "add_pos_form_dialog.h"

#include "Company.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString pos_file;
    QString vac_file;
    QString emp_file;
    QString name_file;

private slots:

    void on_cmp_name_edit_btn_clicked();
    void updateCMPname(QString name);

    void on_add_pos_pushButton_clicked();
    void on_AddPos_fun(Position new_pos);

    void on_add_vac_pushButton_clicked();
    void on_AddVac_fun(Position new_pos);

    void on_AddEmpToCheck_fun(Employee emp, int vac_i);

    void on_AddEmp_Yes(Employee emp);

private:
    Ui::MainWindow *ui;
    Company company;
    void UPDstat();
    void SAVE();

    // функции сохранения
    void WritePositionsToFile(const std::vector<Position>& positions, const QString& filename);
    std::vector<Position> ReadPositionsFromFile(const QString& filename);

    void WriteEmployeesToFile(const QString& filename, const std::vector<Employee>& employees);
    std::vector<Employee> ReadEmployeesFromFile(const QString& filename);

    void writeStringToFile(const QString& text, const QString& filePath);
    QString readStringFromFile(const QString& filePath);

protected:
    void closeEvent(QCloseEvent *event) override;
};
#endif // MAINWINDOW_H
