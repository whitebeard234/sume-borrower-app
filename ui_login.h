/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QGridLayout *gridLayout;
    QPushButton *login;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLineEdit *user_input;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLineEdit *password_input;
    QPushButton *changepass;

    void setupUi(QWidget *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName(QStringLiteral("LogIn"));
        LogIn->resize(327, 371);
        LogIn->setMinimumSize(QSize(327, 371));
        LogIn->setMaximumSize(QSize(327, 371));
        gridLayout = new QGridLayout(LogIn);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        login = new QPushButton(LogIn);
        login->setObjectName(QStringLiteral("login"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        login->setFont(font);

        gridLayout->addWidget(login, 2, 0, 1, 1);

        label = new QLabel(LogIn);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(LogIn);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_10->setFont(font1);

        horizontalLayout->addWidget(label_10);

        user_input = new QLineEdit(LogIn);
        user_input->setObjectName(QStringLiteral("user_input"));

        horizontalLayout->addWidget(user_input);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(LogIn);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_2->addWidget(label_11);

        password_input = new QLineEdit(LogIn);
        password_input->setObjectName(QStringLiteral("password_input"));

        horizontalLayout_2->addWidget(password_input);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        changepass = new QPushButton(LogIn);
        changepass->setObjectName(QStringLiteral("changepass"));
        changepass->setFont(font);

        gridLayout->addWidget(changepass, 3, 0, 1, 1);


        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QWidget *LogIn)
    {
        LogIn->setWindowTitle(QApplication::translate("LogIn", "Form", Q_NULLPTR));
        login->setText(QApplication::translate("LogIn", "LOGIN", Q_NULLPTR));
        label->setText(QApplication::translate("LogIn", "SILLIMAN UNIVERSITY MECHANICAL ENGINEERING LABORATORY BORROWER", Q_NULLPTR));
        label_10->setText(QApplication::translate("LogIn", "USERNAME:", Q_NULLPTR));
        label_11->setText(QApplication::translate("LogIn", "PASSWORD:", Q_NULLPTR));
        changepass->setText(QApplication::translate("LogIn", "CHANGE PASSWORD", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
