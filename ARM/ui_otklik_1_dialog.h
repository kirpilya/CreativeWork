/********************************************************************************
** Form generated from reading UI file 'otklik_1_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTKLIK_1_DIALOG_H
#define UI_OTKLIK_1_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_otklik_1_dialog
{
public:
    QLabel *NAME_label;
    QLabel *f_name_label;
    QTextEdit *f_name_textEdit;
    QLabel *s_name_label;
    QTextEdit *s_name_textEdit;
    QLabel *p_name_label;
    QTextEdit *p_name_textEdit;
    QDateEdit *dateEdit;
    QLabel *date_label;
    QLabel *pasp_label;
    QTextEdit *pasp_textEdit;
    QLabel *email_label;
    QLabel *tel_label;
    QTextEdit *email_textEdit;
    QTextEdit *tel_textEdit;
    QFrame *line;
    QLabel *pos_label;
    QComboBox *pos_comboBox;
    QComboBox *edu_comboBox;
    QLabel *edu_label;
    QLabel *edu_place_label;
    QTextEdit *edu_place_textEdit;
    QLabel *exp_label;
    QSpinBox *exp_spinBox;
    QLabel *resume_label;
    QTextEdit *resume_textEdit;
    QPushButton *pushButton;
    QLabel *sal_label;
    QSpinBox *sal_spinBox;

    void setupUi(QDialog *otklik_1_dialog)
    {
        if (otklik_1_dialog->objectName().isEmpty())
            otklik_1_dialog->setObjectName(QString::fromUtf8("otklik_1_dialog"));
        otklik_1_dialog->resize(805, 630);
        otklik_1_dialog->setMinimumSize(QSize(805, 630));
        otklik_1_dialog->setMaximumSize(QSize(805, 630));
        NAME_label = new QLabel(otklik_1_dialog);
        NAME_label->setObjectName(QString::fromUtf8("NAME_label"));
        NAME_label->setGeometry(QRect(20, 20, 171, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        NAME_label->setFont(font);
        f_name_label = new QLabel(otklik_1_dialog);
        f_name_label->setObjectName(QString::fromUtf8("f_name_label"));
        f_name_label->setGeometry(QRect(20, 70, 41, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        f_name_label->setFont(font1);
        f_name_textEdit = new QTextEdit(otklik_1_dialog);
        f_name_textEdit->setObjectName(QString::fromUtf8("f_name_textEdit"));
        f_name_textEdit->setGeometry(QRect(120, 70, 161, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        f_name_textEdit->setFont(font2);
        f_name_textEdit->setFrameShape(QFrame::NoFrame);
        s_name_label = new QLabel(otklik_1_dialog);
        s_name_label->setObjectName(QString::fromUtf8("s_name_label"));
        s_name_label->setGeometry(QRect(20, 110, 71, 21));
        s_name_label->setFont(font1);
        s_name_textEdit = new QTextEdit(otklik_1_dialog);
        s_name_textEdit->setObjectName(QString::fromUtf8("s_name_textEdit"));
        s_name_textEdit->setGeometry(QRect(120, 110, 161, 25));
        s_name_textEdit->setFont(font2);
        s_name_textEdit->setFrameShape(QFrame::NoFrame);
        p_name_label = new QLabel(otklik_1_dialog);
        p_name_label->setObjectName(QString::fromUtf8("p_name_label"));
        p_name_label->setGeometry(QRect(20, 150, 71, 21));
        p_name_label->setFont(font1);
        p_name_textEdit = new QTextEdit(otklik_1_dialog);
        p_name_textEdit->setObjectName(QString::fromUtf8("p_name_textEdit"));
        p_name_textEdit->setGeometry(QRect(120, 150, 161, 25));
        p_name_textEdit->setFont(font2);
        p_name_textEdit->setFrameShape(QFrame::NoFrame);
        dateEdit = new QDateEdit(otklik_1_dialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(140, 190, 110, 25));
        dateEdit->setFont(font2);
        dateEdit->setFrame(false);
        date_label = new QLabel(otklik_1_dialog);
        date_label->setObjectName(QString::fromUtf8("date_label"));
        date_label->setGeometry(QRect(20, 190, 111, 21));
        date_label->setFont(font1);
        pasp_label = new QLabel(otklik_1_dialog);
        pasp_label->setObjectName(QString::fromUtf8("pasp_label"));
        pasp_label->setGeometry(QRect(20, 230, 141, 21));
        pasp_label->setFont(font1);
        pasp_textEdit = new QTextEdit(otklik_1_dialog);
        pasp_textEdit->setObjectName(QString::fromUtf8("pasp_textEdit"));
        pasp_textEdit->setGeometry(QRect(170, 230, 161, 25));
        pasp_textEdit->setFont(font2);
        pasp_textEdit->setFrameShape(QFrame::NoFrame);
        email_label = new QLabel(otklik_1_dialog);
        email_label->setObjectName(QString::fromUtf8("email_label"));
        email_label->setGeometry(QRect(20, 310, 41, 21));
        email_label->setFont(font1);
        tel_label = new QLabel(otklik_1_dialog);
        tel_label->setObjectName(QString::fromUtf8("tel_label"));
        tel_label->setGeometry(QRect(20, 270, 121, 21));
        tel_label->setFont(font1);
        email_textEdit = new QTextEdit(otklik_1_dialog);
        email_textEdit->setObjectName(QString::fromUtf8("email_textEdit"));
        email_textEdit->setGeometry(QRect(170, 310, 161, 25));
        email_textEdit->setFont(font2);
        email_textEdit->setFrameShape(QFrame::NoFrame);
        tel_textEdit = new QTextEdit(otklik_1_dialog);
        tel_textEdit->setObjectName(QString::fromUtf8("tel_textEdit"));
        tel_textEdit->setGeometry(QRect(170, 270, 161, 25));
        tel_textEdit->setFont(font2);
        tel_textEdit->setFrameShape(QFrame::NoFrame);
        line = new QFrame(otklik_1_dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(17, 345, 311, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pos_label = new QLabel(otklik_1_dialog);
        pos_label->setObjectName(QString::fromUtf8("pos_label"));
        pos_label->setGeometry(QRect(20, 370, 151, 21));
        pos_label->setFont(font1);
        pos_comboBox = new QComboBox(otklik_1_dialog);
        pos_comboBox->setObjectName(QString::fromUtf8("pos_comboBox"));
        pos_comboBox->setGeometry(QRect(190, 370, 141, 25));
        pos_comboBox->setFont(font2);
        pos_comboBox->setFrame(false);
        edu_comboBox = new QComboBox(otklik_1_dialog);
        edu_comboBox->addItem(QString());
        edu_comboBox->addItem(QString());
        edu_comboBox->addItem(QString());
        edu_comboBox->setObjectName(QString::fromUtf8("edu_comboBox"));
        edu_comboBox->setGeometry(QRect(190, 410, 141, 25));
        edu_comboBox->setFont(font2);
        edu_comboBox->setFrame(false);
        edu_label = new QLabel(otklik_1_dialog);
        edu_label->setObjectName(QString::fromUtf8("edu_label"));
        edu_label->setGeometry(QRect(20, 410, 101, 21));
        edu_label->setFont(font1);
        edu_place_label = new QLabel(otklik_1_dialog);
        edu_place_label->setObjectName(QString::fromUtf8("edu_place_label"));
        edu_place_label->setGeometry(QRect(20, 450, 121, 21));
        edu_place_label->setFont(font1);
        edu_place_textEdit = new QTextEdit(otklik_1_dialog);
        edu_place_textEdit->setObjectName(QString::fromUtf8("edu_place_textEdit"));
        edu_place_textEdit->setGeometry(QRect(170, 450, 161, 25));
        edu_place_textEdit->setFont(font2);
        edu_place_textEdit->setFrameShape(QFrame::NoFrame);
        exp_label = new QLabel(otklik_1_dialog);
        exp_label->setObjectName(QString::fromUtf8("exp_label"));
        exp_label->setGeometry(QRect(20, 490, 121, 21));
        exp_label->setFont(font1);
        exp_spinBox = new QSpinBox(otklik_1_dialog);
        exp_spinBox->setObjectName(QString::fromUtf8("exp_spinBox"));
        exp_spinBox->setGeometry(QRect(170, 490, 81, 25));
        exp_spinBox->setFont(font2);
        exp_spinBox->setFrame(false);
        resume_label = new QLabel(otklik_1_dialog);
        resume_label->setObjectName(QString::fromUtf8("resume_label"));
        resume_label->setGeometry(QRect(390, 40, 71, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        resume_label->setFont(font3);
        resume_textEdit = new QTextEdit(otklik_1_dialog);
        resume_textEdit->setObjectName(QString::fromUtf8("resume_textEdit"));
        resume_textEdit->setGeometry(QRect(370, 70, 411, 481));
        resume_textEdit->setFont(font1);
        resume_textEdit->setFrameShape(QFrame::NoFrame);
        pushButton = new QPushButton(otklik_1_dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 580, 141, 25));
        pushButton->setFont(font2);
        sal_label = new QLabel(otklik_1_dialog);
        sal_label->setObjectName(QString::fromUtf8("sal_label"));
        sal_label->setGeometry(QRect(20, 530, 141, 21));
        sal_label->setFont(font1);
        sal_spinBox = new QSpinBox(otklik_1_dialog);
        sal_spinBox->setObjectName(QString::fromUtf8("sal_spinBox"));
        sal_spinBox->setGeometry(QRect(170, 530, 81, 25));
        sal_spinBox->setFont(font2);
        sal_spinBox->setFrame(false);

        retranslateUi(otklik_1_dialog);

        QMetaObject::connectSlotsByName(otklik_1_dialog);
    } // setupUi

    void retranslateUi(QDialog *otklik_1_dialog)
    {
        otklik_1_dialog->setWindowTitle(QApplication::translate("otklik_1_dialog", "\320\236\321\202\320\272\320\273\320\270\320\272 \320\275\320\260 \320\262\320\260\320\272\320\260\320\275\321\201\320\270\321\216", nullptr));
        NAME_label->setText(QApplication::translate("otklik_1_dialog", "\320\236\321\202\320\272\320\273\320\270\320\272 \320\275\320\260 \320\262\320\260\320\272\320\260\320\275\321\201\320\270\321\216", nullptr));
        f_name_label->setText(QApplication::translate("otklik_1_dialog", "\320\230\320\274\321\217", nullptr));
        s_name_label->setText(QApplication::translate("otklik_1_dialog", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        p_name_label->setText(QApplication::translate("otklik_1_dialog", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        date_label->setText(QApplication::translate("otklik_1_dialog", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        pasp_label->setText(QApplication::translate("otklik_1_dialog", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        email_label->setText(QApplication::translate("otklik_1_dialog", "Email", nullptr));
        tel_label->setText(QApplication::translate("otklik_1_dialog", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        pos_label->setText(QApplication::translate("otklik_1_dialog", "\320\226\320\265\320\273\320\260\320\265\320\274\320\260\321\217 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        edu_comboBox->setItemText(0, QApplication::translate("otklik_1_dialog", "\320\262\321\213\321\201\321\210\320\265\320\265", nullptr));
        edu_comboBox->setItemText(1, QApplication::translate("otklik_1_dialog", "\321\201\321\200\320\265\320\264\320\275\320\265\320\265", nullptr));
        edu_comboBox->setItemText(2, QApplication::translate("otklik_1_dialog", "\320\275\320\265\321\202", nullptr));

        edu_label->setText(QApplication::translate("otklik_1_dialog", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        edu_place_label->setText(QApplication::translate("otklik_1_dialog", "*\320\234\320\265\321\201\321\202\320\276 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        exp_label->setText(QApplication::translate("otklik_1_dialog", "\320\236\320\277\321\213\321\202 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        resume_label->setText(QApplication::translate("otklik_1_dialog", "\320\240\320\265\320\267\321\216\320\274\320\265", nullptr));
        pushButton->setText(QApplication::translate("otklik_1_dialog", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        sal_label->setText(QApplication::translate("otklik_1_dialog", "\320\226\320\265\320\273\320\260\320\265\320\274\320\260\321\217 \320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class otklik_1_dialog: public Ui_otklik_1_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTKLIK_1_DIALOG_H
