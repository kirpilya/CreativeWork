/********************************************************************************
** Form generated from reading UI file 'emp_view_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMP_VIEW_DIALOG_H
#define UI_EMP_VIEW_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_emp_view_dialog
{
public:
    QTextBrowser *edu_place__textBrowser;
    QLabel *date_label;
    QTextBrowser *pasp_textBrowser;
    QTextBrowser *edu_textBrowser;
    QTextBrowser *email_textBrowser;
    QTextBrowser *pos_textBrowser;
    QLabel *email_label;
    QLabel *pos_label;
    QTextBrowser *f_name_textBrowser;
    QLabel *pasp_label;
    QTextBrowser *s_name_textBrowser;
    QTextBrowser *sal_textBrowser;
    QLabel *tel_label;
    QLabel *edu_place_label;
    QLabel *sal_label;
    QLabel *s_name_label;
    QFrame *line;
    QLabel *edu_label;
    QTextBrowser *p_name_textBrowser;
    QLabel *exp_label;
    QTextBrowser *tel_textBrowser;
    QLabel *p_name_label;
    QTextBrowser *age_textBrowser;
    QTextBrowser *exp_textBrowser;
    QLabel *f_name_label;

    void setupUi(QDialog *emp_view_dialog)
    {
        if (emp_view_dialog->objectName().isEmpty())
            emp_view_dialog->setObjectName(QString::fromUtf8("emp_view_dialog"));
        emp_view_dialog->resize(366, 528);
        edu_place__textBrowser = new QTextBrowser(emp_view_dialog);
        edu_place__textBrowser->setObjectName(QString::fromUtf8("edu_place__textBrowser"));
        edu_place__textBrowser->setGeometry(QRect(180, 400, 161, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        edu_place__textBrowser->setFont(font);
        edu_place__textBrowser->setFrameShape(QFrame::NoFrame);
        date_label = new QLabel(emp_view_dialog);
        date_label->setObjectName(QString::fromUtf8("date_label"));
        date_label->setGeometry(QRect(20, 140, 61, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        date_label->setFont(font1);
        pasp_textBrowser = new QTextBrowser(emp_view_dialog);
        pasp_textBrowser->setObjectName(QString::fromUtf8("pasp_textBrowser"));
        pasp_textBrowser->setGeometry(QRect(180, 180, 161, 25));
        pasp_textBrowser->setFont(font);
        pasp_textBrowser->setFrameShape(QFrame::NoFrame);
        edu_textBrowser = new QTextBrowser(emp_view_dialog);
        edu_textBrowser->setObjectName(QString::fromUtf8("edu_textBrowser"));
        edu_textBrowser->setGeometry(QRect(180, 360, 161, 25));
        edu_textBrowser->setFont(font);
        edu_textBrowser->setFrameShape(QFrame::NoFrame);
        email_textBrowser = new QTextBrowser(emp_view_dialog);
        email_textBrowser->setObjectName(QString::fromUtf8("email_textBrowser"));
        email_textBrowser->setGeometry(QRect(180, 260, 161, 25));
        email_textBrowser->setFont(font);
        email_textBrowser->setFrameShape(QFrame::NoFrame);
        pos_textBrowser = new QTextBrowser(emp_view_dialog);
        pos_textBrowser->setObjectName(QString::fromUtf8("pos_textBrowser"));
        pos_textBrowser->setGeometry(QRect(180, 320, 161, 25));
        pos_textBrowser->setFont(font);
        pos_textBrowser->setFrameShape(QFrame::NoFrame);
        email_label = new QLabel(emp_view_dialog);
        email_label->setObjectName(QString::fromUtf8("email_label"));
        email_label->setGeometry(QRect(20, 260, 41, 21));
        email_label->setFont(font1);
        pos_label = new QLabel(emp_view_dialog);
        pos_label->setObjectName(QString::fromUtf8("pos_label"));
        pos_label->setGeometry(QRect(20, 320, 151, 21));
        pos_label->setFont(font1);
        f_name_textBrowser = new QTextBrowser(emp_view_dialog);
        f_name_textBrowser->setObjectName(QString::fromUtf8("f_name_textBrowser"));
        f_name_textBrowser->setGeometry(QRect(120, 20, 161, 25));
        f_name_textBrowser->setFont(font);
        f_name_textBrowser->setFrameShape(QFrame::NoFrame);
        pasp_label = new QLabel(emp_view_dialog);
        pasp_label->setObjectName(QString::fromUtf8("pasp_label"));
        pasp_label->setGeometry(QRect(20, 180, 141, 21));
        pasp_label->setFont(font1);
        s_name_textBrowser = new QTextBrowser(emp_view_dialog);
        s_name_textBrowser->setObjectName(QString::fromUtf8("s_name_textBrowser"));
        s_name_textBrowser->setGeometry(QRect(120, 60, 161, 25));
        s_name_textBrowser->setFont(font);
        s_name_textBrowser->setFrameShape(QFrame::NoFrame);
        sal_textBrowser = new QTextBrowser(emp_view_dialog);
        sal_textBrowser->setObjectName(QString::fromUtf8("sal_textBrowser"));
        sal_textBrowser->setGeometry(QRect(180, 480, 81, 25));
        sal_textBrowser->setFont(font);
        sal_textBrowser->setFrameShape(QFrame::NoFrame);
        tel_label = new QLabel(emp_view_dialog);
        tel_label->setObjectName(QString::fromUtf8("tel_label"));
        tel_label->setGeometry(QRect(20, 220, 121, 21));
        tel_label->setFont(font1);
        edu_place_label = new QLabel(emp_view_dialog);
        edu_place_label->setObjectName(QString::fromUtf8("edu_place_label"));
        edu_place_label->setGeometry(QRect(20, 400, 121, 21));
        edu_place_label->setFont(font1);
        sal_label = new QLabel(emp_view_dialog);
        sal_label->setObjectName(QString::fromUtf8("sal_label"));
        sal_label->setGeometry(QRect(20, 480, 141, 21));
        sal_label->setFont(font1);
        s_name_label = new QLabel(emp_view_dialog);
        s_name_label->setObjectName(QString::fromUtf8("s_name_label"));
        s_name_label->setGeometry(QRect(20, 60, 71, 21));
        s_name_label->setFont(font1);
        line = new QFrame(emp_view_dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(17, 295, 311, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        edu_label = new QLabel(emp_view_dialog);
        edu_label->setObjectName(QString::fromUtf8("edu_label"));
        edu_label->setGeometry(QRect(20, 360, 101, 21));
        edu_label->setFont(font1);
        p_name_textBrowser = new QTextBrowser(emp_view_dialog);
        p_name_textBrowser->setObjectName(QString::fromUtf8("p_name_textBrowser"));
        p_name_textBrowser->setGeometry(QRect(120, 100, 161, 25));
        p_name_textBrowser->setFont(font);
        p_name_textBrowser->setFrameShape(QFrame::NoFrame);
        exp_label = new QLabel(emp_view_dialog);
        exp_label->setObjectName(QString::fromUtf8("exp_label"));
        exp_label->setGeometry(QRect(20, 440, 121, 21));
        exp_label->setFont(font1);
        tel_textBrowser = new QTextBrowser(emp_view_dialog);
        tel_textBrowser->setObjectName(QString::fromUtf8("tel_textBrowser"));
        tel_textBrowser->setGeometry(QRect(180, 220, 161, 25));
        tel_textBrowser->setFont(font);
        tel_textBrowser->setFrameShape(QFrame::NoFrame);
        p_name_label = new QLabel(emp_view_dialog);
        p_name_label->setObjectName(QString::fromUtf8("p_name_label"));
        p_name_label->setGeometry(QRect(20, 100, 71, 21));
        p_name_label->setFont(font1);
        age_textBrowser = new QTextBrowser(emp_view_dialog);
        age_textBrowser->setObjectName(QString::fromUtf8("age_textBrowser"));
        age_textBrowser->setGeometry(QRect(120, 140, 51, 25));
        age_textBrowser->setFont(font);
        age_textBrowser->setFrameShape(QFrame::NoFrame);
        exp_textBrowser = new QTextBrowser(emp_view_dialog);
        exp_textBrowser->setObjectName(QString::fromUtf8("exp_textBrowser"));
        exp_textBrowser->setGeometry(QRect(180, 440, 81, 25));
        exp_textBrowser->setFont(font);
        exp_textBrowser->setFrameShape(QFrame::NoFrame);
        f_name_label = new QLabel(emp_view_dialog);
        f_name_label->setObjectName(QString::fromUtf8("f_name_label"));
        f_name_label->setGeometry(QRect(20, 20, 41, 21));
        f_name_label->setFont(font1);

        retranslateUi(emp_view_dialog);

        QMetaObject::connectSlotsByName(emp_view_dialog);
    } // setupUi

    void retranslateUi(QDialog *emp_view_dialog)
    {
        emp_view_dialog->setWindowTitle(QApplication::translate("emp_view_dialog", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        date_label->setText(QApplication::translate("emp_view_dialog", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        email_label->setText(QApplication::translate("emp_view_dialog", "Email", nullptr));
        pos_label->setText(QApplication::translate("emp_view_dialog", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        pasp_label->setText(QApplication::translate("emp_view_dialog", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        tel_label->setText(QApplication::translate("emp_view_dialog", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        edu_place_label->setText(QApplication::translate("emp_view_dialog", "\320\234\320\265\321\201\321\202\320\276 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        sal_label->setText(QApplication::translate("emp_view_dialog", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
        s_name_label->setText(QApplication::translate("emp_view_dialog", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        edu_label->setText(QApplication::translate("emp_view_dialog", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        exp_label->setText(QApplication::translate("emp_view_dialog", "\320\236\320\277\321\213\321\202 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        p_name_label->setText(QApplication::translate("emp_view_dialog", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        f_name_label->setText(QApplication::translate("emp_view_dialog", "\320\230\320\274\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class emp_view_dialog: public Ui_emp_view_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMP_VIEW_DIALOG_H
