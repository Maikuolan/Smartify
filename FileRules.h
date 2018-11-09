#ifndef FILERULES_H
#define FILERULES_H
#include<string>
#include<QFileInfo>
#include<vector>
class FileRules
{
public:
    FileRules();
    void addExtensions(const QString& extension);
private:
    std::vector<QString> extensions;
    bool checkForRules(const QFileInfo& finfo);

};

#endif // FILERULES_H
