#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QFileDialog>
#include<ChooseExtensions.h>
#include<QDesktopWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadExtensionsToMemory();
}

void MainWindow::loadExtensionsToMemory()
{
    QFile file(FILE_EXTENSIONS_DATA_FILE);

    file.open(QIODevice::ReadOnly);
    while (!file.atEnd()) {
        QString line = file.readLine();
        line.replace("\n", "");
        extensions.push_back(line);
    }
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_chooseDirectoryButton_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                 "/home",
                                                 QFileDialog::ShowDirsOnly
                                                 | QFileDialog::DontResolveSymlinks);
    ui->selectedFolder->setText(dir);
}

void MainWindow::on_nextButton_clicked()
{
    this->close();

    QString dir = ui->selectedFolder->text();

    ChooseExtensions *ce = new ChooseExtensions(extensions, dir);

    ce->show();


}
