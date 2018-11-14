#include "welcomescreen.h"
#include "ui_welcomescreen.h"
#include "single_page_ui.h"
#include<memory>
#include<QTimer>
#include<iostream>

welcomeScreen::welcomeScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::welcomeScreen)
{
    ui->setupUi(this);
    QTimer::singleShot(2000, this, SLOT(show_main_ui_to_user()));


}

welcomeScreen::~welcomeScreen()
{
    delete ui;
}

void welcomeScreen::show_main_ui_to_user() {
    this->close();
    single_page_ui *s = new single_page_ui();
    s->show();
}
