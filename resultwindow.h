#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include <QMainWindow>

namespace Ui {
class resultWindow;
}

class resultWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit resultWindow(QWidget *parent = nullptr);
    ~resultWindow();

private slots:
    void on_nextButton_clicked();

private:
    Ui::resultWindow *ui;
};

#endif // RESULTWINDOW_H
