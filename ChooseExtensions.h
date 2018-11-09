#ifndef CHOOSEEXTENSIONS_H
#define CHOOSEEXTENSIONS_H
#include<deque>
#include <QMainWindow>

namespace Ui {
class ChooseExtensions;
}

class ChooseExtensions : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChooseExtensions( std::deque<QString>& exts, QString& directory, QWidget *parent = nullptr);
     QStringList choosedExtensionsList;
     QString directoryName;
     void refreshChoosedExtensionList();
    ~ChooseExtensions();

private slots:
    void on_previousButton_clicked();

    void on_putInToChoosedExtensions_clicked();



    void on_removeFromChoosedExtensions_clicked();

    void on_nextButton_clicked();

private:
    Ui::ChooseExtensions *ui;
    std::deque<QString> extensions;
};

#endif // CHOOSEEXTENSIONS_H
