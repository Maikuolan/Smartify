/********************************************************************************
** Form generated from reading UI file 'chooseextensions.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEEXTENSIONS_H
#define UI_CHOOSEEXTENSIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseExtensions
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QListWidget *availableExtensions;
    QPushButton *nextButton;
    QPushButton *previousButton;
    QListWidget *choosedExtensions;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *putInToChoosedExtensions;
    QPushButton *removeFromChoosedExtensions;
    QLineEdit *dirName;

    void setupUi(QMainWindow *ChooseExtensions)
    {
        if (ChooseExtensions->objectName().isEmpty())
            ChooseExtensions->setObjectName(QStringLiteral("ChooseExtensions"));
        ChooseExtensions->resize(700, 600);
        ChooseExtensions->setMinimumSize(QSize(700, 600));
        ChooseExtensions->setMaximumSize(QSize(700, 600));
        ChooseExtensions->setStyleSheet(QStringLiteral("background-color: #fbfbfc;"));
        centralwidget = new QWidget(ChooseExtensions);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-20, 0, 731, 51));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: #1a1a1d;\n"
"color: #ffffff;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 111, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(13);
        label_2->setFont(font1);
        availableExtensions = new QListWidget(centralwidget);
        availableExtensions->setObjectName(QStringLiteral("availableExtensions"));
        availableExtensions->setGeometry(QRect(30, 310, 256, 192));
        availableExtensions->setSelectionMode(QAbstractItemView::MultiSelection);
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(590, 540, 101, 41));
        nextButton->setStyleSheet(QLatin1String("background-color: #000000;\n"
"\n"
"color: #ffffff;"));
        previousButton = new QPushButton(centralwidget);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        previousButton->setGeometry(QRect(20, 540, 101, 41));
        previousButton->setStyleSheet(QLatin1String("background-color: #000000;\n"
"\n"
"color: #ffffff;"));
        choosedExtensions = new QListWidget(centralwidget);
        choosedExtensions->setObjectName(QStringLiteral("choosedExtensions"));
        choosedExtensions->setGeometry(QRect(410, 310, 256, 192));
        choosedExtensions->setSelectionMode(QAbstractItemView::MultiSelection);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 130, 481, 31));
        QFont font2;
        font2.setPointSize(13);
        label_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 260, 171, 31));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(440, 260, 171, 31));
        label_5->setFont(font3);
        putInToChoosedExtensions = new QPushButton(centralwidget);
        putInToChoosedExtensions->setObjectName(QStringLiteral("putInToChoosedExtensions"));
        putInToChoosedExtensions->setGeometry(QRect(330, 350, 31, 25));
        removeFromChoosedExtensions = new QPushButton(centralwidget);
        removeFromChoosedExtensions->setObjectName(QStringLiteral("removeFromChoosedExtensions"));
        removeFromChoosedExtensions->setGeometry(QRect(330, 390, 31, 25));
        dirName = new QLineEdit(centralwidget);
        dirName->setObjectName(QStringLiteral("dirName"));
        dirName->setEnabled(false);
        dirName->setGeometry(QRect(100, 180, 511, 25));
        dirName->setStyleSheet(QStringLiteral("color: #000000;"));
        dirName->setClearButtonEnabled(false);
        ChooseExtensions->setCentralWidget(centralwidget);

        retranslateUi(ChooseExtensions);

        QMetaObject::connectSlotsByName(ChooseExtensions);
    } // setupUi

    void retranslateUi(QMainWindow *ChooseExtensions)
    {
        ChooseExtensions->setWindowTitle(QApplication::translate("ChooseExtensions", "Set Rules", nullptr));
        label->setText(QApplication::translate("ChooseExtensions", "SMARTIFY FILE REMOVER", nullptr));
        label_2->setText(QApplication::translate("ChooseExtensions", "Step 2 of 3", nullptr));
        nextButton->setText(QApplication::translate("ChooseExtensions", "Next", nullptr));
        previousButton->setText(QApplication::translate("ChooseExtensions", "Previous", nullptr));
        label_3->setText(QApplication::translate("ChooseExtensions", "Choose the extensions you want to delete in the below folder", nullptr));
        label_4->setText(QApplication::translate("ChooseExtensions", "Available Extensions", nullptr));
        label_5->setText(QApplication::translate("ChooseExtensions", "Choosen Extensions", nullptr));
        putInToChoosedExtensions->setText(QApplication::translate("ChooseExtensions", ">>", nullptr));
        removeFromChoosedExtensions->setText(QApplication::translate("ChooseExtensions", "<<", nullptr));
        dirName->setText(QApplication::translate("ChooseExtensions", "/home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseExtensions: public Ui_ChooseExtensions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEEXTENSIONS_H
