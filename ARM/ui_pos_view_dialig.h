/********************************************************************************
** Form generated from reading UI file 'pos_view_dialig.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POS_VIEW_DIALIG_H
#define UI_POS_VIEW_DIALIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_pos_view_dialig
{
public:
    QLabel *pos_name_label;
    QTextBrowser *pos_title_textBrowser;
    QLabel *age_label;
    QTextBrowser *age_textBrowser;
    QLabel *exp_label;
    QTextBrowser *exp_textBrowser;
    QLabel *edu_label;
    QTextBrowser *edu_title_textBrowser;
    QLabel *sal_label;
    QTextBrowser *sal_textBrowser;
    QTextBrowser *textBrowser;
    QLabel *dop_info_label;

    void setupUi(QDialog *pos_view_dialig)
    {
        if (pos_view_dialig->objectName().isEmpty())
            pos_view_dialig->setObjectName(QString::fromUtf8("pos_view_dialig"));
        pos_view_dialig->resize(600, 230);
        pos_view_dialig->setMinimumSize(QSize(330, 220));
        pos_view_dialig->setMaximumSize(QSize(600, 230));
        pos_name_label = new QLabel(pos_view_dialig);
        pos_name_label->setObjectName(QString::fromUtf8("pos_name_label"));
        pos_name_label->setGeometry(QRect(20, 20, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        pos_name_label->setFont(font);
        pos_title_textBrowser = new QTextBrowser(pos_view_dialig);
        pos_title_textBrowser->setObjectName(QString::fromUtf8("pos_title_textBrowser"));
        pos_title_textBrowser->setGeometry(QRect(130, 20, 161, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        pos_title_textBrowser->setFont(font1);
        pos_title_textBrowser->setFrameShape(QFrame::NoFrame);
        age_label = new QLabel(pos_view_dialig);
        age_label->setObjectName(QString::fromUtf8("age_label"));
        age_label->setGeometry(QRect(20, 60, 91, 21));
        age_label->setFont(font);
        age_textBrowser = new QTextBrowser(pos_view_dialig);
        age_textBrowser->setObjectName(QString::fromUtf8("age_textBrowser"));
        age_textBrowser->setGeometry(QRect(130, 60, 71, 25));
        age_textBrowser->setFont(font1);
        age_textBrowser->setFrameShape(QFrame::NoFrame);
        exp_label = new QLabel(pos_view_dialig);
        exp_label->setObjectName(QString::fromUtf8("exp_label"));
        exp_label->setGeometry(QRect(20, 100, 91, 21));
        exp_label->setFont(font);
        exp_textBrowser = new QTextBrowser(pos_view_dialig);
        exp_textBrowser->setObjectName(QString::fromUtf8("exp_textBrowser"));
        exp_textBrowser->setGeometry(QRect(130, 100, 71, 25));
        exp_textBrowser->setFont(font1);
        exp_textBrowser->setFrameShape(QFrame::NoFrame);
        edu_label = new QLabel(pos_view_dialig);
        edu_label->setObjectName(QString::fromUtf8("edu_label"));
        edu_label->setGeometry(QRect(20, 140, 101, 21));
        edu_label->setFont(font);
        edu_title_textBrowser = new QTextBrowser(pos_view_dialig);
        edu_title_textBrowser->setObjectName(QString::fromUtf8("edu_title_textBrowser"));
        edu_title_textBrowser->setGeometry(QRect(130, 140, 161, 25));
        edu_title_textBrowser->setFont(font1);
        edu_title_textBrowser->setFrameShape(QFrame::NoFrame);
        sal_label = new QLabel(pos_view_dialig);
        sal_label->setObjectName(QString::fromUtf8("sal_label"));
        sal_label->setGeometry(QRect(20, 180, 101, 21));
        sal_label->setFont(font);
        sal_textBrowser = new QTextBrowser(pos_view_dialig);
        sal_textBrowser->setObjectName(QString::fromUtf8("sal_textBrowser"));
        sal_textBrowser->setGeometry(QRect(130, 180, 161, 25));
        sal_textBrowser->setFont(font1);
        sal_textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser = new QTextBrowser(pos_view_dialig);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(310, 60, 271, 151));
        textBrowser->setFont(font1);
        textBrowser->setFrameShape(QFrame::NoFrame);
        dop_info_label = new QLabel(pos_view_dialig);
        dop_info_label->setObjectName(QString::fromUtf8("dop_info_label"));
        dop_info_label->setGeometry(QRect(310, 20, 161, 21));
        dop_info_label->setFont(font);

        retranslateUi(pos_view_dialig);

        QMetaObject::connectSlotsByName(pos_view_dialig);
    } // setupUi

    void retranslateUi(QDialog *pos_view_dialig)
    {
        pos_view_dialig->setWindowTitle(QApplication::translate("pos_view_dialig", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        pos_name_label->setText(QApplication::translate("pos_view_dialig", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        age_label->setText(QApplication::translate("pos_view_dialig", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        exp_label->setText(QApplication::translate("pos_view_dialig", "\320\236\320\277\321\213\321\202 \320\276\321\202", nullptr));
        edu_label->setText(QApplication::translate("pos_view_dialig", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        sal_label->setText(QApplication::translate("pos_view_dialig", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
        dop_info_label->setText(QApplication::translate("pos_view_dialig", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pos_view_dialig: public Ui_pos_view_dialig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POS_VIEW_DIALIG_H
