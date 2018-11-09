#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <deque>
#include<QDir>
#include<QCoreApplication>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void loadExtensionsToMemory();
    ~MainWindow();
    QString FILE_EXTENSIONS_DATA_FILE = QCoreApplication::applicationDirPath() + "/FileExtensions.csv";

private slots:
    void on_chooseDirectoryButton_clicked();

    void on_nextButton_clicked();

private:
    std::deque<QString> extensions;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
