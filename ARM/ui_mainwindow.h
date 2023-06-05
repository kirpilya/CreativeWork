/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *Employee_tableWidget;
    QLabel *cmp_name_label;
    QTableWidget *vac_tableWidget;
    QListWidget *poses_listWidget;
    QLabel *cmp_struct_label;
    QLabel *cmp_poses_name_label;
    QPushButton *add_pos_pushButton;
    QLabel *cmp_info_label;
    QLabel *emp_count_label;
    QLabel *vac_count_label;
    QLabel *sal_count_label;
    QPushButton *cmp_name_edit_btn;
    QLabel *pos_count_label;
    QLabel *cmp_vac_label;
    QPushButton *add_vac_pushButton;
    QFrame *line;
    QLabel *cmp_emp_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(850, 499);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Employee_tableWidget = new QTableWidget(centralwidget);
        if (Employee_tableWidget->columnCount() < 6)
            Employee_tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Employee_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Employee_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Employee_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Employee_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Employee_tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Employee_tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        Employee_tableWidget->setObjectName(QString::fromUtf8("Employee_tableWidget"));
        Employee_tableWidget->setGeometry(QRect(20, 290, 811, 191));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        Employee_tableWidget->setFont(font);
        Employee_tableWidget->setFrameShape(QFrame::NoFrame);
        Employee_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Employee_tableWidget->setSortingEnabled(true);
        Employee_tableWidget->setRowCount(0);
        Employee_tableWidget->setColumnCount(6);
        Employee_tableWidget->horizontalHeader()->setVisible(false);
        Employee_tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        Employee_tableWidget->horizontalHeader()->setDefaultSectionSize(130);
        Employee_tableWidget->horizontalHeader()->setHighlightSections(false);
        Employee_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        Employee_tableWidget->horizontalHeader()->setStretchLastSection(true);
        Employee_tableWidget->verticalHeader()->setVisible(false);
        Employee_tableWidget->verticalHeader()->setCascadingSectionResizes(true);
        Employee_tableWidget->verticalHeader()->setHighlightSections(false);
        cmp_name_label = new QLabel(centralwidget);
        cmp_name_label->setObjectName(QString::fromUtf8("cmp_name_label"));
        cmp_name_label->setGeometry(QRect(20, 0, 851, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        cmp_name_label->setFont(font1);
        vac_tableWidget = new QTableWidget(centralwidget);
        if (vac_tableWidget->columnCount() < 4)
            vac_tableWidget->setColumnCount(4);
        QFont font2;
        font2.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font2);
        vac_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font2);
        vac_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font2);
        vac_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        vac_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        vac_tableWidget->setObjectName(QString::fromUtf8("vac_tableWidget"));
        vac_tableWidget->setGeometry(QRect(420, 80, 411, 131));
        vac_tableWidget->setFrameShape(QFrame::NoFrame);
        vac_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vac_tableWidget->setColumnCount(4);
        vac_tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        vac_tableWidget->horizontalHeader()->setHighlightSections(false);
        vac_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        vac_tableWidget->horizontalHeader()->setStretchLastSection(true);
        vac_tableWidget->verticalHeader()->setVisible(false);
        vac_tableWidget->verticalHeader()->setHighlightSections(false);
        poses_listWidget = new QListWidget(centralwidget);
        poses_listWidget->setObjectName(QString::fromUtf8("poses_listWidget"));
        poses_listWidget->setGeometry(QRect(20, 110, 161, 101));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(11);
        poses_listWidget->setFont(font3);
        poses_listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        poses_listWidget->setFrameShape(QFrame::NoFrame);
        poses_listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        cmp_struct_label = new QLabel(centralwidget);
        cmp_struct_label->setObjectName(QString::fromUtf8("cmp_struct_label"));
        cmp_struct_label->setGeometry(QRect(20, 50, 171, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        cmp_struct_label->setFont(font4);
        cmp_poses_name_label = new QLabel(centralwidget);
        cmp_poses_name_label->setObjectName(QString::fromUtf8("cmp_poses_name_label"));
        cmp_poses_name_label->setGeometry(QRect(20, 80, 91, 21));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setWeight(75);
        cmp_poses_name_label->setFont(font5);
        add_pos_pushButton = new QPushButton(centralwidget);
        add_pos_pushButton->setObjectName(QString::fromUtf8("add_pos_pushButton"));
        add_pos_pushButton->setGeometry(QRect(20, 220, 161, 25));
        add_pos_pushButton->setFont(font);
        cmp_info_label = new QLabel(centralwidget);
        cmp_info_label->setObjectName(QString::fromUtf8("cmp_info_label"));
        cmp_info_label->setGeometry(QRect(200, 80, 111, 21));
        cmp_info_label->setFont(font4);
        emp_count_label = new QLabel(centralwidget);
        emp_count_label->setObjectName(QString::fromUtf8("emp_count_label"));
        emp_count_label->setGeometry(QRect(200, 130, 101, 16));
        emp_count_label->setFont(font);
        vac_count_label = new QLabel(centralwidget);
        vac_count_label->setObjectName(QString::fromUtf8("vac_count_label"));
        vac_count_label->setGeometry(QRect(200, 150, 101, 16));
        vac_count_label->setFont(font);
        sal_count_label = new QLabel(centralwidget);
        sal_count_label->setObjectName(QString::fromUtf8("sal_count_label"));
        sal_count_label->setGeometry(QRect(200, 170, 171, 41));
        sal_count_label->setFont(font);
        sal_count_label->setTextFormat(Qt::RichText);
        sal_count_label->setWordWrap(true);
        cmp_name_edit_btn = new QPushButton(centralwidget);
        cmp_name_edit_btn->setObjectName(QString::fromUtf8("cmp_name_edit_btn"));
        cmp_name_edit_btn->setGeometry(QRect(200, 220, 161, 25));
        cmp_name_edit_btn->setFont(font);
        pos_count_label = new QLabel(centralwidget);
        pos_count_label->setObjectName(QString::fromUtf8("pos_count_label"));
        pos_count_label->setGeometry(QRect(200, 110, 101, 16));
        pos_count_label->setFont(font);
        cmp_vac_label = new QLabel(centralwidget);
        cmp_vac_label->setObjectName(QString::fromUtf8("cmp_vac_label"));
        cmp_vac_label->setGeometry(QRect(420, 50, 81, 21));
        cmp_vac_label->setFont(font4);
        add_vac_pushButton = new QPushButton(centralwidget);
        add_vac_pushButton->setObjectName(QString::fromUtf8("add_vac_pushButton"));
        add_vac_pushButton->setGeometry(QRect(420, 220, 161, 25));
        add_vac_pushButton->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-3, 25, 891, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        cmp_emp_label = new QLabel(centralwidget);
        cmp_emp_label->setObjectName(QString::fromUtf8("cmp_emp_label"));
        cmp_emp_label->setGeometry(QRect(20, 260, 171, 21));
        cmp_emp_label->setFont(font4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 850, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Employee_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Employee_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Employee_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Employee_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Employee_tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\320\236\320\277\321\213\321\202 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Employee_tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        cmp_name_label->setText(QApplication::translate("MainWindow", "\320\236\320\236\320\236 \"\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270\"", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = vac_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = vac_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\320\236\320\277\321\213\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = vac_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = vac_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
        cmp_struct_label->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        cmp_poses_name_label->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        add_pos_pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        cmp_info_label->setText(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        emp_count_label->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\262: 0", nullptr));
        vac_count_label->setText(QApplication::translate("MainWindow", "\320\222\320\260\320\272\320\260\320\275\321\201\320\270\320\271: 0", nullptr));
        sal_count_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\260\321\217 \320\276\320\277\320\273\320\260\321\202\320\260<br/>\321\202\321\200\321\203\320\264\320\260 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\262: 0</p></body></html>", nullptr));
        cmp_name_edit_btn->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        pos_count_label->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\267\320\270\321\206\320\270\320\271: 0", nullptr));
        cmp_vac_label->setText(QApplication::translate("MainWindow", "\320\222\320\260\320\272\320\260\320\275\321\201\320\270\320\270", nullptr));
        add_vac_pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\260\320\272\320\260\320\275\321\201\320\270\321\216", nullptr));
        cmp_emp_label->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
