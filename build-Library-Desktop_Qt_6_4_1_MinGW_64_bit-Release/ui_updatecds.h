/********************************************************************************
** Form generated from reading UI file 'updatecds.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATECDS_H
#define UI_UPDATECDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateCDs
{
public:
    QLabel *item2;
    QLabel *item;
    QLineEdit *IDShow;
    QPushButton *refreshButton;
    QPushButton *exitButton;
    QPushButton *confirmButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *CDs_1;
    QLineEdit *CDs_2;
    QLineEdit *CDs_3;
    QLineEdit *CDs_4;
    QLineEdit *CDs_5;
    QLineEdit *CDs_6;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QLabel *ID;
    QLabel *headLine;
    QLabel *authorName;
    QLabel *Producer;
    QLabel *productionTime;
    QLabel *videoLength;

    void setupUi(QWidget *updateCDs)
    {
        if (updateCDs->objectName().isEmpty())
            updateCDs->setObjectName("updateCDs");
        updateCDs->resize(400, 300);
        item2 = new QLabel(updateCDs);
        item2->setObjectName("item2");
        item2->setGeometry(QRect(248, 2, 75, 20));
        item = new QLabel(updateCDs);
        item->setObjectName("item");
        item->setGeometry(QRect(21, 1, 120, 20));
        IDShow = new QLineEdit(updateCDs);
        IDShow->setObjectName("IDShow");
        IDShow->setGeometry(QRect(330, 3, 56, 25));
        refreshButton = new QPushButton(updateCDs);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setGeometry(QRect(148, 1, 92, 29));
        exitButton = new QPushButton(updateCDs);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(240, 270, 92, 29));
        confirmButton = new QPushButton(updateCDs);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(50, 270, 92, 29));
        layoutWidget_2 = new QWidget(updateCDs);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(110, 50, 211, 219));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        CDs_1 = new QLineEdit(layoutWidget_2);
        CDs_1->setObjectName("CDs_1");

        verticalLayout_2->addWidget(CDs_1);

        CDs_2 = new QLineEdit(layoutWidget_2);
        CDs_2->setObjectName("CDs_2");

        verticalLayout_2->addWidget(CDs_2);

        CDs_3 = new QLineEdit(layoutWidget_2);
        CDs_3->setObjectName("CDs_3");

        verticalLayout_2->addWidget(CDs_3);

        CDs_4 = new QLineEdit(layoutWidget_2);
        CDs_4->setObjectName("CDs_4");

        verticalLayout_2->addWidget(CDs_4);

        CDs_5 = new QLineEdit(layoutWidget_2);
        CDs_5->setObjectName("CDs_5");

        verticalLayout_2->addWidget(CDs_5);

        CDs_6 = new QLineEdit(layoutWidget_2);
        CDs_6->setObjectName("CDs_6");

        verticalLayout_2->addWidget(CDs_6);

        layoutWidget_3 = new QWidget(updateCDs);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 60, 77, 201));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ID = new QLabel(layoutWidget_3);
        ID->setObjectName("ID");

        verticalLayout->addWidget(ID);

        headLine = new QLabel(layoutWidget_3);
        headLine->setObjectName("headLine");

        verticalLayout->addWidget(headLine);

        authorName = new QLabel(layoutWidget_3);
        authorName->setObjectName("authorName");

        verticalLayout->addWidget(authorName);

        Producer = new QLabel(layoutWidget_3);
        Producer->setObjectName("Producer");

        verticalLayout->addWidget(Producer);

        productionTime = new QLabel(layoutWidget_3);
        productionTime->setObjectName("productionTime");

        verticalLayout->addWidget(productionTime);

        videoLength = new QLabel(layoutWidget_3);
        videoLength->setObjectName("videoLength");

        verticalLayout->addWidget(videoLength);


        retranslateUi(updateCDs);

        QMetaObject::connectSlotsByName(updateCDs);
    } // setupUi

    void retranslateUi(QWidget *updateCDs)
    {
        updateCDs->setWindowTitle(QCoreApplication::translate("updateCDs", "\347\274\226\350\276\221\347\211\251\345\223\201", nullptr));
        item2->setText(QCoreApplication::translate("updateCDs", "\345\216\237\347\211\251\345\223\201\347\274\226\345\217\267", nullptr));
        item->setText(QCoreApplication::translate("updateCDs", "\350\257\267\345\210\267\346\226\260\350\257\245\351\241\265\351\235\242\344\270\200\346\254\241", nullptr));
        refreshButton->setText(QCoreApplication::translate("updateCDs", "\345\210\267\346\226\260", nullptr));
        exitButton->setText(QCoreApplication::translate("updateCDs", "\345\217\226\346\266\210", nullptr));
        confirmButton->setText(QCoreApplication::translate("updateCDs", "\347\241\256\345\256\232", nullptr));
        ID->setText(QCoreApplication::translate("updateCDs", "\347\274\226\345\217\267", nullptr));
        headLine->setText(QCoreApplication::translate("updateCDs", "\346\240\207\351\242\230", nullptr));
        authorName->setText(QCoreApplication::translate("updateCDs", "\344\275\234\350\200\205", nullptr));
        Producer->setText(QCoreApplication::translate("updateCDs", "\345\207\272\345\223\201\350\200\205\345\247\223\345\220\215", nullptr));
        productionTime->setText(QCoreApplication::translate("updateCDs", "\345\207\272\345\223\201\346\227\266\351\227\264", nullptr));
        videoLength->setText(QCoreApplication::translate("updateCDs", "\350\247\206\351\242\221\346\227\266\351\225\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateCDs: public Ui_updateCDs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATECDS_H
