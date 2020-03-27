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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Natural
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_natural;
    QPushButton *pushButton_integer;
    QPushButton *pushButton_rational;
    QPushButton *pushButton_polynomials;
    QPushButton *pushButton_matrix;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Natural)
    {
        if (Natural->objectName().isEmpty())
            Natural->setObjectName(QString::fromUtf8("Natural"));
        Natural->resize(1100, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Natural->sizePolicy().hasHeightForWidth());
        Natural->setSizePolicy(sizePolicy);
        Natural->setMinimumSize(QSize(1100, 800));
        Natural->setMaximumSize(QSize(1100, 800));
        centralwidget = new QWidget(Natural);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 700, 1101, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1081, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_natural = new QPushButton(layoutWidget);
        pushButton_natural->setObjectName(QString::fromUtf8("pushButton_natural"));

        horizontalLayout->addWidget(pushButton_natural);

        pushButton_integer = new QPushButton(layoutWidget);
        pushButton_integer->setObjectName(QString::fromUtf8("pushButton_integer"));

        horizontalLayout->addWidget(pushButton_integer);

        pushButton_rational = new QPushButton(layoutWidget);
        pushButton_rational->setObjectName(QString::fromUtf8("pushButton_rational"));

        horizontalLayout->addWidget(pushButton_rational);

        pushButton_polynomials = new QPushButton(layoutWidget);
        pushButton_polynomials->setObjectName(QString::fromUtf8("pushButton_polynomials"));

        horizontalLayout->addWidget(pushButton_polynomials);

        pushButton_matrix = new QPushButton(layoutWidget);
        pushButton_matrix->setObjectName(QString::fromUtf8("pushButton_matrix"));

        horizontalLayout->addWidget(pushButton_matrix);

        Natural->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Natural);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 21));
        Natural->setMenuBar(menubar);
        statusbar = new QStatusBar(Natural);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Natural->setStatusBar(statusbar);

        retranslateUi(Natural);

        QMetaObject::connectSlotsByName(Natural);
    } // setupUi

    void retranslateUi(QMainWindow *Natural)
    {
        Natural->setWindowTitle(QCoreApplication::translate("Natural", "MainWindow", nullptr));
        pushButton_natural->setText(QCoreApplication::translate("Natural", "\320\235\320\260\321\202\321\203\321\200\320\260\320\273\321\214\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260 N", nullptr));
        pushButton_integer->setText(QCoreApplication::translate("Natural", "\320\246\320\265\320\273\321\213\320\265 \321\207\320\270\321\201\320\273\320\260 Z", nullptr));
        pushButton_rational->setText(QCoreApplication::translate("Natural", "\320\240\320\260\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260 Q", nullptr));
        pushButton_polynomials->setText(QCoreApplication::translate("Natural", "\320\234\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\321\213 P", nullptr));
        pushButton_matrix->setText(QCoreApplication::translate("Natural", "\320\234\320\260\321\202\321\200\320\270\321\206\321\213 M", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Natural: public Ui_Natural {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NATURAL_H
