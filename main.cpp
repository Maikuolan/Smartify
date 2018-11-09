#include "mainwindow.h"
#include <QApplication>
#include<QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(Qt::Window);
    w.move(QApplication::desktop()->rect().center() - w.rect().center());
    w.show();

    return a.exec();
}
