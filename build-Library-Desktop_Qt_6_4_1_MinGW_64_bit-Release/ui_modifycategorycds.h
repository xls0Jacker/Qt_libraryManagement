/********************************************************************************
** Form generated from reading UI file 'modifycategorycds.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCATEGORYCDS_H
#define UI_MODIFYCATEGORYCDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifycategoryCDs
{
public:
    QPushButton *addItemsButton;
    QPushButton *exitButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *CDs_1;
    QLineEdit *CDs_2;
    QLineEdit *CDs_3;
    QLineEdit *CDs_4;
    QLineEdit *CDs_5;
    QLineEdit *CDs_6;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *ID;
    QLabel *headLine;
    QLabel *authorName;
    QLabel *Producer;
    QLabel *productionTime;
    QLabel *videoLength;

    void setupUi(QWidget *modifycategoryCDs)
    {
        if (modifycategoryCDs->objectName().isEmpty())
            modifycategoryCDs->setObjectName("modifycategoryCDs");
        modifycategoryCDs->resize(400, 300);
        addItemsButton = new QPushButton(modifycategoryCDs);
        addItemsButton->setObjectName("addItemsButton");
        addItemsButton->setGeometry(QRect(60, 250, 92, 29));
        exitButton = new QPushButton(modifycategoryCDs);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(250, 250, 92, 29));
        layoutWidget = new QWidget(modifycategoryCDs);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 30, 211, 201));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        CDs_1 = new QLineEdit(layoutWidget);
        CDs_1->setObjectName("CDs_1");

        verticalLayout_2->addWidget(CDs_1);

        CDs_2 = new QLineEdit(layoutWidget);
        CDs_2->setObjectName("CDs_2");

        verticalLayout_2->addWidget(CDs_2);

        CDs_3 = new QLineEdit(layoutWidget);
        CDs_3->setObjectName("CDs_3");

        verticalLayout_2->addWidget(CDs_3);

        CDs_4 = new QLineEdit(layoutWidget);
        CDs_4->setObjectName("CDs_4");

        verticalLayout_2->addWidget(CDs_4);

        CDs_5 = new QLineEdit(layoutWidget);
        CDs_5->setObjectName("CDs_5");

        verticalLayout_2->addWidget(CDs_5);

        CDs_6 = new QLineEdit(layoutWidget);
        CDs_6->setObjectName("CDs_6");

        verticalLayout_2->addWidget(CDs_6);

        layoutWidget_2 = new QWidget(modifycategoryCDs);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 30, 77, 201));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ID = new QLabel(layoutWidget_2);
        ID->setObjectName("ID");

        verticalLayout->addWidget(ID);

        headLine = new QLabel(layoutWidget_2);
        headLine->setObjectName("headLine");

        verticalLayout->addWidget(headLine);

        authorName = new QLabel(layoutWidget_2);
        authorName->setObjectName("authorName");

        verticalLayout->addWidget(authorName);

        Producer = new QLabel(layoutWidget_2);
        Producer->setObjectName("Producer");

        verticalLayout->addWidget(Producer);

        productionTime = new QLabel(layoutWidget_2);
        productionTime->setObjectName("productionTime");

        verticalLayout->addWidget(productionTime);

        videoLength = new QLabel(layoutWidget_2);
        videoLength->setObjectName("videoLength");

        verticalLayout->addWidget(videoLength);


        retranslateUi(modifycategoryCDs);

        QMetaObject::connectSlotsByName(modifycategoryCDs);
    } // setupUi

    void retranslateUi(QWidget *modifycategoryCDs)
    {
        modifycategoryCDs->setWindowTitle(QCoreApplication::translate("modifycategoryCDs", "\346\267\273\345\212\240\347\211\251\345\223\201", nullptr));
        addItemsButton->setText(QCoreApplication::translate("modifycategoryCDs", "\346\267\273\345\212\240", nullptr));
        exitButton->setText(QCoreApplication::translate("modifycategoryCDs", "\345\217\226\346\266\210", nullptr));
        ID->setText(QCoreApplication::translate("modifycategoryCDs", "\347\274\226\345\217\267", nullptr));
        headLine->setText(QCoreApplication::translate("modifycategoryCDs", "\346\240\207\351\242\230", nullptr));
        authorName->setText(QCoreApplication::translate("modifycategoryCDs", "\344\275\234\350\200\205", nullptr));
        Producer->setText(QCoreApplication::translate("modifycategoryCDs", "\345\207\272\345\223\201\350\200\205\345\247\223\345\220\215", nullptr));
        productionTime->setText(QCoreApplication::translate("modifycategoryCDs", "\345\207\272\345\223\201\346\227\266\351\227\264", nullptr));
        videoLength->setText(QCoreApplication::translate("modifycategoryCDs", "\350\247\206\351\242\221\346\227\266\351\225\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifycategoryCDs: public Ui_modifycategoryCDs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCATEGORYCDS_H
