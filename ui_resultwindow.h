/********************************************************************************
** Form generated from reading UI file 'resultwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTWINDOW_H
#define UI_RESULTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QPushButton *nextButton;

    void setupUi(QMainWindow *resultWindow)
    {
        if (resultWindow->objectName().isEmpty())
            resultWindow->setObjectName(QStringLiteral("resultWindow"));
        resultWindow->resize(653, 172);
        centralwidget = new QWidget(resultWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 30, 481, 31));
        QFont font;
        font.setPointSize(13);
        label_3->setFont(font);
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(260, 100, 101, 41));
        nextButton->setStyleSheet(QLatin1String("background-color: #000000;\n"
"\n"
"color: #ffffff;"));
        resultWindow->setCentralWidget(centralwidget);

        retranslateUi(resultWindow);

        QMetaObject::connectSlotsByName(resultWindow);
    } // setupUi

    void retranslateUi(QMainWindow *resultWindow)
    {
        resultWindow->setWindowTitle(QApplication::translate("resultWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("resultWindow", "Smartify has finished running successfully", nullptr));
        nextButton->setText(QApplication::translate("resultWindow", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultWindow: public Ui_resultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTWINDOW_H
