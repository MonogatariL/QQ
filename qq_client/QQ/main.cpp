#include "qq_main_menu.h"
#include "qq_list.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qq_main_menu w;
    internet client;
    qq_list q(&client,"1060483009","1146011");
    chat c(&client,"123","123","123");
    c.show();
    q.show();
    w.show();
    return a.exec();
}
