/********************************************************************************
** Form generated from reading UI file 'deleteitems.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEITEMS_H
#define UI_DELETEITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteItems
{
public:
    QLabel *Headline;
    QPushButton *deleteButton;
    QPushButton *exitButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *ID;
    QLineEdit *lineEdit;

    void setupUi(QWidget *deleteItems)
    {
        if (deleteItems->objectName().isEmpty())
            deleteItems->setObjectName("deleteItems");
        deleteItems->resize(400, 300);
        Headline = new QLabel(deleteItems);
        Headline->setObjectName("Headline");
        Headline->setGeometry(QRect(90, 20, 230, 30));
        QFont font;
        font.setPointSize(14);
        Headline->setFont(font);
        deleteButton = new QPushButton(deleteItems);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(40, 230, 92, 29));
        exitButton = new QPushButton(deleteItems);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(260, 230, 92, 29));
        layoutWidget = new QWidget(deleteItems);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 80, 291, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ID = new QLabel(layoutWidget);
        ID->setObjectName("ID");

        horizontalLayout->addWidget(ID);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(deleteItems);

        QMetaObject::connectSlotsByName(deleteItems);
    } // setupUi

    void retranslateUi(QWidget *deleteItems)
    {
        deleteItems->setWindowTitle(QCoreApplication::translate("deleteItems", "\345\210\240\351\231\244\347\211\251\345\223\201", nullptr));
        Headline->setText(QCoreApplication::translate("deleteItems", "\350\257\267\350\276\223\345\205\245\345\210\240\351\231\244\347\211\251\345\223\201\347\232\204\347\274\226\345\217\267", nullptr));
        deleteButton->setText(QCoreApplication::translate("deleteItems", "\345\210\240\351\231\244", nullptr));
        exitButton->setText(QCoreApplication::translate("deleteItems", "\345\217\226\346\266\210", nullptr));
        ID->setText(QCoreApplication::translate("deleteItems", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\274\226\345\217\267</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteItems: public Ui_deleteItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEITEMS_H
