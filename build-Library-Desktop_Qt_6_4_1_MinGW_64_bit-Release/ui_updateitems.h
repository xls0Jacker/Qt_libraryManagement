/********************************************************************************
** Form generated from reading UI file 'updateitems.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEITEMS_H
#define UI_UPDATEITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateItems
{
public:
    QLabel *Headline;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *ID;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *confirmButton;
    QPushButton *exitButton;

    void setupUi(QWidget *updateItems)
    {
        if (updateItems->objectName().isEmpty())
            updateItems->setObjectName("updateItems");
        updateItems->resize(400, 300);
        Headline = new QLabel(updateItems);
        Headline->setObjectName("Headline");
        Headline->setGeometry(QRect(80, 10, 261, 30));
        QFont font;
        font.setPointSize(14);
        Headline->setFont(font);
        widget = new QWidget(updateItems);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 120, 220, 28));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ID = new QLabel(widget);
        ID->setObjectName("ID");

        horizontalLayout->addWidget(ID);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        widget1 = new QWidget(updateItems);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(40, 230, 301, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        confirmButton = new QPushButton(widget1);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(confirmButton);

        exitButton = new QPushButton(widget1);
        exitButton->setObjectName("exitButton");
        exitButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(exitButton);


        retranslateUi(updateItems);

        QMetaObject::connectSlotsByName(updateItems);
    } // setupUi

    void retranslateUi(QWidget *updateItems)
    {
        updateItems->setWindowTitle(QCoreApplication::translate("updateItems", "\347\274\226\350\276\221\347\211\251\345\223\201", nullptr));
        Headline->setText(QCoreApplication::translate("updateItems", "\350\257\267\350\276\223\345\205\245\351\234\200\347\274\226\350\276\221\347\211\251\345\223\201\347\232\204\347\274\226\345\217\267", nullptr));
        ID->setText(QCoreApplication::translate("updateItems", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\274\226\345\217\267</span></p></body></html>", nullptr));
        confirmButton->setText(QCoreApplication::translate("updateItems", "\347\241\256\345\256\232", nullptr));
        exitButton->setText(QCoreApplication::translate("updateItems", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateItems: public Ui_updateItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEITEMS_H
