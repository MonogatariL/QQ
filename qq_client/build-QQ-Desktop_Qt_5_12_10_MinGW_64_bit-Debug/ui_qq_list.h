/********************************************************************************
** Form generated from reading UI file 'qq_list.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQ_LIST_H
#define UI_QQ_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qq_list
{
public:
    QLabel *Label_head;
    QLabel *Label_account;
    QLabel *Label_top;
    QPushButton *Button_quit;
    QLabel *Label_logo;
    QLabel *Label_bottom;
    QPushButton *Button_check_please;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableView *tableView;
    QWidget *page_2;
    QTableView *tableView2;
    QLineEdit *LE_add_account;
    QPushButton *Button_add;
    QLabel *label;
    QLabel *Label_add_feedback;
    QWidget *page_3;
    QLineEdit *LE_CG1;
    QLineEdit *LE_CG2;
    QLineEdit *LE_CG3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_2;
    QPushButton *Button_CG;
    QLabel *Label_feedback;
    QLabel *label_11;
    QLabel *Label_12;
    QLabel *Label_13;
    QLabel *label_4;
    QLineEdit *LE_CG_NM;
    QPushButton *Button_CG_NM;
    QLabel *Label_feedback2;
    QPushButton *Button_set;
    QPushButton *Button_refresh;
    QLabel *Label_name;
    QLabel *Label_netstat;
    QLabel *Label_friendss;
    QLabel *Label_online;

    void setupUi(QWidget *qq_list)
    {
        if (qq_list->objectName().isEmpty())
            qq_list->setObjectName(QString::fromUtf8("qq_list"));
        qq_list->resize(300, 710);
        qq_list->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround2.png);"));
        Label_head = new QLabel(qq_list);
        Label_head->setObjectName(QString::fromUtf8("Label_head"));
        Label_head->setGeometry(QRect(10, 10, 50, 50));
        Label_head->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/res/qq.png);"));
        Label_account = new QLabel(qq_list);
        Label_account->setObjectName(QString::fromUtf8("Label_account"));
        Label_account->setGeometry(QRect(70, 40, 150, 25));
        Label_account->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/login_background.png);"));
        Label_account->setAlignment(Qt::AlignCenter);
        Label_top = new QLabel(qq_list);
        Label_top->setObjectName(QString::fromUtf8("Label_top"));
        Label_top->setGeometry(QRect(0, 0, 300, 75));
        Label_top->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/login_background.png);"));
        Button_quit = new QPushButton(qq_list);
        Button_quit->setObjectName(QString::fromUtf8("Button_quit"));
        Button_quit->setGeometry(QRect(285, 0, 15, 15));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        Button_quit->setFont(font);
        Button_quit->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
""));
        Button_quit->setCheckable(false);
        Label_logo = new QLabel(qq_list);
        Label_logo->setObjectName(QString::fromUtf8("Label_logo"));
        Label_logo->setGeometry(QRect(235, 28, 50, 50));
        QFont font1;
        font1.setPointSize(8);
        Label_logo->setFont(font1);
        Label_logo->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/log_0.png);"));
        Label_logo->setAlignment(Qt::AlignCenter);
        Label_bottom = new QLabel(qq_list);
        Label_bottom->setObjectName(QString::fromUtf8("Label_bottom"));
        Label_bottom->setGeometry(QRect(0, 675, 300, 35));
        Label_bottom->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/login_background.png);"));
        Button_check_please = new QPushButton(qq_list);
        Button_check_please->setObjectName(QString::fromUtf8("Button_check_please"));
        Button_check_please->setGeometry(QRect(100, 75, 100, 25));
        Button_check_please->setFont(font);
        Button_check_please->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));
        stackedWidget = new QStackedWidget(qq_list);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 100, 300, 575));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        tableView = new QTableView(page);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 5, 300, 570));
        tableView->setStyleSheet(QString::fromUtf8(""));
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setMinimumSectionSize(0);
        tableView->horizontalHeader()->setDefaultSectionSize(50);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setDefaultSectionSize(50);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tableView2 = new QTableView(page_2);
        tableView2->setObjectName(QString::fromUtf8("tableView2"));
        tableView2->setGeometry(QRect(0, 25, 300, 480));
        tableView2->horizontalHeader()->setVisible(false);
        tableView2->horizontalHeader()->setMinimumSectionSize(0);
        tableView2->horizontalHeader()->setDefaultSectionSize(50);
        tableView2->verticalHeader()->setVisible(false);
        tableView2->verticalHeader()->setDefaultSectionSize(50);
        LE_add_account = new QLineEdit(page_2);
        LE_add_account->setObjectName(QString::fromUtf8("LE_add_account"));
        LE_add_account->setGeometry(QRect(10, 540, 220, 25));
        QFont font2;
        font2.setPointSize(15);
        LE_add_account->setFont(font2);
        LE_add_account->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        LE_add_account->setMaxLength(20);
        LE_add_account->setAlignment(Qt::AlignCenter);
        Button_add = new QPushButton(page_2);
        Button_add->setObjectName(QString::fromUtf8("Button_add"));
        Button_add->setGeometry(QRect(240, 540, 50, 25));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        Button_add->setFont(font3);
        Button_add->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 510, 300, 25));
        QFont font4;
        font4.setPointSize(16);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);"));
        label->setAlignment(Qt::AlignCenter);
        Label_add_feedback = new QLabel(page_2);
        Label_add_feedback->setObjectName(QString::fromUtf8("Label_add_feedback"));
        Label_add_feedback->setGeometry(QRect(0, 0, 300, 25));
        QFont font5;
        font5.setPointSize(13);
        Label_add_feedback->setFont(font5);
        Label_add_feedback->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);\n"
"color: rgb(85, 170, 255);"));
        Label_add_feedback->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        LE_CG1 = new QLineEdit(page_3);
        LE_CG1->setObjectName(QString::fromUtf8("LE_CG1"));
        LE_CG1->setGeometry(QRect(90, 80, 175, 25));
        LE_CG1->setMaxLength(20);
        LE_CG2 = new QLineEdit(page_3);
        LE_CG2->setObjectName(QString::fromUtf8("LE_CG2"));
        LE_CG2->setGeometry(QRect(90, 120, 175, 25));
        LE_CG2->setMaxLength(20);
        LE_CG3 = new QLineEdit(page_3);
        LE_CG3->setObjectName(QString::fromUtf8("LE_CG3"));
        LE_CG3->setGeometry(QRect(90, 160, 175, 25));
        LE_CG3->setMaxLength(20);
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 160, 60, 25));
        label_8->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 120, 60, 25));
        label_9->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));"));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 80, 60, 25));
        label_10->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));"));
        label_10->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 35, 100, 25));
        QFont font6;
        font6.setPointSize(14);
        label_2->setFont(font6);
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        label_2->setAlignment(Qt::AlignCenter);
        Button_CG = new QPushButton(page_3);
        Button_CG->setObjectName(QString::fromUtf8("Button_CG"));
        Button_CG->setGeometry(QRect(100, 200, 100, 30));
        Button_CG->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 255), stop:0.19397 rgba(0, 0, 0, 255), stop:0.202312 rgba(122, 97, 0, 255), stop:0.495514 rgba(76, 58, 0, 255), stop:0.504819 rgba(255, 255, 255, 255), stop:0.79 rgba(255, 255, 255, 255), stop:1 rgba(255, 158, 158, 255));"));
        Label_feedback = new QLabel(page_3);
        Label_feedback->setObjectName(QString::fromUtf8("Label_feedback"));
        Label_feedback->setGeometry(QRect(75, 240, 150, 20));
        Label_feedback->setStyleSheet(QString::fromUtf8(""));
        Label_feedback->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 300, 20));
        label_11->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        label_11->setAlignment(Qt::AlignCenter);
        Label_12 = new QLabel(page_3);
        Label_12->setObjectName(QString::fromUtf8("Label_12"));
        Label_12->setGeometry(QRect(0, 270, 300, 20));
        Label_12->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        Label_12->setAlignment(Qt::AlignCenter);
        Label_13 = new QLabel(page_3);
        Label_13->setObjectName(QString::fromUtf8("Label_13"));
        Label_13->setGeometry(QRect(0, 470, 300, 20));
        Label_13->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        Label_13->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 310, 100, 25));
        label_4->setFont(font6);
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        label_4->setAlignment(Qt::AlignCenter);
        LE_CG_NM = new QLineEdit(page_3);
        LE_CG_NM->setObjectName(QString::fromUtf8("LE_CG_NM"));
        LE_CG_NM->setGeometry(QRect(50, 355, 200, 30));
        QFont font7;
        font7.setPointSize(11);
        LE_CG_NM->setFont(font7);
        LE_CG_NM->setMaxLength(12);
        LE_CG_NM->setAlignment(Qt::AlignCenter);
        Button_CG_NM = new QPushButton(page_3);
        Button_CG_NM->setObjectName(QString::fromUtf8("Button_CG_NM"));
        Button_CG_NM->setGeometry(QRect(100, 400, 100, 30));
        Button_CG_NM->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 255), stop:0.19397 rgba(0, 0, 0, 255), stop:0.202312 rgba(122, 97, 0, 255), stop:0.495514 rgba(76, 58, 0, 255), stop:0.504819 rgba(255, 255, 255, 255), stop:0.79 rgba(255, 255, 255, 255), stop:1 rgba(255, 158, 158, 255));"));
        Label_feedback2 = new QLabel(page_3);
        Label_feedback2->setObjectName(QString::fromUtf8("Label_feedback2"));
        Label_feedback2->setGeometry(QRect(75, 440, 150, 20));
        Label_feedback2->setStyleSheet(QString::fromUtf8(""));
        Label_feedback2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_3);
        Button_set = new QPushButton(qq_list);
        Button_set->setObjectName(QString::fromUtf8("Button_set"));
        Button_set->setGeometry(QRect(200, 75, 100, 25));
        Button_set->setFont(font);
        Button_set->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
""));
        Button_refresh = new QPushButton(qq_list);
        Button_refresh->setObjectName(QString::fromUtf8("Button_refresh"));
        Button_refresh->setGeometry(QRect(0, 75, 100, 25));
        Button_refresh->setFont(font);
        Button_refresh->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
""));
        Label_name = new QLabel(qq_list);
        Label_name->setObjectName(QString::fromUtf8("Label_name"));
        Label_name->setGeometry(QRect(70, 10, 170, 20));
        Label_name->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/login_background.png);"));
        Label_name->setAlignment(Qt::AlignCenter);
        Label_netstat = new QLabel(qq_list);
        Label_netstat->setObjectName(QString::fromUtf8("Label_netstat"));
        Label_netstat->setGeometry(QRect(100, 685, 100, 15));
        Label_netstat->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/login_background.png);"));
        Label_netstat->setAlignment(Qt::AlignCenter);
        Label_friendss = new QLabel(qq_list);
        Label_friendss->setObjectName(QString::fromUtf8("Label_friendss"));
        Label_friendss->setGeometry(QRect(240, 675, 60, 15));
        Label_friendss->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        Label_online = new QLabel(qq_list);
        Label_online->setObjectName(QString::fromUtf8("Label_online"));
        Label_online->setGeometry(QRect(240, 695, 60, 15));
        Label_online->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/res/BackGround1.png);"));
        Label_bottom->raise();
        Label_top->raise();
        Label_head->raise();
        Label_account->raise();
        Button_quit->raise();
        Label_logo->raise();
        Button_check_please->raise();
        stackedWidget->raise();
        Button_set->raise();
        Button_refresh->raise();
        Label_name->raise();
        Label_netstat->raise();
        Label_friendss->raise();
        Label_online->raise();

        retranslateUi(qq_list);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(qq_list);
    } // setupUi

    void retranslateUi(QWidget *qq_list)
    {
        qq_list->setWindowTitle(QApplication::translate("qq_list", "Form", nullptr));
        Label_head->setText(QString());
        Label_account->setText(QApplication::translate("qq_list", "1060483009", nullptr));
        Label_top->setText(QString());
        Button_quit->setText(QApplication::translate("qq_list", "X", nullptr));
        Label_logo->setText(QString());
        Label_bottom->setText(QString());
        Button_check_please->setText(QApplication::translate("qq_list", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        LE_add_account->setText(QString());
        Button_add->setText(QApplication::translate("qq_list", "+", nullptr));
        label->setText(QApplication::translate("qq_list", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        Label_add_feedback->setText(QApplication::translate("qq_list", "\345\245\275\345\217\213\350\257\267\346\261\202", nullptr));
        label_8->setText(QApplication::translate("qq_list", "\345\206\215\346\254\241\350\276\223\345\205\245", nullptr));
        label_9->setText(QApplication::translate("qq_list", "\346\226\260\345\257\206\347\240\201", nullptr));
        label_10->setText(QApplication::translate("qq_list", "\345\210\235\345\247\213\345\257\206\347\240\201", nullptr));
        label_2->setText(QApplication::translate("qq_list", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        Button_CG->setText(QApplication::translate("qq_list", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        Label_feedback->setText(QString());
        label_11->setText(QString());
        Label_12->setText(QString());
        Label_13->setText(QString());
        label_4->setText(QApplication::translate("qq_list", "\344\277\256\346\224\271\346\230\265\347\247\260", nullptr));
        LE_CG_NM->setText(QString());
        Button_CG_NM->setText(QApplication::translate("qq_list", "\344\277\256\346\224\271\346\230\265\347\247\260", nullptr));
        Label_feedback2->setText(QString());
        Button_set->setText(QApplication::translate("qq_list", "\350\256\276\347\275\256", nullptr));
        Button_refresh->setText(QApplication::translate("qq_list", "\345\245\275\345\217\213\345\210\227\350\241\250", nullptr));
        Label_name->setText(QApplication::translate("qq_list", "\345\244\251\346\265\267\347\231\275\351\262\270\344\271\213\346\211\200\345\220\221", nullptr));
        Label_netstat->setText(QApplication::translate("qq_list", "\345\267\262\350\277\236\346\216\245", nullptr));
        Label_friendss->setText(QApplication::translate("qq_list", "\345\245\275\345\217\213\357\274\232", nullptr));
        Label_online->setText(QApplication::translate("qq_list", "\345\234\250\347\272\277\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qq_list: public Ui_qq_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQ_LIST_H
