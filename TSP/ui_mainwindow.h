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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *add_ver_btn;
    QTextEdit *add_ver_textEdit;
    QLabel *add_ver_status_label;
    QLabel *add_ver_name_label;
    QLabel *add_ver_info_label;
    QPushButton *del_ver_btn;
    QTextEdit *add_ver_vername_textEdit;
    QLabel *add_edge_name_label;
    QLabel *add_edge_f_label;
    QTextEdit *add_edge_f_textEdit;
    QTextEdit *add_edge_s_textEdit;
    QLabel *add_edge_s_label;
    QTextEdit *add_edge_ves_textEdit;
    QLabel *add_edge_ves_label;
    QPushButton *add_edge_btn;
    QLabel *add_edge_status_label;
    QPushButton *del_edge_btn;
    QLabel *BFS_name_label;
    QLabel *BFS_info_label;
    QTextEdit *BFS_textEdit;
    QPushButton *BFS_btn;
    QTextBrowser *BFS_result_textBrowser;
    QLabel *BFS_status_label;
    QPushButton *DFS_btn;
    QPushButton *DA_btn;
    QPushButton *example_graph_btn;
    QPushButton *example_graph_btn_2;
    QLabel *TSP_info_label;
    QLabel *TSP_name_label;
    QTextEdit *TSP_textEdit;
    QTextBrowser *TSP_result_textBrowser;
    QLabel *TSP_status_label;
    QPushButton *TSP_btn;
    QTextBrowser *TSP_result_textBrowser_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1160, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1160, 700));
        MainWindow->setMaximumSize(QSize(1160, 700));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(460, 20, 680, 660));
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        add_ver_btn = new QPushButton(centralwidget);
        add_ver_btn->setObjectName(QString::fromUtf8("add_ver_btn"));
        add_ver_btn->setGeometry(QRect(20, 100, 71, 30));
        add_ver_textEdit = new QTextEdit(centralwidget);
        add_ver_textEdit->setObjectName(QString::fromUtf8("add_ver_textEdit"));
        add_ver_textEdit->setGeometry(QRect(70, 60, 140, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        add_ver_textEdit->setFont(font);
        add_ver_status_label = new QLabel(centralwidget);
        add_ver_status_label->setObjectName(QString::fromUtf8("add_ver_status_label"));
        add_ver_status_label->setGeometry(QRect(219, 60, 211, 30));
        add_ver_status_label->setFont(font);
        add_ver_name_label = new QLabel(centralwidget);
        add_ver_name_label->setObjectName(QString::fromUtf8("add_ver_name_label"));
        add_ver_name_label->setGeometry(QRect(20, 15, 231, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        add_ver_name_label->setFont(font1);
        add_ver_info_label = new QLabel(centralwidget);
        add_ver_info_label->setObjectName(QString::fromUtf8("add_ver_info_label"));
        add_ver_info_label->setGeometry(QRect(20, 35, 431, 21));
        add_ver_info_label->setFont(font);
        del_ver_btn = new QPushButton(centralwidget);
        del_ver_btn->setObjectName(QString::fromUtf8("del_ver_btn"));
        del_ver_btn->setGeometry(QRect(100, 100, 71, 30));
        add_ver_vername_textEdit = new QTextEdit(centralwidget);
        add_ver_vername_textEdit->setObjectName(QString::fromUtf8("add_ver_vername_textEdit"));
        add_ver_vername_textEdit->setGeometry(QRect(20, 60, 40, 30));
        add_ver_vername_textEdit->setFont(font);
        add_edge_name_label = new QLabel(centralwidget);
        add_edge_name_label->setObjectName(QString::fromUtf8("add_edge_name_label"));
        add_edge_name_label->setGeometry(QRect(20, 155, 291, 20));
        add_edge_name_label->setFont(font1);
        add_edge_f_label = new QLabel(centralwidget);
        add_edge_f_label->setObjectName(QString::fromUtf8("add_edge_f_label"));
        add_edge_f_label->setGeometry(QRect(20, 180, 20, 30));
        add_edge_f_label->setFont(font);
        add_edge_f_textEdit = new QTextEdit(centralwidget);
        add_edge_f_textEdit->setObjectName(QString::fromUtf8("add_edge_f_textEdit"));
        add_edge_f_textEdit->setGeometry(QRect(50, 180, 40, 30));
        add_edge_f_textEdit->setFont(font);
        add_edge_s_textEdit = new QTextEdit(centralwidget);
        add_edge_s_textEdit->setObjectName(QString::fromUtf8("add_edge_s_textEdit"));
        add_edge_s_textEdit->setGeometry(QRect(120, 180, 40, 30));
        add_edge_s_textEdit->setFont(font);
        add_edge_s_label = new QLabel(centralwidget);
        add_edge_s_label->setObjectName(QString::fromUtf8("add_edge_s_label"));
        add_edge_s_label->setGeometry(QRect(100, 180, 10, 30));
        add_edge_s_label->setFont(font);
        add_edge_ves_textEdit = new QTextEdit(centralwidget);
        add_edge_ves_textEdit->setObjectName(QString::fromUtf8("add_edge_ves_textEdit"));
        add_edge_ves_textEdit->setGeometry(QRect(205, 180, 40, 30));
        add_edge_ves_textEdit->setFont(font);
        add_edge_ves_label = new QLabel(centralwidget);
        add_edge_ves_label->setObjectName(QString::fromUtf8("add_edge_ves_label"));
        add_edge_ves_label->setGeometry(QRect(170, 180, 25, 30));
        add_edge_ves_label->setFont(font);
        add_edge_btn = new QPushButton(centralwidget);
        add_edge_btn->setObjectName(QString::fromUtf8("add_edge_btn"));
        add_edge_btn->setGeometry(QRect(20, 220, 71, 30));
        add_edge_status_label = new QLabel(centralwidget);
        add_edge_status_label->setObjectName(QString::fromUtf8("add_edge_status_label"));
        add_edge_status_label->setGeometry(QRect(259, 180, 191, 30));
        add_edge_status_label->setFont(font);
        del_edge_btn = new QPushButton(centralwidget);
        del_edge_btn->setObjectName(QString::fromUtf8("del_edge_btn"));
        del_edge_btn->setGeometry(QRect(100, 220, 71, 30));
        BFS_name_label = new QLabel(centralwidget);
        BFS_name_label->setObjectName(QString::fromUtf8("BFS_name_label"));
        BFS_name_label->setGeometry(QRect(20, 270, 81, 20));
        BFS_name_label->setFont(font1);
        BFS_info_label = new QLabel(centralwidget);
        BFS_info_label->setObjectName(QString::fromUtf8("BFS_info_label"));
        BFS_info_label->setGeometry(QRect(20, 290, 125, 30));
        BFS_info_label->setFont(font);
        BFS_textEdit = new QTextEdit(centralwidget);
        BFS_textEdit->setObjectName(QString::fromUtf8("BFS_textEdit"));
        BFS_textEdit->setGeometry(QRect(155, 290, 40, 30));
        BFS_textEdit->setFont(font);
        BFS_btn = new QPushButton(centralwidget);
        BFS_btn->setObjectName(QString::fromUtf8("BFS_btn"));
        BFS_btn->setGeometry(QRect(20, 370, 101, 30));
        BFS_result_textBrowser = new QTextBrowser(centralwidget);
        BFS_result_textBrowser->setObjectName(QString::fromUtf8("BFS_result_textBrowser"));
        BFS_result_textBrowser->setGeometry(QRect(20, 330, 341, 30));
        BFS_result_textBrowser->setFont(font);
        BFS_status_label = new QLabel(centralwidget);
        BFS_status_label->setObjectName(QString::fromUtf8("BFS_status_label"));
        BFS_status_label->setGeometry(QRect(209, 290, 231, 30));
        BFS_status_label->setFont(font);
        DFS_btn = new QPushButton(centralwidget);
        DFS_btn->setObjectName(QString::fromUtf8("DFS_btn"));
        DFS_btn->setGeometry(QRect(130, 370, 101, 30));
        DA_btn = new QPushButton(centralwidget);
        DA_btn->setObjectName(QString::fromUtf8("DA_btn"));
        DA_btn->setGeometry(QRect(240, 370, 121, 30));
        example_graph_btn = new QPushButton(centralwidget);
        example_graph_btn->setObjectName(QString::fromUtf8("example_graph_btn"));
        example_graph_btn->setGeometry(QRect(20, 655, 100, 25));
        example_graph_btn->setFont(font);
        example_graph_btn_2 = new QPushButton(centralwidget);
        example_graph_btn_2->setObjectName(QString::fromUtf8("example_graph_btn_2"));
        example_graph_btn_2->setGeometry(QRect(130, 655, 100, 25));
        example_graph_btn_2->setFont(font);
        TSP_info_label = new QLabel(centralwidget);
        TSP_info_label->setObjectName(QString::fromUtf8("TSP_info_label"));
        TSP_info_label->setGeometry(QRect(21, 450, 125, 30));
        TSP_info_label->setFont(font);
        TSP_name_label = new QLabel(centralwidget);
        TSP_name_label->setObjectName(QString::fromUtf8("TSP_name_label"));
        TSP_name_label->setGeometry(QRect(21, 425, 161, 20));
        TSP_name_label->setFont(font1);
        TSP_textEdit = new QTextEdit(centralwidget);
        TSP_textEdit->setObjectName(QString::fromUtf8("TSP_textEdit"));
        TSP_textEdit->setGeometry(QRect(156, 450, 40, 30));
        TSP_textEdit->setFont(font);
        TSP_result_textBrowser = new QTextBrowser(centralwidget);
        TSP_result_textBrowser->setObjectName(QString::fromUtf8("TSP_result_textBrowser"));
        TSP_result_textBrowser->setGeometry(QRect(21, 490, 341, 30));
        TSP_result_textBrowser->setFont(font);
        TSP_status_label = new QLabel(centralwidget);
        TSP_status_label->setObjectName(QString::fromUtf8("TSP_status_label"));
        TSP_status_label->setGeometry(QRect(250, 450, 191, 30));
        TSP_status_label->setFont(font);
        TSP_btn = new QPushButton(centralwidget);
        TSP_btn->setObjectName(QString::fromUtf8("TSP_btn"));
        TSP_btn->setGeometry(QRect(205, 450, 30, 30));
        TSP_result_textBrowser_2 = new QTextBrowser(centralwidget);
        TSP_result_textBrowser_2->setObjectName(QString::fromUtf8("TSP_result_textBrowser_2"));
        TSP_result_textBrowser_2->setGeometry(QRect(20, 530, 161, 30));
        TSP_result_textBrowser_2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1160, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "qtGraphs", nullptr));
        add_ver_btn->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        add_ver_status_label->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\200\321\210\320\270\320\275: 0", nullptr));
        add_ver_name_label->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 / \320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\262\320\265\321\200\321\210\320\270\320\275\321\213", nullptr));
        add_ver_info_label->setText(QApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\270 \320\262\320\265\321\200\321\210\320\270\320\275\321\213 \320\264\320\273\321\217 \321\201\320\262\321\217\320\267\320\270 (0 \320\270\320\273\320\270 \320\262\320\265\321\201 \321\200\320\265\320\261\321\200\320\260) \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273", nullptr));
        del_ver_btn->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        add_edge_name_label->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 (\320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265) / \320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\200\320\265\320\261\321\200\320\260", nullptr));
        add_edge_f_label->setText(QApplication::translate("MainWindow", "\320\236\321\202", nullptr));
        add_edge_s_label->setText(QApplication::translate("MainWindow", "\320\232", nullptr));
        add_edge_ves_label->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\201", nullptr));
        add_edge_btn->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        add_edge_status_label->setText(QString());
        del_edge_btn->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        BFS_name_label->setText(QApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\213", nullptr));
        BFS_info_label->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        BFS_btn->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\205\320\276\320\264 \320\262 \321\210\320\270\321\200\320\270\320\275\321\203", nullptr));
        BFS_status_label->setText(QString());
        DFS_btn->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\205\320\276\320\264 \320\262 \320\263\320\273\321\203\320\261\320\270\320\275\321\203", nullptr));
        DA_btn->setText(QApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\224\320\265\320\271\320\272\321\201\321\202\321\200\321\213", nullptr));
        example_graph_btn->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\200 \320\263\321\200\320\260\321\204\320\260", nullptr));
        example_graph_btn_2->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\263\321\200\320\260\321\204", nullptr));
        TSP_info_label->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        TSP_name_label->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 \320\272\320\276\320\274\320\274\320\270\320\262\320\276\321\217\320\266\321\221\321\200\320\260", nullptr));
        TSP_status_label->setText(QString());
        TSP_btn->setText(QApplication::translate("MainWindow", "->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
