#include "ChooseExtensions.h"
#include "mainwindow.h"
#include "ui_chooseextensions.h"
#include "DeleteFiles.h"
#include<QList>
#include<iostream>

ChooseExtensions::ChooseExtensions(std::deque<QString>& exts, QString& directory,  QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChooseExtensions)
{
    ui->setupUi(this);
    extensions = exts;
    //set it up on ui
    for (auto i = extensions.begin(); i!=extensions.end(); i++) {
        ui->availableExtensions->addItem(*i);
    }
    directoryName = directory;
    ui->dirName->setText(directoryName);

}

void ChooseExtensions::refreshChoosedExtensionList()
{
    ui->choosedExtensions->clear();
    for (auto i = choosedExtensionsList.begin(); i != choosedExtensionsList.end(); i++) {
        ui->choosedExtensions->addItem(*i);
    }
}

ChooseExtensions::~ChooseExtensions()
{
    delete ui;
}




void ChooseExtensions::on_previousButton_clicked()
{
    this->close();
    MainWindow *mw = new MainWindow();
    mw->show();
}

void ChooseExtensions::on_putInToChoosedExtensions_clicked()
{
    QList<QListWidgetItem *> choosed = ui->availableExtensions->selectedItems();
    ui->choosedExtensions->clear();
    choosedExtensionsList.clear();
    foreach( QListWidgetItem *item, ui->availableExtensions->selectedItems() ) {
        choosedExtensionsList << item->text();
    }
    ui->choosedExtensions->addItems(choosedExtensionsList);
}




void ChooseExtensions::on_removeFromChoosedExtensions_clicked()
{
    QString extensionToBeRemoved  = ui->choosedExtensions->currentItem()->text();
    choosedExtensionsList.removeAll(extensionToBeRemoved);
    refreshChoosedExtensionList();

}

void ChooseExtensions::on_nextButton_clicked()
{
    this->close();
    DeleteFiles *d = new DeleteFiles(choosedExtensionsList, directoryName);
    d->show();
}
