/********************************************************************************
** Form generated from reading UI file 'inquirefunction.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIREFUNCTION_H
#define UI_INQUIREFUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inquireFunction
{
public:
    QLabel *Headline;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *inquireByHeadline;
    QPushButton *inquireByCategory;
    QLabel *Picture;

    void setupUi(QWidget *inquireFunction)
    {
        if (inquireFunction->objectName().isEmpty())
            inquireFunction->setObjectName("inquireFunction");
        inquireFunction->resize(400, 300);
        Headline = new QLabel(inquireFunction);
        Headline->setObjectName("Headline");
        Headline->setGeometry(QRect(130, 20, 230, 30));
        QFont font;
        font.setPointSize(14);
        Headline->setFont(font);
        layoutWidget = new QWidget(inquireFunction);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 210, 281, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        inquireByHeadline = new QPushButton(layoutWidget);
        inquireByHeadline->setObjectName("inquireByHeadline");

        horizontalLayout->addWidget(inquireByHeadline);

        inquireByCategory = new QPushButton(layoutWidget);
        inquireByCategory->setObjectName("inquireByCategory");

        horizontalLayout->addWidget(inquireByCategory);

        Picture = new QLabel(inquireFunction);
        Picture->setObjectName("Picture");
        Picture->setGeometry(QRect(52, 50, 301, 181));
        Picture->setScaledContents(true);

        retranslateUi(inquireFunction);

        QMetaObject::connectSlotsByName(inquireFunction);
    } // setupUi

    void retranslateUi(QWidget *inquireFunction)
    {
        inquireFunction->setWindowTitle(QCoreApplication::translate("inquireFunction", "\346\237\245\350\257\242\347\211\251\345\223\201", nullptr));
        Headline->setText(QCoreApplication::translate("inquireFunction", "\350\257\267\351\200\211\346\213\251\346\237\245\350\257\242\346\226\271\345\274\217", nullptr));
        inquireByHeadline->setText(QCoreApplication::translate("inquireFunction", "\346\240\207\351\242\230\346\237\245\350\257\242", nullptr));
        inquireByCategory->setText(QCoreApplication::translate("inquireFunction", "\347\261\273\345\210\253\346\237\245\350\257\242", nullptr));
        Picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class inquireFunction: public Ui_inquireFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIREFUNCTION_H
