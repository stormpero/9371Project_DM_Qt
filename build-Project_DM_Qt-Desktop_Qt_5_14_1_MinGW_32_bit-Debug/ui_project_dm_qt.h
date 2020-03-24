/********************************************************************************
** Form generated from reading UI file 'project_dm_qt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_DM_QT_H
#define UI_PROJECT_DM_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Project_DM_Qt
{
public:
    QAction *action;
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
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Project_DM_Qt)
    {
        if (Project_DM_Qt->objectName().isEmpty())
            Project_DM_Qt->setObjectName(QString::fromUtf8("Project_DM_Qt"));
        Project_DM_Qt->resize(1100, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Project_DM_Qt->sizePolicy().hasHeightForWidth());
        Project_DM_Qt->setSizePolicy(sizePolicy);
        Project_DM_Qt->setMinimumSize(QSize(1100, 800));
        Project_DM_Qt->setMaximumSize(QSize(1100, 800));
        action = new QAction(Project_DM_Qt);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(Project_DM_Qt);
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

        Project_DM_Qt->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Project_DM_Qt);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Project_DM_Qt->setMenuBar(menubar);
        statusbar = new QStatusBar(Project_DM_Qt);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Project_DM_Qt->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(Project_DM_Qt);

        QMetaObject::connectSlotsByName(Project_DM_Qt);
    } // setupUi

    void retranslateUi(QMainWindow *Project_DM_Qt)
    {
        Project_DM_Qt->setWindowTitle(QCoreApplication::translate("Project_DM_Qt", "Project_DM_Qt", nullptr));
        action->setText(QCoreApplication::translate("Project_DM_Qt", "\320\242\320\265\321\201\321\202", nullptr));
        pushButton_natural->setText(QCoreApplication::translate("Project_DM_Qt", "\320\235\320\260\321\202\321\203\321\200\320\260\320\273\321\214\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260 N", nullptr));
        pushButton_integer->setText(QCoreApplication::translate("Project_DM_Qt", "\320\246\320\265\320\273\321\213\320\265 \321\207\320\270\321\201\320\273\320\260 Z", nullptr));
        pushButton_rational->setText(QCoreApplication::translate("Project_DM_Qt", "\320\240\320\260\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260 Q", nullptr));
        pushButton_polynomials->setText(QCoreApplication::translate("Project_DM_Qt", "\320\234\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\321\213 P", nullptr));
        pushButton_matrix->setText(QCoreApplication::translate("Project_DM_Qt", "\320\234\320\260\321\202\321\200\320\270\321\206\321\213 M", nullptr));
        menu->setTitle(QCoreApplication::translate("Project_DM_Qt", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Project_DM_Qt: public Ui_Project_DM_Qt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_DM_QT_H
