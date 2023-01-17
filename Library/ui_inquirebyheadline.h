/********************************************************************************
** Form generated from reading UI file 'inquirebyheadline.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIREBYHEADLINE_H
#define UI_INQUIREBYHEADLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inquireByHeadline
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *Headline;
    QHBoxLayout *horizontalLayout;
    QLabel *Label;
    QLineEdit *text;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *inquireItemsButton;
    QPushButton *updateButton;
    QPushButton *exitButton;

    void setupUi(QWidget *inquireByHeadline)
    {
        if (inquireByHeadline->objectName().isEmpty())
            inquireByHeadline->setObjectName("inquireByHeadline");
        inquireByHeadline->resize(742, 562);
        verticalLayout = new QVBoxLayout(inquireByHeadline);
        verticalLayout->setObjectName("verticalLayout");
        Headline = new QLabel(inquireByHeadline);
        Headline->setObjectName("Headline");
        QFont font;
        font.setPointSize(14);
        Headline->setFont(font);

        verticalLayout->addWidget(Headline);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Label = new QLabel(inquireByHeadline);
        Label->setObjectName("Label");

        horizontalLayout->addWidget(Label);

        text = new QLineEdit(inquireByHeadline);
        text->setObjectName("text");

        horizontalLayout->addWidget(text);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(inquireByHeadline);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        inquireItemsButton = new QPushButton(inquireByHeadline);
        inquireItemsButton->setObjectName("inquireItemsButton");
        inquireItemsButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(inquireItemsButton);

        updateButton = new QPushButton(inquireByHeadline);
        updateButton->setObjectName("updateButton");
        updateButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(updateButton);

        exitButton = new QPushButton(inquireByHeadline);
        exitButton->setObjectName("exitButton");
        exitButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(inquireByHeadline);

        QMetaObject::connectSlotsByName(inquireByHeadline);
    } // setupUi

    void retranslateUi(QWidget *inquireByHeadline)
    {
        inquireByHeadline->setWindowTitle(QCoreApplication::translate("inquireByHeadline", "\346\240\207\351\242\230\346\237\245\350\257\242", nullptr));
        Headline->setText(QCoreApplication::translate("inquireByHeadline", "                                           \350\257\267\345\234\250\344\270\213\346\226\271\350\276\223\345\205\245\346\237\245\350\257\242\347\211\251\345\223\201\347\232\204\346\240\207\351\242\230", nullptr));
        Label->setText(QCoreApplication::translate("inquireByHeadline", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\240\207\351\242\230</span></p></body></html>", nullptr));
        inquireItemsButton->setText(QCoreApplication::translate("inquireByHeadline", "\346\237\245\350\257\242", nullptr));
        updateButton->setText(QCoreApplication::translate("inquireByHeadline", "\347\274\226\350\276\221", nullptr));
        exitButton->setText(QCoreApplication::translate("inquireByHeadline", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inquireByHeadline: public Ui_inquireByHeadline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIREBYHEADLINE_H
