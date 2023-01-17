/********************************************************************************
** Form generated from reading UI file 'inquirebycategory.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIREBYCATEGORY_H
#define UI_INQUIREBYCATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inquireByCategory
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *updateButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BooksButton;
    QPushButton *exitButton;
    QPushButton *CDsButton;

    void setupUi(QWidget *inquireByCategory)
    {
        if (inquireByCategory->objectName().isEmpty())
            inquireByCategory->setObjectName("inquireByCategory");
        inquireByCategory->resize(742, 562);
        verticalLayout = new QVBoxLayout(inquireByCategory);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(inquireByCategory);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        updateButton = new QPushButton(inquireByCategory);
        updateButton->setObjectName("updateButton");
        updateButton->setMaximumSize(QSize(300, 16777215));

        verticalLayout->addWidget(updateButton, 0, Qt::AlignHCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        BooksButton = new QPushButton(inquireByCategory);
        BooksButton->setObjectName("BooksButton");
        BooksButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(BooksButton);

        exitButton = new QPushButton(inquireByCategory);
        exitButton->setObjectName("exitButton");
        exitButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(exitButton);

        CDsButton = new QPushButton(inquireByCategory);
        CDsButton->setObjectName("CDsButton");
        CDsButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(CDsButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(inquireByCategory);

        QMetaObject::connectSlotsByName(inquireByCategory);
    } // setupUi

    void retranslateUi(QWidget *inquireByCategory)
    {
        inquireByCategory->setWindowTitle(QCoreApplication::translate("inquireByCategory", "\347\261\273\345\210\253\346\237\245\350\257\242", nullptr));
        updateButton->setText(QCoreApplication::translate("inquireByCategory", "\347\274\226\350\276\221", nullptr));
        BooksButton->setText(QCoreApplication::translate("inquireByCategory", "\345\233\276\344\271\246\347\261\273\346\237\245\350\257\242", nullptr));
        exitButton->setText(QCoreApplication::translate("inquireByCategory", "\351\200\200\345\207\272", nullptr));
        CDsButton->setText(QCoreApplication::translate("inquireByCategory", "\345\205\211\347\233\230\347\261\273\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inquireByCategory: public Ui_inquireByCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIREBYCATEGORY_H
