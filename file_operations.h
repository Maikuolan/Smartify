#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H
#include <QDirIterator>
#include<memory>
class parse_file_rules {
private:
    QString extensions;
public:
    explicit parse_file_rules( QString& extensions )
        :extensions( extensions )
    {

    }
    //returns extensions in a string list
    QStringList get_extensions_for_deletion() {
        QStringList extensions_for_deletion;
        extensions_for_deletion = this->extensions.split(",");
        //add wild cards to all extensions, append * to all extensions provided by user
        extensions_for_deletion.replaceInStrings(QRegExp("^."), "*.");
        return extensions_for_deletion;
    }
};

class test_file_rules {
private:
    QString file_starting_name;
    QStringList extensions_to_be_deleted;
public:
    test_file_rules(const QString& file_starting_name, const QStringList& extensions_to_be_deleted)
        :file_starting_name(file_starting_name), extensions_to_be_deleted(extensions_to_be_deleted) {
    }
    //returns true if the file obeys the condition
    bool  test_file_rules_result(QString& filename) {
        bool default_response = false;
        QString file_extension = QFileInfo(filename).suffix();

        return default_response;
    }
};

class iterate_files_on_directory {
private:
    QString directory_name;
    bool is_recursion_needed;
    QStringList name_filters;

    void getAllFilesFromIterator(QDirIterator& it, QStringList& affected_files) {
        while (it.hasNext()) {

            QFile f(it.next());
            affected_files << f.fileName();
        }
    }

public:
    explicit iterate_files_on_directory(const QString& directory_name, const bool& is_recursion_needed, const QStringList& name_filters)
        :directory_name(directory_name), is_recursion_needed(is_recursion_needed), name_filters(name_filters)
    {

    }
    QStringList return_all_affected_files() {
        QStringList affected_files;
        if (is_recursion_needed) {
            //do a complete recursion
            QDirIterator it(this->directory_name, name_filters, QDir::NoDotAndDotDot|QDir::Files, QDirIterator::Subdirectories);
            getAllFilesFromIterator(it, affected_files);
        }
        else {
            //do a normal file iteration
            QDirIterator it(this->directory_name, name_filters, QDir::NoDotAndDotDot|QDir::Files, QDirIterator::NoIteratorFlags);
            getAllFilesFromIterator(it, affected_files);
        }
        return affected_files;
    }

    static void delete_all_affected_files(QStringList& affected_files_list) {

        for (auto iterator: affected_files_list) {
            QFile f(iterator);
            f.remove();
        }
        affected_files_list.clear();
    }


};
#endif // FILE_OPERATIONS_H
