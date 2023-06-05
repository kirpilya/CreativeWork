/********************************************************************************
** Form generated from reading UI file 'check_vac_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_VAC_DIALOG_H
#define UI_CHECK_VAC_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_check_vac_dialog
{
public:
    QLabel *edu_place_label;
    QLabel *sal_label;
    QLabel *edu_label;
    QLabel *s_name_label;
    QLabel *pos_label;
    QFrame *line;
    QLabel *resume_label;
    QPushButton *yes_pushButton;
    QLabel *tel_label;
    QLabel *NAME_label;
    QLabel *p_name_label;
    QLabel *email_label;
    QLabel *pasp_label;
    QLabel *f_name_label;
    QLabel *exp_label;
    QLabel *date_label;
    QTextBrowser *f_name_textBrowser;
    QTextBrowser *s_name_textBrowser;
    QTextBrowser *p_name_textBrowser;
    QTextBrowser *age_textBrowser;
    QTextBrowser *pasp_textBrowser;
    QTextBrowser *tel_textBrowser;
    QTextBrowser *email_textBrowser;
    QTextBrowser *pos_textBrowser;
    QTextBrowser *edu_textBrowser;
    QTextBrowser *edu_place__textBrowser;
    QTextBrowser *exp_textBrowser;
    QTextBrowser *sal_textBrowser;
    QPushButton *no_pushButton;
    QTextBrowser *res_textBrowser;

    void setupUi(QDialog *check_vac_dialog)
    {
        if (check_vac_dialog->objectName().isEmpty())
            check_vac_dialog->setObjectName(QString::fromUtf8("check_vac_dialog"));
        check_vac_dialog->resize(800, 610);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        check_vac_dialog->setFont(font);
        edu_place_label = new QLabel(check_vac_dialog);
        edu_place_label->setObjectName(QString::fromUtf8("edu_place_label"));
        edu_place_label->setGeometry(QRect(20, 440, 121, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        edu_place_label->setFont(font1);
        sal_label = new QLabel(check_vac_dialog);
        sal_label->setObjectName(QString::fromUtf8("sal_label"));
        sal_label->setGeometry(QRect(20, 520, 141, 21));
        sal_label->setFont(font1);
        edu_label = new QLabel(check_vac_dialog);
        edu_label->setObjectName(QString::fromUtf8("edu_label"));
        edu_label->setGeometry(QRect(20, 400, 101, 21));
        edu_label->setFont(font1);
        s_name_label = new QLabel(check_vac_dialog);
        s_name_label->setObjectName(QString::fromUtf8("s_name_label"));
        s_name_label->setGeometry(QRect(20, 100, 71, 21));
        s_name_label->setFont(font1);
        pos_label = new QLabel(check_vac_dialog);
        pos_label->setObjectName(QString::fromUtf8("pos_label"));
        pos_label->setGeometry(QRect(20, 360, 151, 21));
        pos_label->setFont(font1);
        line = new QFrame(check_vac_dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(17, 335, 311, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        resume_label = new QLabel(check_vac_dialog);
        resume_label->setObjectName(QString::fromUtf8("resume_label"));
        resume_label->setGeometry(QRect(390, 30, 71, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        resume_label->setFont(font2);
        yes_pushButton = new QPushButton(check_vac_dialog);
        yes_pushButton->setObjectName(QString::fromUtf8("yes_pushButton"));
        yes_pushButton->setGeometry(QRect(20, 570, 141, 25));
        yes_pushButton->setFont(font);
        tel_label = new QLabel(check_vac_dialog);
        tel_label->setObjectName(QString::fromUtf8("tel_label"));
        tel_label->setGeometry(QRect(20, 260, 121, 21));
        tel_label->setFont(font1);
        NAME_label = new QLabel(check_vac_dialog);
        NAME_label->setObjectName(QString::fromUtf8("NAME_label"));
        NAME_label->setGeometry(QRect(20, 10, 171, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        NAME_label->setFont(font3);
        p_name_label = new QLabel(check_vac_dialog);
        p_name_label->setObjectName(QString::fromUtf8("p_name_label"));
        p_name_label->setGeometry(QRect(20, 140, 71, 21));
        p_name_label->setFont(font1);
        email_label = new QLabel(check_vac_dialog);
        email_label->setObjectName(QString::fromUtf8("email_label"));
        email_label->setGeometry(QRect(20, 300, 41, 21));
        email_label->setFont(font1);
        pasp_label = new QLabel(check_vac_dialog);
        pasp_label->setObjectName(QString::fromUtf8("pasp_label"));
        pasp_label->setGeometry(QRect(20, 220, 141, 21));
        pasp_label->setFont(font1);
        f_name_label = new QLabel(check_vac_dialog);
        f_name_label->setObjectName(QString::fromUtf8("f_name_label"));
        f_name_label->setGeometry(QRect(20, 60, 41, 21));
        f_name_label->setFont(font1);
        exp_label = new QLabel(check_vac_dialog);
        exp_label->setObjectName(QString::fromUtf8("exp_label"));
        exp_label->setGeometry(QRect(20, 480, 121, 21));
        exp_label->setFont(font1);
        date_label = new QLabel(check_vac_dialog);
        date_label->setObjectName(QString::fromUtf8("date_label"));
        date_label->setGeometry(QRect(20, 180, 61, 21));
        date_label->setFont(font1);
        f_name_textBrowser = new QTextBrowser(check_vac_dialog);
        f_name_textBrowser->setObjectName(QString::fromUtf8("f_name_textBrowser"));
        f_name_textBrowser->setGeometry(QRect(120, 60, 161, 25));
        f_name_textBrowser->setFrameShape(QFrame::NoFrame);
        s_name_textBrowser = new QTextBrowser(check_vac_dialog);
        s_name_textBrowser->setObjectName(QString::fromUtf8("s_name_textBrowser"));
        s_name_textBrowser->setGeometry(QRect(120, 100, 161, 25));
        s_name_textBrowser->setFrameShape(QFrame::NoFrame);
        p_name_textBrowser = new QTextBrowser(check_vac_dialog);
        p_name_textBrowser->setObjectName(QString::fromUtf8("p_name_textBrowser"));
        p_name_textBrowser->setGeometry(QRect(120, 140, 161, 25));
        p_name_textBrowser->setFrameShape(QFrame::NoFrame);
        age_textBrowser = new QTextBrowser(check_vac_dialog);
        age_textBrowser->setObjectName(QString::fromUtf8("age_textBrowser"));
        age_textBrowser->setGeometry(QRect(120, 180, 51, 25));
        age_textBrowser->setFrameShape(QFrame::NoFrame);
        pasp_textBrowser = new QTextBrowser(check_vac_dialog);
        pasp_textBrowser->setObjectName(QString::fromUtf8("pasp_textBrowser"));
        pasp_textBrowser->setGeometry(QRect(180, 220, 161, 25));
        pasp_textBrowser->setFrameShape(QFrame::NoFrame);
        tel_textBrowser = new QTextBrowser(check_vac_dialog);
        tel_textBrowser->setObjectName(QString::fromUtf8("tel_textBrowser"));
        tel_textBrowser->setGeometry(QRect(180, 260, 161, 25));
        tel_textBrowser->setFrameShape(QFrame::NoFrame);
        email_textBrowser = new QTextBrowser(check_vac_dialog);
        email_textBrowser->setObjectName(QString::fromUtf8("email_textBrowser"));
        email_textBrowser->setGeometry(QRect(180, 300, 161, 25));
        email_textBrowser->setFrameShape(QFrame::NoFrame);
        pos_textBrowser = new QTextBrowser(check_vac_dialog);
        pos_textBrowser->setObjectName(QString::fromUtf8("pos_textBrowser"));
        pos_textBrowser->setGeometry(QRect(180, 360, 161, 25));
        pos_textBrowser->setFrameShape(QFrame::NoFrame);
        edu_textBrowser = new QTextBrowser(check_vac_dialog);
        edu_textBrowser->setObjectName(QString::fromUtf8("edu_textBrowser"));
        edu_textBrowser->setGeometry(QRect(180, 400, 161, 25));
        edu_textBrowser->setFrameShape(QFrame::NoFrame);
        edu_place__textBrowser = new QTextBrowser(check_vac_dialog);
        edu_place__textBrowser->setObjectName(QString::fromUtf8("edu_place__textBrowser"));
        edu_place__textBrowser->setGeometry(QRect(180, 440, 161, 25));
        edu_place__textBrowser->setFrameShape(QFrame::NoFrame);
        exp_textBrowser = new QTextBrowser(check_vac_dialog);
        exp_textBrowser->setObjectName(QString::fromUtf8("exp_textBrowser"));
        exp_textBrowser->setGeometry(QRect(180, 480, 81, 25));
        exp_textBrowser->setFrameShape(QFrame::NoFrame);
        sal_textBrowser = new QTextBrowser(check_vac_dialog);
        sal_textBrowser->setObjectName(QString::fromUtf8("sal_textBrowser"));
        sal_textBrowser->setGeometry(QRect(180, 520, 81, 25));
        sal_textBrowser->setFrameShape(QFrame::NoFrame);
        no_pushButton = new QPushButton(check_vac_dialog);
        no_pushButton->setObjectName(QString::fromUtf8("no_pushButton"));
        no_pushButton->setGeometry(QRect(180, 570, 141, 25));
        no_pushButton->setFont(font);
        res_textBrowser = new QTextBrowser(check_vac_dialog);
        res_textBrowser->setObjectName(QString::fromUtf8("res_textBrowser"));
        res_textBrowser->setGeometry(QRect(360, 60, 421, 491));
        res_textBrowser->setFrameShape(QFrame::NoFrame);

        retranslateUi(check_vac_dialog);

        QMetaObject::connectSlotsByName(check_vac_dialog);
    } // setupUi

    void retranslateUi(QDialog *check_vac_dialog)
    {
        check_vac_dialog->setWindowTitle(QApplication::translate("check_vac_dialog", "\320\227\320\260\321\217\320\262\320\272\320\260 \320\277\320\276 \320\262\320\260\320\272\320\260\320\275\321\201\320\270\320\270", nullptr));
        edu_place_label->setText(QApplication::translate("check_vac_dialog", "*\320\234\320\265\321\201\321\202\320\276 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        sal_label->setText(QApplication::translate("check_vac_dialog", "\320\226\320\265\320\273\320\260\320\265\320\274\320\260\321\217 \320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
        edu_label->setText(QApplication::translate("check_vac_dialog", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        s_name_label->setText(QApplication::translate("check_vac_dialog", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        pos_label->setText(QApplication::translate("check_vac_dialog", "\320\226\320\265\320\273\320\260\320\265\320\274\320\260\321\217 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        resume_label->setText(QApplication::translate("check_vac_dialog", "\320\240\320\265\320\267\321\216\320\274\320\265", nullptr));
        yes_pushButton->setText(QApplication::translate("check_vac_dialog", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        tel_label->setText(QApplication::translate("check_vac_dialog", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        NAME_label->setText(QApplication::translate("check_vac_dialog", "\320\227\320\260\321\217\320\262\320\272\320\260 \320\277\320\276 \320\262\320\260\320\272\320\260\320\275\321\201\320\270\320\270", nullptr));
        p_name_label->setText(QApplication::translate("check_vac_dialog", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        email_label->setText(QApplication::translate("check_vac_dialog", "Email", nullptr));
        pasp_label->setText(QApplication::translate("check_vac_dialog", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        f_name_label->setText(QApplication::translate("check_vac_dialog", "\320\230\320\274\321\217", nullptr));
        exp_label->setText(QApplication::translate("check_vac_dialog", "\320\236\320\277\321\213\321\202 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        date_label->setText(QApplication::translate("check_vac_dialog", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        no_pushButton->setText(QApplication::translate("check_vac_dialog", "\320\236\321\202\320\272\320\273\320\276\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class check_vac_dialog: public Ui_check_vac_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_VAC_DIALOG_H
