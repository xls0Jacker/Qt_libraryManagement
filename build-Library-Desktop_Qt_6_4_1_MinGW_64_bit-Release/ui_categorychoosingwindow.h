/********************************************************************************
** Form generated from reading UI file 'categorychoosingwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORYCHOOSINGWINDOW_H
#define UI_CATEGORYCHOOSINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_categoryChoosingWindow
{
public:
    QLabel *label;
    QLabel *pictureOfBooks;
    QLabel *pictureOfCDs;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *categoryBooks;
    QPushButton *categoryCDs;

    void setupUi(QWidget *categoryChoosingWindow)
    {
        if (categoryChoosingWindow->objectName().isEmpty())
            categoryChoosingWindow->setObjectName("categoryChoosingWindow");
        categoryChoosingWindow->resize(400, 300);
        label = new QLabel(categoryChoosingWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 230, 30));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pictureOfBooks = new QLabel(categoryChoosingWindow);
        pictureOfBooks->setObjectName("pictureOfBooks");
        pictureOfBooks->setGeometry(QRect(70, 60, 121, 111));
        pictureOfBooks->setScaledContents(true);
        pictureOfCDs = new QLabel(categoryChoosingWindow);
        pictureOfCDs->setObjectName("pictureOfCDs");
        pictureOfCDs->setGeometry(QRect(218, 60, 121, 111));
        pictureOfCDs->setScaledContents(true);
        layoutWidget = new QWidget(categoryChoosingWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 180, 281, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        categoryBooks = new QPushButton(layoutWidget);
        categoryBooks->setObjectName("categoryBooks");

        horizontalLayout->addWidget(categoryBooks);

        categoryCDs = new QPushButton(layoutWidget);
        categoryCDs->setObjectName("categoryCDs");

        horizontalLayout->addWidget(categoryCDs);


        retranslateUi(categoryChoosingWindow);

        QMetaObject::connectSlotsByName(categoryChoosingWindow);
    } // setupUi

    void retranslateUi(QWidget *categoryChoosingWindow)
    {
        categoryChoosingWindow->setWindowTitle(QCoreApplication::translate("categoryChoosingWindow", "\346\267\273\345\212\240\347\211\251\345\223\201", nullptr));
        label->setText(QCoreApplication::translate("categoryChoosingWindow", "\350\257\267\351\200\211\346\213\251\346\267\273\345\212\240\347\211\251\345\223\201\347\232\204\347\261\273\345\210\253", nullptr));
        pictureOfBooks->setText(QString());
        pictureOfCDs->setText(QString());
        categoryBooks->setText(QCoreApplication::translate("categoryChoosingWindow", "\345\233\276\344\271\246\347\261\273", nullptr));
        categoryCDs->setText(QCoreApplication::translate("categoryChoosingWindow", "\345\205\211\347\233\230\347\261\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class categoryChoosingWindow: public Ui_categoryChoosingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYCHOOSINGWINDOW_H
