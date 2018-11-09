#include "DeleteFiles.h"
#include "ui_deletefiles.h"
#include "ChooseExtensions.h"
#include "resultwindow.h"


DeleteFiles::DeleteFiles(QStringList &extensionsToBeDeleted, QString& directory, QWidget *parent)
    :QMainWindow(parent),
        ui(new Ui::DeleteFiles)
    {
        ui->setupUi(this);
        extensions = extensionsToBeDeleted;
        directoryName = directory;
        ui->dirName->setText(directoryName);
        showAffectedFiles();

    }

DeleteFiles::~DeleteFiles()
{
    delete fo;
    delete ui;

}

void DeleteFiles::showAffectedFiles() {
    fo = new FileOperations();
    QStringList affectedFiles = fo->affectedFiles(directoryName, extensions);
    ui->affectedFiles->addItems(affectedFiles);

}



void DeleteFiles::on_nextButton_clicked()
{
    fo->removeFiles(directoryName, extensions);

    this->close();


    resultWindow *rw = new resultWindow();

    rw->show();

}
