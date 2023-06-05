/********************************************************************************
** Form generated from reading UI file 'vac_view_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VAC_VIEW_DIALOG_H
#define UI_VAC_VIEW_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_vac_view_dialog
{
public:
    QTextBrowser *exp_textBrowser;
    QLabel *pos_name_label;
    QLabel *age_label;
    QTextBrowser *edu_title_textBrowser;
    QLabel *sal_label;
    QTextBrowser *pos_title_textBrowser;
    QLabel *exp_label;
    QTextBrowser *age_textBrowser;
    QTextBrowser *sal_textBrowser;
    QLabel *edu_label;
    QLabel *dop_info_label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *vac_view_dialog)
    {
        if (vac_view_dialog->objectName().isEmpty())
            vac_view_dialog->setObjectName(QString::fromUtf8("vac_view_dialog"));
        vac_view_dialog->resize(600, 230);
        vac_view_dialog->setMinimumSize(QSize(600, 230));
        vac_view_dialog->setMaximumSize(QSize(600, 230));
        exp_textBrowser = new QTextBrowser(vac_view_dialog);
        exp_textBrowser->setObjectName(QString::fromUtf8("exp_textBrowser"));
        exp_textBrowser->setGeometry(QRect(130, 100, 71, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        exp_textBrowser->setFont(font);
        exp_textBrowser->setFrameShape(QFrame::NoFrame);
        pos_name_label = new QLabel(vac_view_dialog);
        pos_name_label->setObjectName(QString::fromUtf8("pos_name_label"));
        pos_name_label->setGeometry(QRect(20, 20, 91, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        pos_name_label->setFont(font1);
        age_label = new QLabel(vac_view_dialog);
        age_label->setObjectName(QString::fromUtf8("age_label"));
        age_label->setGeometry(QRect(20, 60, 91, 21));
        age_label->setFont(font1);
        edu_title_textBrowser = new QTextBrowser(vac_view_dialog);
        edu_title_textBrowser->setObjectName(QString::fromUtf8("edu_title_textBrowser"));
        edu_title_textBrowser->setGeometry(QRect(130, 140, 161, 25));
        edu_title_textBrowser->setFont(font);
        edu_title_textBrowser->setFrameShape(QFrame::NoFrame);
        sal_label = new QLabel(vac_view_dialog);
        sal_label->setObjectName(QString::fromUtf8("sal_label"));
        sal_label->setGeometry(QRect(20, 180, 101, 21));
        sal_label->setFont(font1);
        pos_title_textBrowser = new QTextBrowser(vac_view_dialog);
        pos_title_textBrowser->setObjectName(QString::fromUtf8("pos_title_textBrowser"));
        pos_title_textBrowser->setGeometry(QRect(130, 20, 161, 25));
        pos_title_textBrowser->setFont(font);
        pos_title_textBrowser->setFrameShape(QFrame::NoFrame);
        exp_label = new QLabel(vac_view_dialog);
        exp_label->setObjectName(QString::fromUtf8("exp_label"));
        exp_label->setGeometry(QRect(20, 100, 91, 21));
        exp_label->setFont(font1);
        age_textBrowser = new QTextBrowser(vac_view_dialog);
        age_textBrowser->setObjectName(QString::fromUtf8("age_textBrowser"));
        age_textBrowser->setGeometry(QRect(130, 60, 71, 25));
        age_textBrowser->setFont(font);
        age_textBrowser->setFrameShape(QFrame::NoFrame);
        sal_textBrowser = new QTextBrowser(vac_view_dialog);
        sal_textBrowser->setObjectName(QString::fromUtf8("sal_textBrowser"));
        sal_textBrowser->setGeometry(QRect(130, 180, 161, 25));
        sal_textBrowser->setFont(font);
        sal_textBrowser->setFrameShape(QFrame::NoFrame);
        edu_label = new QLabel(vac_view_dialog);
        edu_label->setObjectName(QString::fromUtf8("edu_label"));
        edu_label->setGeometry(QRect(20, 140, 101, 21));
        edu_label->setFont(font1);
        dop_info_label = new QLabel(vac_view_dialog);
        dop_info_label->setObjectName(QString::fromUtf8("dop_info_label"));
        dop_info_label->setGeometry(QRect(310, 20, 151, 21));
        dop_info_label->setFont(font1);
        textBrowser = new QTextBrowser(vac_view_dialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(310, 60, 271, 151));
        textBrowser->setFont(font);
        textBrowser->setFrameShape(QFrame::NoFrame);

        retranslateUi(vac_view_dialog);

        QMetaObject::connectSlotsByName(vac_view_dialog);
    } // setupUi

    void retranslateUi(QDialog *vac_view_dialog)
    {
        vac_view_dialog->setWindowTitle(QApplication::translate("vac_view_dialog", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\262\320\260\320\272\320\260\320\275\321\201\320\270\320\270", nullptr));
        pos_name_label->setText(QApplication::translate("vac_view_dialog", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        age_label->setText(QApplication::translate("vac_view_dialog", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        sal_label->setText(QApplication::translate("vac_view_dialog", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
        exp_label->setText(QApplication::translate("vac_view_dialog", "\320\236\320\277\321\213\321\202", nullptr));
        edu_label->setText(QApplication::translate("vac_view_dialog", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        dop_info_label->setText(QApplication::translate("vac_view_dialog", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\262\320\260\320\272\320\260\320\275\321\201\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vac_view_dialog: public Ui_vac_view_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VAC_VIEW_DIALOG_H
