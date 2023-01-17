QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

RC_FILE = icon.rc

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    categorychoosingwindow.cpp \
    deleteitems.cpp \
    inquirebycategory.cpp \
    inquirebyheadline.cpp \
    inquirefunction.cpp \
    main.cpp \
    mainwindow.cpp \
    modifycategorybooks.cpp \
    modifycategorycds.cpp \
    updatebooks.cpp \
    updatecds.cpp \
    updateitems.cpp

HEADERS += \
    categorychoosingwindow.h \
    deleteitems.h \
    function_1_Books.h \
    function_1_CDs.h \
    function_2_category.h \
    function_2_headline.h \
    function_3_delete.h \
    function_4_update.h \
    function_4_update2.h \
    inquirebycategory.h \
    inquirebyheadline.h \
    inquirefunction.h \
    mainwindow.h \
    modifycategorybooks.h \
    modifycategorycds.h \
    updatebooks.h \
    updatecds.h \
    updateitems.h

FORMS += \
    categorychoosingwindow.ui \
    deleteitems.ui \
    inquirebycategory.ui \
    inquirebyheadline.ui \
    inquirefunction.ui \
    mainwindow.ui \
    modifycategorybooks.ui \
    modifycategorycds.ui \
    updatebooks.ui \
    updatecds.ui \
    updateitems.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Cache.txt \
    Library.txt \
    Parameter.txt

RESOURCES += \
    stuff.qrc
