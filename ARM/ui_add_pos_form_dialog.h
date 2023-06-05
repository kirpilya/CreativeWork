/********************************************************************************
** Form generated from reading UI file 'add_pos_form_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_POS_FORM_DIALOG_H
#define UI_ADD_POS_FORM_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_add_pos_form_dialog
{
public:
    QLabel *pos_title_info;
    QComboBox *edu_comboBox;
    QTextEdit *posname_textEdit;
    QLabel *exp_info;
    QLabel *exp_info_1;
    QLabel *exp_info_2;
    QLabel *edu_info;
    QLabel *sal_info;
    QLabel *sal_info_1;
    QLabel *sal_info_2;
    QLabel *age_info;
    QLabel *age_info_1;
    QLabel *age_info_2;
    QLabel *age_info_3;
    QPushButton *add_btn;
    QSpinBox *age_spinBox_1;
    QSpinBox *age_spinBox_2;
    QSpinBox *exp_spinBox;
    QSpinBox *sal_spinBox_1;
    QSpinBox *sal_spinBox_2;
    QLabel *dop_info_label;
    QTextEdit *dop_info_textEdit;

    void setupUi(QDialog *add_pos_form_dialog)
    {
        if (add_pos_form_dialog->objectName().isEmpty())
            add_pos_form_dialog->setObjectName(QString::fromUtf8("add_pos_form_dialog"));
        add_pos_form_dialog->resize(560, 440);
        add_pos_form_dialog->setMinimumSize(QSize(560, 440));
        add_pos_form_dialog->setMaximumSize(QSize(45456, 45645));
        pos_title_info = new QLabel(add_pos_form_dialog);
        pos_title_info->setObjectName(QString::fromUtf8("pos_title_info"));
        pos_title_info->setGeometry(QRect(20, 20, 81, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        pos_title_info->setFont(font);
        edu_comboBox = new QComboBox(add_pos_form_dialog);
        edu_comboBox->addItem(QString());
        edu_comboBox->addItem(QString());
        edu_comboBox->addItem(QString());
        edu_comboBox->setObjectName(QString::fromUtf8("edu_comboBox"));
        edu_comboBox->setGeometry(QRect(20, 260, 131, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setStyleStrategy(QFont::NoAntialias);
        edu_comboBox->setFont(font1);
        edu_comboBox->setFrame(false);
        posname_textEdit = new QTextEdit(add_pos_form_dialog);
        posname_textEdit->setObjectName(QString::fromUtf8("posname_textEdit"));
        posname_textEdit->setGeometry(QRect(20, 50, 161, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        posname_textEdit->setFont(font2);
        posname_textEdit->setFrameShape(QFrame::NoFrame);
        exp_info = new QLabel(add_pos_form_dialog);
        exp_info->setObjectName(QString::fromUtf8("exp_info"));
        exp_info->setGeometry(QRect(20, 160, 211, 21));
        exp_info->setFont(font);
        exp_info_1 = new QLabel(add_pos_form_dialog);
        exp_info_1->setObjectName(QString::fromUtf8("exp_info_1"));
        exp_info_1->setGeometry(QRect(110, 190, 31, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        exp_info_1->setFont(font3);
        exp_info_2 = new QLabel(add_pos_form_dialog);
        exp_info_2->setObjectName(QString::fromUtf8("exp_info_2"));
        exp_info_2->setGeometry(QRect(20, 190, 21, 21));
        exp_info_2->setFont(font3);
        edu_info = new QLabel(add_pos_form_dialog);
        edu_info->setObjectName(QString::fromUtf8("edu_info"));
        edu_info->setGeometry(QRect(20, 230, 101, 21));
        edu_info->setFont(font);
        sal_info = new QLabel(add_pos_form_dialog);
        sal_info->setObjectName(QString::fromUtf8("sal_info"));
        sal_info->setGeometry(QRect(20, 310, 141, 21));
        sal_info->setFont(font);
        sal_info_1 = new QLabel(add_pos_form_dialog);
        sal_info_1->setObjectName(QString::fromUtf8("sal_info_1"));
        sal_info_1->setGeometry(QRect(20, 340, 21, 21));
        sal_info_1->setFont(font3);
        sal_info_2 = new QLabel(add_pos_form_dialog);
        sal_info_2->setObjectName(QString::fromUtf8("sal_info_2"));
        sal_info_2->setGeometry(QRect(140, 340, 21, 21));
        sal_info_2->setFont(font3);
        age_info = new QLabel(add_pos_form_dialog);
        age_info->setObjectName(QString::fromUtf8("age_info"));
        age_info->setGeometry(QRect(20, 90, 151, 21));
        age_info->setFont(font);
        age_info_1 = new QLabel(add_pos_form_dialog);
        age_info_1->setObjectName(QString::fromUtf8("age_info_1"));
        age_info_1->setGeometry(QRect(20, 120, 21, 21));
        age_info_1->setFont(font3);
        age_info_2 = new QLabel(add_pos_form_dialog);
        age_info_2->setObjectName(QString::fromUtf8("age_info_2"));
        age_info_2->setGeometry(QRect(110, 120, 21, 21));
        age_info_2->setFont(font3);
        age_info_3 = new QLabel(add_pos_form_dialog);
        age_info_3->setObjectName(QString::fromUtf8("age_info_3"));
        age_info_3->setGeometry(QRect(200, 120, 31, 21));
        age_info_3->setFont(font3);
        add_btn = new QPushButton(add_pos_form_dialog);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setGeometry(QRect(20, 390, 211, 31));
        age_spinBox_1 = new QSpinBox(add_pos_form_dialog);
        age_spinBox_1->setObjectName(QString::fromUtf8("age_spinBox_1"));
        age_spinBox_1->setGeometry(QRect(50, 120, 51, 25));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(10);
        age_spinBox_1->setFont(font4);
        age_spinBox_1->setFrame(false);
        age_spinBox_2 = new QSpinBox(add_pos_form_dialog);
        age_spinBox_2->setObjectName(QString::fromUtf8("age_spinBox_2"));
        age_spinBox_2->setGeometry(QRect(140, 120, 51, 25));
        age_spinBox_2->setFont(font4);
        age_spinBox_2->setFrame(false);
        exp_spinBox = new QSpinBox(add_pos_form_dialog);
        exp_spinBox->setObjectName(QString::fromUtf8("exp_spinBox"));
        exp_spinBox->setGeometry(QRect(50, 190, 51, 25));
        exp_spinBox->setFont(font4);
        exp_spinBox->setFrame(false);
        sal_spinBox_1 = new QSpinBox(add_pos_form_dialog);
        sal_spinBox_1->setObjectName(QString::fromUtf8("sal_spinBox_1"));
        sal_spinBox_1->setGeometry(QRect(50, 340, 81, 25));
        sal_spinBox_1->setFont(font4);
        sal_spinBox_1->setFrame(false);
        sal_spinBox_1->setMaximum(9999999);
        sal_spinBox_2 = new QSpinBox(add_pos_form_dialog);
        sal_spinBox_2->setObjectName(QString::fromUtf8("sal_spinBox_2"));
        sal_spinBox_2->setGeometry(QRect(170, 340, 81, 25));
        sal_spinBox_2->setFont(font4);
        sal_spinBox_2->setFrame(false);
        sal_spinBox_2->setMaximum(9999999);
        dop_info_label = new QLabel(add_pos_form_dialog);
        dop_info_label->setObjectName(QString::fromUtf8("dop_info_label"));
        dop_info_label->setGeometry(QRect(270, 20, 161, 21));
        dop_info_label->setFont(font);
        dop_info_textEdit = new QTextEdit(add_pos_form_dialog);
        dop_info_textEdit->setObjectName(QString::fromUtf8("dop_info_textEdit"));
        dop_info_textEdit->setGeometry(QRect(270, 50, 271, 311));
        dop_info_textEdit->setFont(font4);
        dop_info_textEdit->setFrameShape(QFrame::NoFrame);

        retranslateUi(add_pos_form_dialog);

        edu_comboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(add_pos_form_dialog);
    } // setupUi

    void retranslateUi(QDialog *add_pos_form_dialog)
    {
        add_pos_form_dialog->setWindowTitle(QApplication::translate("add_pos_form_dialog", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\271 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        pos_title_info->setText(QApplication::translate("add_pos_form_dialog", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        edu_comboBox->setItemText(0, QApplication::translate("add_pos_form_dialog", "\320\262\321\213\321\201\321\210\320\265\320\265", nullptr));
        edu_comboBox->setItemText(1, QApplication::translate("add_pos_form_dialog", "\321\201\321\200\320\265\320\264\320\275\320\265\320\265", nullptr));
        edu_comboBox->setItemText(2, QApplication::translate("add_pos_form_dialog", "\320\275\320\265\321\202", nullptr));

        exp_info->setText(QApplication::translate("add_pos_form_dialog", "\320\235\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\321\213\320\271 \320\276\320\277\321\213\321\202 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        exp_info_1->setText(QApplication::translate("add_pos_form_dialog", "\320\273\320\265\321\202", nullptr));
        exp_info_2->setText(QApplication::translate("add_pos_form_dialog", "\320\236\321\202", nullptr));
        edu_info->setText(QApplication::translate("add_pos_form_dialog", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        sal_info->setText(QApplication::translate("add_pos_form_dialog", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\275\320\260\321\217 \320\262\320\270\320\273\320\272\320\260", nullptr));
        sal_info_1->setText(QApplication::translate("add_pos_form_dialog", "\320\236\321\202", nullptr));
        sal_info_2->setText(QApplication::translate("add_pos_form_dialog", "\320\224\320\276", nullptr));
        age_info->setText(QApplication::translate("add_pos_form_dialog", "\320\224\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260", nullptr));
        age_info_1->setText(QApplication::translate("add_pos_form_dialog", "\320\236\321\202", nullptr));
        age_info_2->setText(QApplication::translate("add_pos_form_dialog", "\320\224\320\276", nullptr));
        age_info_3->setText(QApplication::translate("add_pos_form_dialog", "\320\273\320\265\321\202", nullptr));
        add_btn->setText(QApplication::translate("add_pos_form_dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        dop_info_label->setText(QApplication::translate("add_pos_form_dialog", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_pos_form_dialog: public Ui_add_pos_form_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_POS_FORM_DIALOG_H
