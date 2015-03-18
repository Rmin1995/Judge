#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Judge::clear();
    MainWindow w;
    w.show();
    w.move(QApplication::desktop()->screen()->rect().center()-w.rect().center());

    return a.exec();
}
