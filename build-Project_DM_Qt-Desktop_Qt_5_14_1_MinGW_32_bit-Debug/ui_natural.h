/********************************************************************************
** Form generated from reading UI file 'natural.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NATURAL_H
#define UI_NATURAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Natural
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Natural)
    {
        if (Natural->objectName().isEmpty())
            Natural->setObjectName(QString::fromUtf8("Natural"));
        Natural->resize(800, 600);
        menubar = new QMenuBar(Natural);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Natural->setMenuBar(menubar);
        centralwidget = new QWidget(Natural);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Natural->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Natural);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Natural->setStatusBar(statusbar);

        retranslateUi(Natural);

        QMetaObject::connectSlotsByName(Natural);
    } // setupUi

    void retranslateUi(QMainWindow *Natural)
    {
        Natural->setWindowTitle(QCoreApplication::translate("Natural", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Natural: public Ui_Natural {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NATURAL_H
