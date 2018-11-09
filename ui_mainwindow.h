/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *nextButton;
    QLineEdit *selectedFolder;
    QLabel *label_4;
    QPushButton *chooseDirectoryButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(700, 400));
        MainWindow->setMaximumSize(QSize(700, 400));
        MainWindow->setStyleSheet(QLatin1String("color: #000000\n"
";\n"
"\n"
"\n"
"background-color: #fbfbfc;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 731, 51));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: #1a1a1d;\n"
"color: #ffffff;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 111, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(13);
        label_2->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 120, 641, 31));
        QFont font2;
        font2.setPointSize(13);
        label_3->setFont(font2);
        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(570, 320, 101, 41));
        nextButton->setStyleSheet(QLatin1String("background-color: #000000;\n"
"\n"
"color: #ffffff;"));
        selectedFolder = new QLineEdit(centralWidget);
        selectedFolder->setObjectName(QStringLiteral("selectedFolder"));
        selectedFolder->setEnabled(false);
        selectedFolder->setGeometry(QRect(50, 220, 511, 25));
        selectedFolder->setClearButtonEnabled(false);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 190, 111, 17));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);
        chooseDirectoryButton = new QPushButton(centralWidget);
        chooseDirectoryButton->setObjectName(QStringLiteral("chooseDirectoryButton"));
        chooseDirectoryButton->setGeometry(QRect(570, 220, 21, 25));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Smartify file remover", nullptr));
        label->setText(QApplication::translate("MainWindow", "SMARTIFY FILE REMOVER", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Step 1 of 3", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Choose the folder you want to perform file deletion operation", nullptr));
        nextButton->setText(QApplication::translate("MainWindow", "Next", nullptr));
        selectedFolder->setText(QApplication::translate("MainWindow", "/home", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Selected Folder", nullptr));
        chooseDirectoryButton->setText(QApplication::translate("MainWindow", "..", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
