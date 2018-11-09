#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H
#include<string>
#include<QString>
#include<iostream>


class FileOperations
{
public:
    FileOperations();
    QStringList affectedFiles(QString& dirname, QStringList& delExts);
    void removeFiles(QString &dirname, QStringList &delExts);
private:
    std::string directory;
    int filePermissions;


};

#endif // FILEOPERATIONS_H
