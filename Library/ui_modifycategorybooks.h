/********************************************************************************
** Form generated from reading UI file 'modifycategorybooks.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCATEGORYBOOKS_H
#define UI_MODIFYCATEGORYBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyCategoryBooks
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Books_1;
    QLineEdit *Books_2;
    QLineEdit *Books_3;
    QLineEdit *Books_4;
    QLineEdit *Books_5;
    QLineEdit *Books_6;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *ID;
    QLabel *headLine;
    QLabel *authorName;
    QLabel *Publisher;
    QLabel *ISBN;
    QLabel *Pages;
    QPushButton *addItemsButton;
    QPushButton *exit;

    void setupUi(QWidget *modifyCategoryBooks)
    {
        if (modifyCategoryBooks->objectName().isEmpty())
            modifyCategoryBooks->setObjectName("modifyCategoryBooks");
        modifyCategoryBooks->resize(400, 300);
        layoutWidget = new QWidget(modifyCategoryBooks);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 30, 211, 201));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Books_1 = new QLineEdit(layoutWidget);
        Books_1->setObjectName("Books_1");

        verticalLayout_2->addWidget(Books_1);

        Books_2 = new QLineEdit(layoutWidget);
        Books_2->setObjectName("Books_2");

        verticalLayout_2->addWidget(Books_2);

        Books_3 = new QLineEdit(layoutWidget);
        Books_3->setObjectName("Books_3");

        verticalLayout_2->addWidget(Books_3);

        Books_4 = new QLineEdit(layoutWidget);
        Books_4->setObjectName("Books_4");

        verticalLayout_2->addWidget(Books_4);

        Books_5 = new QLineEdit(layoutWidget);
        Books_5->setObjectName("Books_5");

        verticalLayout_2->addWidget(Books_5);

        Books_6 = new QLineEdit(layoutWidget);
        Books_6->setObjectName("Books_6");

        verticalLayout_2->addWidget(Books_6);

        layoutWidget1 = new QWidget(modifyCategoryBooks);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 30, 71, 201));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ID = new QLabel(layoutWidget1);
        ID->setObjectName("ID");

        verticalLayout->addWidget(ID);

        headLine = new QLabel(layoutWidget1);
        headLine->setObjectName("headLine");

        verticalLayout->addWidget(headLine);

        authorName = new QLabel(layoutWidget1);
        authorName->setObjectName("authorName");

        verticalLayout->addWidget(authorName);

        Publisher = new QLabel(layoutWidget1);
        Publisher->setObjectName("Publisher");

        verticalLayout->addWidget(Publisher);

        ISBN = new QLabel(layoutWidget1);
        ISBN->setObjectName("ISBN");

        verticalLayout->addWidget(ISBN);

        Pages = new QLabel(layoutWidget1);
        Pages->setObjectName("Pages");

        verticalLayout->addWidget(Pages);

        addItemsButton = new QPushButton(modifyCategoryBooks);
        addItemsButton->setObjectName("addItemsButton");
        addItemsButton->setGeometry(QRect(50, 250, 92, 29));
        exit = new QPushButton(modifyCategoryBooks);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(240, 250, 92, 29));
        QWidget::setTabOrder(Books_1, Books_2);
        QWidget::setTabOrder(Books_2, Books_3);
        QWidget::setTabOrder(Books_3, Books_4);
        QWidget::setTabOrder(Books_4, Books_5);
        QWidget::setTabOrder(Books_5, Books_6);

        retranslateUi(modifyCategoryBooks);

        QMetaObject::connectSlotsByName(modifyCategoryBooks);
    } // setupUi

    void retranslateUi(QWidget *modifyCategoryBooks)
    {
        modifyCategoryBooks->setWindowTitle(QCoreApplication::translate("modifyCategoryBooks", "\346\267\273\345\212\240\347\211\251\345\223\201", nullptr));
        ID->setText(QCoreApplication::translate("modifyCategoryBooks", "\347\274\226\345\217\267", nullptr));
        headLine->setText(QCoreApplication::translate("modifyCategoryBooks", "\346\240\207\351\242\230", nullptr));
        authorName->setText(QCoreApplication::translate("modifyCategoryBooks", "\344\275\234\350\200\205", nullptr));
        Publisher->setText(QCoreApplication::translate("modifyCategoryBooks", "\345\207\272\347\211\210\347\244\276", nullptr));
        ISBN->setText(QCoreApplication::translate("modifyCategoryBooks", "ISBN\345\217\267", nullptr));
        Pages->setText(QCoreApplication::translate("modifyCategoryBooks", "\351\241\265\346\225\260", nullptr));
        addItemsButton->setText(QCoreApplication::translate("modifyCategoryBooks", "\346\267\273\345\212\240", nullptr));
        exit->setText(QCoreApplication::translate("modifyCategoryBooks", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyCategoryBooks: public Ui_modifyCategoryBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCATEGORYBOOKS_H
