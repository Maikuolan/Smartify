/********************************************************************************
** Form generated from reading UI file 'deletefiles.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFILES_H
#define UI_DELETEFILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteFiles
{
public:
    QWidget *centralwidget;
    QListWidget *affectedFiles;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *dirName;
    QLabel *label_3;
    QLabel *label;
    QPushButton *nextButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeleteFiles)
    {
        if (DeleteFiles->objectName().isEmpty())
            DeleteFiles->setObjectName(QStringLiteral("DeleteFiles"));
        DeleteFiles->resize(700, 500);
        DeleteFiles->setMinimumSize(QSize(700, 500));
        DeleteFiles->setMaximumSize(QSize(700, 500));
        DeleteFiles->setStyleSheet(QStringLiteral("background-color: #fbfbfc;"));
        centralwidget = new QWidget(DeleteFiles);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        affectedFiles = new QListWidget(centralwidget);
        affectedFiles->setObjectName(QStringLiteral("affectedFiles"));
        affectedFiles->setGeometry(QRect(50, 220, 601, 192));
        affectedFiles->setSelectionMode(QAbstractItemView::MultiSelection);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 180, 171, 31));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 111, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(13);
        label_2->setFont(font1);
        dirName = new QLineEdit(centralwidget);
        dirName->setObjectName(QStringLiteral("dirName"));
        dirName->setEnabled(false);
        dirName->setGeometry(QRect(100, 130, 511, 25));
        dirName->setStyleSheet(QStringLiteral("color: #000000;"));
        dirName->setClearButtonEnabled(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 90, 151, 31));
        QFont font2;
        font2.setPointSize(13);
        label_3->setFont(font2);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, 0, 731, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu"));
        font3.setPointSize(24);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QLatin1String("background-color: #1a1a1d;\n"
"color: #ffffff;"));
        label->setAlignment(Qt::AlignCenter);
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(290, 440, 161, 41));
        nextButton->setStyleSheet(QLatin1String("background-color: #000000;\n"
"\n"
"color: #ffffff;"));
        DeleteFiles->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DeleteFiles);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DeleteFiles->setStatusBar(statusbar);

        retranslateUi(DeleteFiles);

        QMetaObject::connectSlotsByName(DeleteFiles);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteFiles)
    {
        DeleteFiles->setWindowTitle(QApplication::translate("DeleteFiles", "Delete FIles", nullptr));
        label_4->setText(QApplication::translate("DeleteFiles", "Affected files", nullptr));
        label_2->setText(QApplication::translate("DeleteFiles", "step 3 of 3", nullptr));
        dirName->setText(QApplication::translate("DeleteFiles", "/home", nullptr));
        label_3->setText(QApplication::translate("DeleteFiles", "Chosen directory", nullptr));
        label->setText(QApplication::translate("DeleteFiles", "SMARTIFY FILE REMOVER", nullptr));
        nextButton->setText(QApplication::translate("DeleteFiles", "Proceed to delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteFiles: public Ui_DeleteFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFILES_H
