/********************************************************************************
** Form generated from reading UI file 'edit_name_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_NAME_DIALOG_H
#define UI_EDIT_NAME_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_edit_name_dialog
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *edit_name_dialog)
    {
        if (edit_name_dialog->objectName().isEmpty())
            edit_name_dialog->setObjectName(QString::fromUtf8("edit_name_dialog"));
        edit_name_dialog->resize(300, 200);
        edit_name_dialog->setMinimumSize(QSize(300, 200));
        edit_name_dialog->setMaximumSize(QSize(300, 200));
        pushButton = new QPushButton(edit_name_dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 120, 191, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        pushButton->setFont(font);
        textEdit = new QTextEdit(edit_name_dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(50, 80, 191, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        textEdit->setFont(font1);

        retranslateUi(edit_name_dialog);

        QMetaObject::connectSlotsByName(edit_name_dialog);
    } // setupUi

    void retranslateUi(QDialog *edit_name_dialog)
    {
        edit_name_dialog->setWindowTitle(QApplication::translate("edit_name_dialog", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217", nullptr));
        pushButton->setText(QApplication::translate("edit_name_dialog", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_name_dialog: public Ui_edit_name_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_NAME_DIALOG_H
