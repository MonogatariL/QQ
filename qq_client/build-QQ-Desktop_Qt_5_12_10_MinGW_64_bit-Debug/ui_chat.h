/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QTextEdit *TE_msg;
    QTextEdit *TE_smsg;
    QPushButton *Button_close;
    QPushButton *Button_send;

    void setupUi(QWidget *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QString::fromUtf8("chat"));
        chat->resize(500, 500);
        chat->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround2.png);"));
        TE_msg = new QTextEdit(chat);
        TE_msg->setObjectName(QString::fromUtf8("TE_msg"));
        TE_msg->setGeometry(QRect(10, 10, 480, 330));
        TE_smsg = new QTextEdit(chat);
        TE_smsg->setObjectName(QString::fromUtf8("TE_smsg"));
        TE_smsg->setGeometry(QRect(10, 350, 480, 110));
        Button_close = new QPushButton(chat);
        Button_close->setObjectName(QString::fromUtf8("Button_close"));
        Button_close->setGeometry(QRect(270, 465, 100, 30));
        Button_close->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(9, 41, 4, 255), stop:0.085 rgba(2, 79, 0, 255), stop:0.19 rgba(50, 147, 22, 255), stop:0.275 rgba(236, 191, 49, 255), stop:0.39 rgba(243, 61, 34, 255), stop:0.555 rgba(135, 81, 60, 255), stop:0.667 rgba(121, 75, 255, 255), stop:0.825 rgba(164, 255, 244, 255), stop:0.885 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255));\n"
""));
        Button_send = new QPushButton(chat);
        Button_send->setObjectName(QString::fromUtf8("Button_send"));
        Button_send->setGeometry(QRect(390, 465, 100, 30));
        Button_send->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(9, 41, 4, 255), stop:0.085 rgba(2, 79, 0, 255), stop:0.19 rgba(50, 147, 22, 255), stop:0.275 rgba(236, 191, 49, 255), stop:0.39 rgba(243, 61, 34, 255), stop:0.555 rgba(135, 81, 60, 255), stop:0.667 rgba(121, 75, 255, 255), stop:0.825 rgba(164, 255, 244, 255), stop:0.885 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255));\n"
""));

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QWidget *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Form", nullptr));
        Button_close->setText(QApplication::translate("chat", "\345\205\263\351\227\255", nullptr));
        Button_send->setText(QApplication::translate("chat", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
