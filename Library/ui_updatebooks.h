/********************************************************************************
** Form generated from reading UI file 'updatebooks.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBOOKS_H
#define UI_UPDATEBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateBooks
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *ID;
    QLabel *headLine;
    QLabel *authorName;
    QLabel *Publisher;
    QLabel *ISBN;
    QLabel *Pages;
    QPushButton *confirmButton;
    QPushButton *exitButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Books_1;
    QLineEdit *Books_2;
    QLineEdit *Books_3;
    QLineEdit *Books_4;
    QLineEdit *Books_5;
    QLineEdit *Books_6;
    QLabel *item2;
    QLineEdit *IDShow;
    QLabel *item;
    QPushButton *refreshButton;

    void setupUi(QWidget *updateBooks)
    {
        if (updateBooks->objectName().isEmpty())
            updateBooks->setObjectName("updateBooks");
        updateBooks->resize(400, 345);
        layoutWidget = new QWidget(updateBooks);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 60, 71, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ID = new QLabel(layoutWidget);
        ID->setObjectName("ID");

        verticalLayout->addWidget(ID);

        headLine = new QLabel(layoutWidget);
        headLine->setObjectName("headLine");

        verticalLayout->addWidget(headLine);

        authorName = new QLabel(layoutWidget);
        authorName->setObjectName("authorName");

        verticalLayout->addWidget(authorName);

        Publisher = new QLabel(layoutWidget);
        Publisher->setObjectName("Publisher");

        verticalLayout->addWidget(Publisher);

        ISBN = new QLabel(layoutWidget);
        ISBN->setObjectName("ISBN");

        verticalLayout->addWidget(ISBN);

        Pages = new QLabel(layoutWidget);
        Pages->setObjectName("Pages");

        verticalLayout->addWidget(Pages);

        confirmButton = new QPushButton(updateBooks);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(50, 280, 92, 29));
        exitButton = new QPushButton(updateBooks);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(240, 280, 92, 29));
        layoutWidget_2 = new QWidget(updateBooks);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(110, 60, 211, 219));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Books_1 = new QLineEdit(layoutWidget_2);
        Books_1->setObjectName("Books_1");

        verticalLayout_2->addWidget(Books_1);

        Books_2 = new QLineEdit(layoutWidget_2);
        Books_2->setObjectName("Books_2");

        verticalLayout_2->addWidget(Books_2);

        Books_3 = new QLineEdit(layoutWidget_2);
        Books_3->setObjectName("Books_3");

        verticalLayout_2->addWidget(Books_3);

        Books_4 = new QLineEdit(layoutWidget_2);
        Books_4->setObjectName("Books_4");

        verticalLayout_2->addWidget(Books_4);

        Books_5 = new QLineEdit(layoutWidget_2);
        Books_5->setObjectName("Books_5");

        verticalLayout_2->addWidget(Books_5);

        Books_6 = new QLineEdit(layoutWidget_2);
        Books_6->setObjectName("Books_6");

        verticalLayout_2->addWidget(Books_6);

        item2 = new QLabel(updateBooks);
        item2->setObjectName("item2");
        item2->setGeometry(QRect(248, 12, 75, 20));
        IDShow = new QLineEdit(updateBooks);
        IDShow->setObjectName("IDShow");
        IDShow->setGeometry(QRect(330, 13, 56, 25));
        item = new QLabel(updateBooks);
        item->setObjectName("item");
        item->setGeometry(QRect(21, 11, 120, 20));
        refreshButton = new QPushButton(updateBooks);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setGeometry(QRect(148, 11, 92, 29));

        retranslateUi(updateBooks);

        QMetaObject::connectSlotsByName(updateBooks);
    } // setupUi

    void retranslateUi(QWidget *updateBooks)
    {
        updateBooks->setWindowTitle(QCoreApplication::translate("updateBooks", "\347\274\226\350\276\221\347\211\251\345\223\201", nullptr));
        ID->setText(QCoreApplication::translate("updateBooks", "\347\274\226\345\217\267", nullptr));
        headLine->setText(QCoreApplication::translate("updateBooks", "\346\240\207\351\242\230", nullptr));
        authorName->setText(QCoreApplication::translate("updateBooks", "\344\275\234\350\200\205", nullptr));
        Publisher->setText(QCoreApplication::translate("updateBooks", "\345\207\272\347\211\210\347\244\276", nullptr));
        ISBN->setText(QCoreApplication::translate("updateBooks", "ISBN\345\217\267", nullptr));
        Pages->setText(QCoreApplication::translate("updateBooks", "\351\241\265\346\225\260", nullptr));
        confirmButton->setText(QCoreApplication::translate("updateBooks", "\347\241\256\345\256\232", nullptr));
        exitButton->setText(QCoreApplication::translate("updateBooks", "\345\217\226\346\266\210", nullptr));
        item2->setText(QCoreApplication::translate("updateBooks", "\345\216\237\347\211\251\345\223\201\347\274\226\345\217\267", nullptr));
        item->setText(QCoreApplication::translate("updateBooks", "\350\257\267\345\210\267\346\226\260\350\257\245\351\241\265\351\235\242\344\270\200\346\254\241", nullptr));
        refreshButton->setText(QCoreApplication::translate("updateBooks", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateBooks: public Ui_updateBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBOOKS_H
