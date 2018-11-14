#ifndef SINGLE_PAGE_UI_H
#define SINGLE_PAGE_UI_H

#include <QMainWindow>

namespace Ui {
class single_page_ui;
}

class single_page_ui : public QMainWindow
{
    Q_OBJECT

public:
    explicit single_page_ui(QWidget *parent = nullptr);
    ~single_page_ui();


    void refresh_affected_files_list();
private slots:
    void on_chooseFolderButton_clicked();

    void on_file_starting_name_editingFinished();

    void on_extensions_to_be_deleted_editingFinished();

    void on_confirm_delete_clicked();

private:
    QStringList AFFECTED_FILES_LIST;
    Ui::single_page_ui *ui;
    void update_affected_files(const QStringList &affected_files_list);
};

#endif // SINGLE_PAGE_UI_H
