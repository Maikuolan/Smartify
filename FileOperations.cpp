#include "FileOperations.h"
#include<QDirIterator>
#include<iostream>
FileOperations::FileOperations()
{

}

QStringList FileOperations::affectedFiles(QString &dirname, QStringList &delExts)
{
    QStringList files;
    dirname  = dirname + "/";
    QDirIterator it(dirname, QDir::NoFilter, QDirIterator::Subdirectories);
    while (it.hasNext()) {
        QFile f(it.next());

        if (!f.fileName().endsWith("..") && !f.fileName().endsWith(".")) {
           QFileInfo finfo(f);
           QString extension = finfo.suffix();
           if (!extension.isEmpty() && !extension.isNull() && delExts.contains(extension)) {
                files  << f.fileName();
           }

        }
    }
    return files;
}

void FileOperations::removeFiles(QString &dirname, QStringList &delExts)
{

    dirname  = dirname + "/";
    QDirIterator it(dirname, QDir::NoFilter, QDirIterator::Subdirectories);
    while (it.hasNext()) {
        QFile f(it.next());

        if (!f.fileName().endsWith("..") && !f.fileName().endsWith(".")) {
           QFileInfo finfo(f);
           QString extension = finfo.suffix();
           if (!extension.isEmpty() && !extension.isNull() && delExts.contains(extension)) {
                f.remove();
           }

        }
    }
}


