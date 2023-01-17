/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *closeItemsButton;
    QPushButton *refreshItemsButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *addItemsButton;
    QPushButton *inquireItemsButton;
    QPushButton *showItemsButton;
    QPushButton *deleteItemsButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setIconSize(QSize(29, 29));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        QFont font;
        font.setPointSize(12);
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);

        closeItemsButton = new QPushButton(centralwidget);
        closeItemsButton->setObjectName("closeItemsButton");

        verticalLayout->addWidget(closeItemsButton);

        refreshItemsButton = new QPushButton(centralwidget);
        refreshItemsButton->setObjectName("refreshItemsButton");

        verticalLayout->addWidget(refreshItemsButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addItemsButton = new QPushButton(centralwidget);
        addItemsButton->setObjectName("addItemsButton");

        horizontalLayout->addWidget(addItemsButton);

        inquireItemsButton = new QPushButton(centralwidget);
        inquireItemsButton->setObjectName("inquireItemsButton");

        horizontalLayout->addWidget(inquireItemsButton);

        showItemsButton = new QPushButton(centralwidget);
        showItemsButton->setObjectName("showItemsButton");

        horizontalLayout->addWidget(showItemsButton);

        deleteItemsButton = new QPushButton(centralwidget);
        deleteItemsButton->setObjectName("deleteItemsButton");

        horizontalLayout->addWidget(deleteItemsButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        closeItemsButton->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\347\211\251\345\223\201\346\240\217", nullptr));
        refreshItemsButton->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\347\211\251\345\223\201\346\240\217", nullptr));
        addItemsButton->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\211\251\345\223\201", nullptr));
        inquireItemsButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\347\211\251\345\223\201", nullptr));
        showItemsButton->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\211\251\345\223\201\346\240\217", nullptr));
        deleteItemsButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\347\211\251\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
