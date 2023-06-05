QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_pos_form_dialog.cpp \
    add_vac_dialog.cpp \
    check_vac_dialog.cpp \
    edit_name_dialog.cpp \
    emp_view_dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    otklik_1_dialog.cpp \
    pos_view_dialig.cpp \
    vac_view_dialog.cpp

HEADERS += \
    Company.h \
    Employee.h \
    Position.h \
    add_pos_form_dialog.h \
    add_vac_dialog.h \
    check_vac_dialog.h \
    edit_name_dialog.h \
    emp_view_dialog.h \
    mainwindow.h \
    otklik_1_dialog.h \
    pos_view_dialig.h \
    vac_view_dialog.h

FORMS += \
    add_pos_form_dialog.ui \
    add_vac_dialog.ui \
    check_vac_dialog.ui \
    edit_name_dialog.ui \
    emp_view_dialog.ui \
    mainwindow.ui \
    otklik_1_dialog.ui \
    pos_view_dialig.ui \
    vac_view_dialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
