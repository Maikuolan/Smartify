#include "resultwindow.h"
#include "ui_resultwindow.h"
#include "mainwindow.h"
resultWindow::resultWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resultWindow)
{
    ui->setupUi(this);
}

resultWindow::~resultWindow()
{
    delete ui;
}

void resultWindow::on_nextButton_clicked()
{
    this->close();

    MainWindow *mw = new MainWindow();

    mw->show();
}
