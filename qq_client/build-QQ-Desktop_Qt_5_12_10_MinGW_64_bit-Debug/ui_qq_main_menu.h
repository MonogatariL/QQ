/********************************************************************************
** Form generated from reading UI file 'qq_main_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQ_MAIN_MENU_H
#define UI_QQ_MAIN_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qq_main_menu
{
public:
    QStackedWidget *main_stacked_widget;
    QWidget *page_1;
    QLineEdit *LE_login;
    QLineEdit *LE_passwd;
    QLabel *Label_login;
    QLabel *Label_passwd;
    QLabel *Label_top;
    QLabel *Label_head;
    QPushButton *Button_register;
    QLabel *Label_1;
    QLabel *Label_2;
    QPushButton *Button_go;
    QPushButton *Button_exit;
    QPushButton *Button_ewm;
    QLabel *Lable_log;
    QPushButton *Button_set;
    QLabel *Label_netstat;
    QLabel *Label_login_stat;
    QWidget *page_2;
    QLineEdit *LE_login2;
    QLineEdit *LE_passwd2;
    QLabel *Label_passwd2;
    QLabel *Label_login2;
    QLabel *Label_message;
    QPushButton *Button_register_go;
    QPushButton *Button_back_login;
    QLabel *Label_netstat2;
    QLabel *Label_feedback;
    QWidget *page_3;
    QLabel *Label_ewm;
    QPushButton *Button_ewm2;
    QWidget *page_4;
    QLineEdit *LE_IP;
    QLineEdit *LE_PT;
    QPushButton *Button_CG_ip;
    QPushButton *Button_CG_mr;
    QPushButton *Button_CG_back;
    QLabel *label;
    QLabel *label_2;
    QWidget *page_5;
    QLabel *Label_please_wait;
    QPushButton *Button_cancel;
    QLabel *Label_server_go;

    void setupUi(QWidget *qq_main_menu)
    {
        if (qq_main_menu->objectName().isEmpty())
            qq_main_menu->setObjectName(QString::fromUtf8("qq_main_menu"));
        qq_main_menu->resize(440, 330);
        main_stacked_widget = new QStackedWidget(qq_main_menu);
        main_stacked_widget->setObjectName(QString::fromUtf8("main_stacked_widget"));
        main_stacked_widget->setGeometry(QRect(0, 0, 440, 330));
        main_stacked_widget->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/res/BackGround2.png)"));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        LE_login = new QLineEdit(page_1);
        LE_login->setObjectName(QString::fromUtf8("LE_login"));
        LE_login->setGeometry(QRect(125, 150, 220, 30));
        LE_login->setMinimumSize(QSize(220, 30));
        LE_login->setMaximumSize(QSize(220, 30));
        QFont font;
        font.setPointSize(18);
        LE_login->setFont(font);
        LE_login->setFocusPolicy(Qt::StrongFocus);
        LE_login->setStyleSheet(QString::fromUtf8(""));
        LE_login->setMaxLength(16);
        LE_passwd = new QLineEdit(page_1);
        LE_passwd->setObjectName(QString::fromUtf8("LE_passwd"));
        LE_passwd->setEnabled(true);
        LE_passwd->setGeometry(QRect(125, 190, 220, 30));
        LE_passwd->setMinimumSize(QSize(220, 30));
        LE_passwd->setMaximumSize(QSize(220, 30));
        QFont font1;
        font1.setPointSize(12);
        LE_passwd->setFont(font1);
        LE_passwd->setMaxLength(32);
        Label_login = new QLabel(page_1);
        Label_login->setObjectName(QString::fromUtf8("Label_login"));
        Label_login->setGeometry(QRect(100, 151, 25, 30));
        Label_login->setMinimumSize(QSize(25, 30));
        Label_login->setMaximumSize(QSize(25, 30));
        Label_login->setStyleSheet(QString::fromUtf8("border-image:url(:/new/prefix1/res/login.png)"));
        Label_passwd = new QLabel(page_1);
        Label_passwd->setObjectName(QString::fromUtf8("Label_passwd"));
        Label_passwd->setEnabled(true);
        Label_passwd->setGeometry(QRect(100, 191, 25, 30));
        Label_passwd->setMinimumSize(QSize(25, 30));
        Label_passwd->setMaximumSize(QSize(25, 30));
        Label_passwd->setStyleSheet(QString::fromUtf8("border-image:url(:/new/prefix1/res/lock.png)"));
        Label_top = new QLabel(page_1);
        Label_top->setObjectName(QString::fromUtf8("Label_top"));
        Label_top->setGeometry(QRect(0, 0, 451, 121));
        Label_top->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/res/login_background.png)"));
        Label_head = new QLabel(page_1);
        Label_head->setObjectName(QString::fromUtf8("Label_head"));
        Label_head->setGeometry(QRect(180, 80, 63, 62));
        Label_head->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/res/face.png)"));
        Button_register = new QPushButton(page_1);
        Button_register->setObjectName(QString::fromUtf8("Button_register"));
        Button_register->setGeometry(QRect(0, 305, 75, 25));
        Button_register->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/res/BackGround2.png)"));
        Label_1 = new QLabel(page_1);
        Label_1->setObjectName(QString::fromUtf8("Label_1"));
        Label_1->setGeometry(QRect(120, 150, 271, 61));
        Label_1->setStyleSheet(QString::fromUtf8("color:rgb(0, 255, 255)"));
        Label_2 = new QLabel(page_1);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));
        Label_2->setGeometry(QRect(120, 190, 271, 61));
        Label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 255, 255)"));
        Button_go = new QPushButton(page_1);
        Button_go->setObjectName(QString::fromUtf8("Button_go"));
        Button_go->setGeometry(QRect(110, 235, 210, 35));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        Button_go->setFont(font2);
        Button_go->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/res/white_background.png)"));
        Button_exit = new QPushButton(page_1);
        Button_exit->setObjectName(QString::fromUtf8("Button_exit"));
        Button_exit->setGeometry(QRect(415, 5, 20, 20));
        Button_ewm = new QPushButton(page_1);
        Button_ewm->setObjectName(QString::fromUtf8("Button_ewm"));
        Button_ewm->setGeometry(QRect(409, 299, 31, 31));
        Button_ewm->setStyleSheet(QString::fromUtf8("border-image:url(:/new/prefix1/res/ewm.png)"));
        Lable_log = new QLabel(page_1);
        Lable_log->setObjectName(QString::fromUtf8("Lable_log"));
        Lable_log->setGeometry(QRect(0, -10, 51, 41));
        Lable_log->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/res/log_0.png)"));
        Button_set = new QPushButton(page_1);
        Button_set->setObjectName(QString::fromUtf8("Button_set"));
        Button_set->setGeometry(QRect(390, 5, 20, 20));
        Label_netstat = new QLabel(page_1);
        Label_netstat->setObjectName(QString::fromUtf8("Label_netstat"));
        Label_netstat->setGeometry(QRect(100, 305, 240, 20));
        Label_netstat->setAlignment(Qt::AlignCenter);
        Label_login_stat = new QLabel(page_1);
        Label_login_stat->setObjectName(QString::fromUtf8("Label_login_stat"));
        Label_login_stat->setGeometry(QRect(100, 280, 240, 20));
        Label_login_stat->setAlignment(Qt::AlignCenter);
        main_stacked_widget->addWidget(page_1);
        Label_2->raise();
        Label_1->raise();
        LE_login->raise();
        LE_passwd->raise();
        Label_login->raise();
        Label_passwd->raise();
        Label_top->raise();
        Label_head->raise();
        Button_register->raise();
        Button_go->raise();
        Button_exit->raise();
        Button_ewm->raise();
        Lable_log->raise();
        Button_set->raise();
        Label_netstat->raise();
        Label_login_stat->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        LE_login2 = new QLineEdit(page_2);
        LE_login2->setObjectName(QString::fromUtf8("LE_login2"));
        LE_login2->setGeometry(QRect(120, 100, 220, 30));
        QFont font3;
        font3.setPointSize(15);
        LE_login2->setFont(font3);
        LE_login2->setMaxLength(16);
        LE_passwd2 = new QLineEdit(page_2);
        LE_passwd2->setObjectName(QString::fromUtf8("LE_passwd2"));
        LE_passwd2->setGeometry(QRect(120, 140, 220, 30));
        LE_passwd2->setFont(font1);
        LE_passwd2->setMaxLength(32);
        Label_passwd2 = new QLabel(page_2);
        Label_passwd2->setObjectName(QString::fromUtf8("Label_passwd2"));
        Label_passwd2->setGeometry(QRect(60, 140, 60, 30));
        Label_login2 = new QLabel(page_2);
        Label_login2->setObjectName(QString::fromUtf8("Label_login2"));
        Label_login2->setGeometry(QRect(60, 100, 60, 30));
        Label_message = new QLabel(page_2);
        Label_message->setObjectName(QString::fromUtf8("Label_message"));
        Label_message->setGeometry(QRect(150, 30, 140, 30));
        Label_message->setContextMenuPolicy(Qt::PreventContextMenu);
        Label_message->setLayoutDirection(Qt::LeftToRight);
        Label_message->setAlignment(Qt::AlignCenter);
        Button_register_go = new QPushButton(page_2);
        Button_register_go->setObjectName(QString::fromUtf8("Button_register_go"));
        Button_register_go->setGeometry(QRect(150, 180, 140, 45));
        Button_back_login = new QPushButton(page_2);
        Button_back_login->setObjectName(QString::fromUtf8("Button_back_login"));
        Button_back_login->setGeometry(QRect(150, 230, 140, 45));
        Label_netstat2 = new QLabel(page_2);
        Label_netstat2->setObjectName(QString::fromUtf8("Label_netstat2"));
        Label_netstat2->setGeometry(QRect(100, 300, 240, 30));
        Label_netstat2->setAlignment(Qt::AlignCenter);
        Label_feedback = new QLabel(page_2);
        Label_feedback->setObjectName(QString::fromUtf8("Label_feedback"));
        Label_feedback->setGeometry(QRect(100, 40, 240, 30));
        Label_feedback->setFont(font3);
        Label_feedback->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)"));
        Label_feedback->setAlignment(Qt::AlignCenter);
        main_stacked_widget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        Label_ewm = new QLabel(page_3);
        Label_ewm->setObjectName(QString::fromUtf8("Label_ewm"));
        Label_ewm->setGeometry(QRect(80, 0, 280, 330));
        Label_ewm->setStyleSheet(QString::fromUtf8("border-image:url(:/new/prefix1/res/ewm2.png)"));
        Button_ewm2 = new QPushButton(page_3);
        Button_ewm2->setObjectName(QString::fromUtf8("Button_ewm2"));
        Button_ewm2->setGeometry(QRect(410, 300, 31, 31));
        Button_ewm2->setStyleSheet(QString::fromUtf8("border-image:url(:/new/prefix1/res/ewm.png)"));
        main_stacked_widget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        LE_IP = new QLineEdit(page_4);
        LE_IP->setObjectName(QString::fromUtf8("LE_IP"));
        LE_IP->setGeometry(QRect(100, 100, 240, 30));
        QFont font4;
        font4.setPointSize(16);
        LE_IP->setFont(font4);
        LE_IP->setAlignment(Qt::AlignCenter);
        LE_PT = new QLineEdit(page_4);
        LE_PT->setObjectName(QString::fromUtf8("LE_PT"));
        LE_PT->setGeometry(QRect(100, 140, 240, 30));
        LE_PT->setFont(font4);
        LE_PT->setAlignment(Qt::AlignCenter);
        Button_CG_ip = new QPushButton(page_4);
        Button_CG_ip->setObjectName(QString::fromUtf8("Button_CG_ip"));
        Button_CG_ip->setGeometry(QRect(145, 190, 150, 40));
        QFont font5;
        font5.setPointSize(15);
        font5.setBold(false);
        font5.setWeight(50);
        Button_CG_ip->setFont(font5);
        Button_CG_ip->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        Button_CG_mr = new QPushButton(page_4);
        Button_CG_mr->setObjectName(QString::fromUtf8("Button_CG_mr"));
        Button_CG_mr->setGeometry(QRect(360, 120, 60, 30));
        Button_CG_mr->setFont(font1);
        Button_CG_mr->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        Button_CG_back = new QPushButton(page_4);
        Button_CG_back->setObjectName(QString::fromUtf8("Button_CG_back"));
        Button_CG_back->setGeometry(QRect(145, 250, 150, 40));
        Button_CG_back->setFont(font3);
        Button_CG_back->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        label = new QLabel(page_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(25, 100, 75, 30));
        QFont font6;
        font6.setPointSize(17);
        label->setFont(font6);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(page_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(25, 140, 75, 30));
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);
        main_stacked_widget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        Label_please_wait = new QLabel(page_5);
        Label_please_wait->setObjectName(QString::fromUtf8("Label_please_wait"));
        Label_please_wait->setGeometry(QRect(145, 85, 150, 150));
        Label_please_wait->setStyleSheet(QString::fromUtf8(""));
        Button_cancel = new QPushButton(page_5);
        Button_cancel->setObjectName(QString::fromUtf8("Button_cancel"));
        Button_cancel->setGeometry(QRect(120, 250, 200, 50));
        Button_cancel->setFont(font6);
        Button_cancel->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/new/prefix1/res/BackGround1.png);"));
        Label_server_go = new QLabel(page_5);
        Label_server_go->setObjectName(QString::fromUtf8("Label_server_go"));
        Label_server_go->setGeometry(QRect(120, 20, 200, 50));
        QFont font7;
        font7.setPointSize(14);
        Label_server_go->setFont(font7);
        Label_server_go->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));
        Label_server_go->setAlignment(Qt::AlignCenter);
        main_stacked_widget->addWidget(page_5);

        retranslateUi(qq_main_menu);

        main_stacked_widget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(qq_main_menu);
    } // setupUi

    void retranslateUi(QWidget *qq_main_menu)
    {
        qq_main_menu->setWindowTitle(QApplication::translate("qq_main_menu", "qq_main_menu", nullptr));
        LE_login->setText(QApplication::translate("qq_main_menu", "1060483009", nullptr));
        LE_passwd->setText(QApplication::translate("qq_main_menu", "1146011.", nullptr));
        Label_login->setText(QString());
        Label_passwd->setText(QString());
        Label_top->setText(QString());
        Label_head->setText(QString());
        Button_register->setText(QApplication::translate("qq_main_menu", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        Label_1->setText(QApplication::translate("qq_main_menu", "__________________________________", nullptr));
        Label_2->setText(QApplication::translate("qq_main_menu", "__________________________________", nullptr));
        Button_go->setText(QApplication::translate("qq_main_menu", "\347\231\273\345\275\225", nullptr));
        Button_exit->setText(QApplication::translate("qq_main_menu", "X", nullptr));
        Button_ewm->setText(QString());
        Lable_log->setText(QString());
        Button_set->setText(QApplication::translate("qq_main_menu", "#", nullptr));
        Label_netstat->setText(QString());
        Label_login_stat->setText(QString());
        Label_passwd2->setText(QApplication::translate("qq_main_menu", "\345\257\206\347\240\201\357\274\232", nullptr));
        Label_login2->setText(QApplication::translate("qq_main_menu", "\350\264\246\345\217\267\357\274\232", nullptr));
        Label_message->setText(QString());
        Button_register_go->setText(QApplication::translate("qq_main_menu", "\346\263\250\345\206\214", nullptr));
        Button_back_login->setText(QApplication::translate("qq_main_menu", "\350\277\224\345\233\236", nullptr));
        Label_netstat2->setText(QString());
        Label_feedback->setText(QString());
        Label_ewm->setText(QString());
        Button_ewm2->setText(QString());
        LE_IP->setText(QApplication::translate("qq_main_menu", "118.31.247.104", nullptr));
        LE_PT->setText(QApplication::translate("qq_main_menu", "4397", nullptr));
        Button_CG_ip->setText(QApplication::translate("qq_main_menu", "\347\241\256\345\256\232", nullptr));
        Button_CG_mr->setText(QApplication::translate("qq_main_menu", "\351\273\230\350\256\244", nullptr));
        Button_CG_back->setText(QApplication::translate("qq_main_menu", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("qq_main_menu", "IP", nullptr));
        label_2->setText(QApplication::translate("qq_main_menu", "PORT", nullptr));
        Label_please_wait->setText(QString());
        Button_cancel->setText(QApplication::translate("qq_main_menu", "\345\217\226\346\266\210\347\255\211\345\276\205", nullptr));
        Label_server_go->setText(QApplication::translate("qq_main_menu", "\346\255\243\345\234\250\345\222\214\346\234\215\345\212\241\345\231\250\346\262\237\351\200\232...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qq_main_menu: public Ui_qq_main_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQ_MAIN_MENU_H
