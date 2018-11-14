#include "single_page_ui.h"
#include "ui_single_page_ui.h"
#include<QFileDialog>
#include<QFileInfo>
#include<memory>
#include <QDirIterator>
#include <file_operations.h>


single_page_ui::single_page_ui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::single_page_ui)
{
    ui->setupUi(this);
}

single_page_ui::~single_page_ui()
{
    delete ui;
}

void single_page_ui::on_chooseFolderButton_clicked()
{
    QString caption = "Choose Folder";
    QString default_directory = "/home";
    QString dir = QFileDialog::getExistingDirectory( this, caption, default_directory, QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks );
    ui->choosedFolder->setText(dir);
}

void single_page_ui::on_file_starting_name_editingFinished()
{
   // refresh_affected_files_list();
}

void single_page_ui::on_extensions_to_be_deleted_editingFinished()
{
    refresh_affected_files_list();
}
void single_page_ui::refresh_affected_files_list() {
    bool is_recursion_needed = ui->is_recursion_needed->isChecked();
    QString file_starting_name = ui->file_starting_name->text().replace(" ", "");
    QString extensions_to_be_deleted = ui->extensions_to_be_deleted->text().replace(" ", "");
    QString directory = ui->choosedFolder->text().replace(" ","");

    if (!directory.isEmpty() && !directory.isNull()) {
        std::unique_ptr<parse_file_rules> parser = std::make_unique<parse_file_rules>(extensions_to_be_deleted);
        QStringList extensions = parser->get_extensions_for_deletion();
        if (file_starting_name.isEmpty() || file_starting_name.isNull()) {

        }
        else {
            //add wild card to name filter
            file_starting_name = file_starting_name + "*";
            extensions.append(file_starting_name);
        }

        std::unique_ptr<iterate_files_on_directory> files = std::make_unique<iterate_files_on_directory>(directory, is_recursion_needed, extensions);
        AFFECTED_FILES_LIST = files->return_all_affected_files();
        update_affected_files(AFFECTED_FILES_LIST);

    }

}

void single_page_ui::update_affected_files(const QStringList& affected_files_list) {
    ui->affectedFilesList->clear();
    ui->affectedFilesList->insertItems(0, affected_files_list);
    int count = affected_files_list.length();
    ui->affectedFileStatusArea->setText("Affected Files (" + QString::fromStdString( std::to_string(count) ) + ")");
}


void single_page_ui::on_confirm_delete_clicked()
{
  iterate_files_on_directory::delete_all_affected_files(AFFECTED_FILES_LIST);
  update_affected_files(AFFECTED_FILES_LIST);
  ui->affectedFileStatusArea->setText("!Files deleted successfully");
  ui->affectedFileStatusArea->setStyleSheet("color: green;");
}
