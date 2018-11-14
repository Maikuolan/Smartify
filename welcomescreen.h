#ifndef WELCOMESCREEN_H
#define WELCOMESCREEN_H

#include <QMainWindow>

namespace Ui {
class welcomeScreen;
}

class welcomeScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit welcomeScreen(QWidget *parent = nullptr);
    ~welcomeScreen();



private slots:
     void show_main_ui_to_user();

private:
    Ui::welcomeScreen *ui;
};

#endif // WELCOMESCREEN_H
