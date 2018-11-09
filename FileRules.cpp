#include "FileRules.h"

FileRules::FileRules()
{

}


void FileRules::addExtensions(const QString& extension){
    extensions.push_back(extension);
}

