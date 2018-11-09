#ifndef DELETEFILES_H
#define DELETEFILES_H

#include <QMainWindow>
#include "FileOperations.h"

namespace Ui {
class DeleteFiles;
}

class DeleteFiles : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteFiles(QStringList& extensionsToBeDeleted, QString& directory, QWidget *parent = nullptr);
    void showAffectedFiles();
    ~DeleteFiles();



private slots:
    void on_nextButton_clicked();

private:
    Ui::DeleteFiles *ui;
    FileOperations *fo = nullptr;
    QString directoryName;
    QStringList extensions;
};

#endif // DELETEFILES_H
