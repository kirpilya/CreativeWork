/********************************************************************************
** Form generated from reading UI file 'add_vac_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_VAC_DIALOG_H
#define UI_ADD_VAC_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_add_vac_dialog
{
public:
    QLabel *pos_title_info;
    QComboBox *comboBox;
    QLabel *age_info_2;
    QLabel *age_info_3;
    QComboBox *edu_comboBox;
    QLabel *age_info;
    QLabel *exp_info;
    QLabel *sal_info_2;
    QLabel *exp_info_1;
    QLabel *sal_info;
    QLabel *age_info_1;
    QPushButton *add_btn;
    QLabel *exp_info_2;
    QLabel *sal_info_1;
    QLabel *edu_info;
    QSpinBox *age_spinBox_1;
    QSpinBox *age_spinBox_2;
    QSpinBox *exp_spinBox_1;
    QLabel *exp_info_4;
    QSpinBox *exp_spinBox_2;
    QSpinBox *sal_spinBox_1;
    QSpinBox *sal_spinBox_2;
    QLabel *dop_info_label;
    QTextEdit *dop_info_textEdit;

    void setupUi(QDialog *add_vac_dialog)
    {
        if (add_vac_dialog->objectName().isEmpty())
            add_vac_dialog->setObjectName(QString::fromUtf8("add_vac_dialog"));
        add_vac_dialog->resize(572, 420);
        pos_title_info = new QLabel(add_vac_dialog);
        pos_title_info->setObjectName(QString::fromUtf8("pos_title_info"));
        pos_title_info->setGeometry(QRect(20, 20, 81, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        pos_title_info->setFont(font);
        comboBox = new QComboBox(add_vac_dialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 50, 161, 25));
        QFont font1;
        font1.setPointSize(10);
        comboBox->setFont(font1);
        comboBox->setFrame(false);
        age_info_2 = new QLabel(add_vac_dialog);
        age_info_2->setObjectName(QString::fromUtf8("age_info_2"));
        age_info_2->setGeometry(QRect(110, 120, 21, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        age_info_2->setFont(font2);
        age_info_3 = new QLabel(add_vac_dialog);
        age_info_3->setObjectName(QString::fromUtf8("age_info_3"));
        age_info_3->setGeometry(QRect(200, 120, 41, 21));
        age_info_3->setFont(font2);
        edu_comboBox = new QComboBox(add_vac_dialog);
        edu_comboBox->addItem(QString());
        edu_comboBox->addItem(QString());
        edu_comboBox->addItem(QString());
        edu_comboBox->setObjectName(QString::fromUtf8("edu_comboBox"));
        edu_comboBox->setGeometry(QRect(20, 260, 131, 25));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(10);
        font3.setStyleStrategy(QFont::NoAntialias);
        edu_comboBox->setFont(font3);
        edu_comboBox->setFrame(false);
        age_info = new QLabel(add_vac_dialog);
        age_info->setObjectName(QString::fromUtf8("age_info"));
        age_info->setGeometry(QRect(20, 80, 71, 31));
        age_info->setFont(font);
        exp_info = new QLabel(add_vac_dialog);
        exp_info->setObjectName(QString::fromUtf8("exp_info"));
        exp_info->setGeometry(QRect(20, 160, 211, 21));
        exp_info->setFont(font);
        sal_info_2 = new QLabel(add_vac_dialog);
        sal_info_2->setObjectName(QString::fromUtf8("sal_info_2"));
        sal_info_2->setGeometry(QRect(140, 330, 21, 21));
        sal_info_2->setFont(font2);
        exp_info_1 = new QLabel(add_vac_dialog);
        exp_info_1->setObjectName(QString::fromUtf8("exp_info_1"));
        exp_info_1->setGeometry(QRect(200, 190, 41, 21));
        exp_info_1->setFont(font2);
        sal_info = new QLabel(add_vac_dialog);
        sal_info->setObjectName(QString::fromUtf8("sal_info"));
        sal_info->setGeometry(QRect(20, 300, 141, 16));
        sal_info->setFont(font);
        age_info_1 = new QLabel(add_vac_dialog);
        age_info_1->setObjectName(QString::fromUtf8("age_info_1"));
        age_info_1->setGeometry(QRect(20, 120, 21, 21));
        age_info_1->setFont(font2);
        add_btn = new QPushButton(add_vac_dialog);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setGeometry(QRect(20, 370, 211, 31));
        exp_info_2 = new QLabel(add_vac_dialog);
        exp_info_2->setObjectName(QString::fromUtf8("exp_info_2"));
        exp_info_2->setGeometry(QRect(20, 190, 21, 21));
        exp_info_2->setFont(font2);
        sal_info_1 = new QLabel(add_vac_dialog);
        sal_info_1->setObjectName(QString::fromUtf8("sal_info_1"));
        sal_info_1->setGeometry(QRect(20, 330, 21, 21));
        sal_info_1->setFont(font2);
        edu_info = new QLabel(add_vac_dialog);
        edu_info->setObjectName(QString::fromUtf8("edu_info"));
        edu_info->setGeometry(QRect(20, 230, 101, 21));
        edu_info->setFont(font);
        age_spinBox_1 = new QSpinBox(add_vac_dialog);
        age_spinBox_1->setObjectName(QString::fromUtf8("age_spinBox_1"));
        age_spinBox_1->setGeometry(QRect(50, 120, 51, 25));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(10);
        age_spinBox_1->setFont(font4);
        age_spinBox_1->setFrame(false);
        age_spinBox_2 = new QSpinBox(add_vac_dialog);
        age_spinBox_2->setObjectName(QString::fromUtf8("age_spinBox_2"));
        age_spinBox_2->setGeometry(QRect(140, 120, 51, 25));
        age_spinBox_2->setFont(font4);
        age_spinBox_2->setFrame(false);
        exp_spinBox_1 = new QSpinBox(add_vac_dialog);
        exp_spinBox_1->setObjectName(QString::fromUtf8("exp_spinBox_1"));
        exp_spinBox_1->setGeometry(QRect(50, 190, 51, 25));
        exp_spinBox_1->setFont(font4);
        exp_spinBox_1->setFrame(false);
        exp_info_4 = new QLabel(add_vac_dialog);
        exp_info_4->setObjectName(QString::fromUtf8("exp_info_4"));
        exp_info_4->setGeometry(QRect(110, 190, 21, 21));
        exp_info_4->setFont(font2);
        exp_spinBox_2 = new QSpinBox(add_vac_dialog);
        exp_spinBox_2->setObjectName(QString::fromUtf8("exp_spinBox_2"));
        exp_spinBox_2->setGeometry(QRect(140, 190, 51, 25));
        exp_spinBox_2->setFont(font4);
        exp_spinBox_2->setFrame(false);
        sal_spinBox_1 = new QSpinBox(add_vac_dialog);
        sal_spinBox_1->setObjectName(QString::fromUtf8("sal_spinBox_1"));
        sal_spinBox_1->setGeometry(QRect(50, 330, 81, 25));
        sal_spinBox_1->setFont(font4);
        sal_spinBox_1->setFrame(false);
        sal_spinBox_2 = new QSpinBox(add_vac_dialog);
        sal_spinBox_2->setObjectName(QString::fromUtf8("sal_spinBox_2"));
        sal_spinBox_2->setGeometry(QRect(170, 330, 81, 25));
        sal_spinBox_2->setFont(font4);
        sal_spinBox_2->setFrame(false);
        dop_info_label = new QLabel(add_vac_dialog);
        dop_info_label->setObjectName(QString::fromUtf8("dop_info_label"));
        dop_info_label->setGeometry(QRect(280, 20, 151, 21));
        dop_info_label->setFont(font);
        dop_info_textEdit = new QTextEdit(add_vac_dialog);
        dop_info_textEdit->setObjectName(QString::fromUtf8("dop_info_textEdit"));
        dop_info_textEdit->setGeometry(QRect(280, 50, 271, 311));
        dop_info_textEdit->setFont(font4);
        dop_info_textEdit->setFrameShape(QFrame::NoFrame);

        retranslateUi(add_vac_dialog);

        edu_comboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(add_vac_dialog);
    } // setupUi

    void retranslateUi(QDialog *add_vac_dialog)
    {
        add_vac_dialog->setWindowTitle(QApplication::translate("add_vac_dialog", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\262\320\260\320\272\320\260\320\275\321\201\320\270\320\270", nullptr));
        pos_title_info->setText(QApplication::translate("add_vac_dialog", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        age_info_2->setText(QApplication::translate("add_vac_dialog", "\320\224\320\276", nullptr));
        age_info_3->setText(QApplication::translate("add_vac_dialog", "\320\273\320\265\321\202", nullptr));
        edu_comboBox->setItemText(0, QApplication::translate("add_vac_dialog", "\320\262\321\213\321\201\321\210\320\265\320\265", nullptr));
        edu_comboBox->setItemText(1, QApplication::translate("add_vac_dialog", "\321\201\321\200\320\265\320\264\320\275\320\265\320\265", nullptr));
        edu_comboBox->setItemText(2, QApplication::translate("add_vac_dialog", "\320\275\320\265\321\202", nullptr));

        age_info->setText(QApplication::translate("add_vac_dialog", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        exp_info->setText(QApplication::translate("add_vac_dialog", "\320\236\320\277\321\213\321\202 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        sal_info_2->setText(QApplication::translate("add_vac_dialog", "\320\224\320\276", nullptr));
        exp_info_1->setText(QApplication::translate("add_vac_dialog", "\320\273\320\265\321\202", nullptr));
        sal_info->setText(QApplication::translate("add_vac_dialog", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
        age_info_1->setText(QApplication::translate("add_vac_dialog", "\320\236\321\202", nullptr));
        add_btn->setText(QApplication::translate("add_vac_dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        exp_info_2->setText(QApplication::translate("add_vac_dialog", "\320\236\321\202", nullptr));
        sal_info_1->setText(QApplication::translate("add_vac_dialog", "\320\236\321\202", nullptr));
        edu_info->setText(QApplication::translate("add_vac_dialog", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        exp_info_4->setText(QApplication::translate("add_vac_dialog", "\320\224\320\276", nullptr));
        dop_info_label->setText(QApplication::translate("add_vac_dialog", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\262\320\260\320\272\320\260\320\275\321\201\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_vac_dialog: public Ui_add_vac_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_VAC_DIALOG_H
