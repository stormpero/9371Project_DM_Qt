/********************************************************************************
** Form generated from reading UI file 'project_dm_qt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_DM_QT_H
#define UI_PROJECT_DM_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Project_DM_Qt
{
public:
    QAction *action;
    QWidget *centralwidget;
    QFrame *frame_Buttons;
    QHBoxLayout *horizontalLayout;
    QPushButton *Btn_natural;
    QPushButton *Btn_integer;
    QPushButton *Btn_rational;
    QPushButton *Btn_polynomials;
    QPushButton *Btn_matrix;
    QWidget *main;
    QGridLayout *gridLayout;
    QWidget *integer;
    QWidget *polynomials;
    QWidget *rational;
    QWidget *matrix;
    QWidget *natural;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *Project_DM_Qt)
    {
        if (Project_DM_Qt->objectName().isEmpty())
            Project_DM_Qt->setObjectName(QString::fromUtf8("Project_DM_Qt"));
        Project_DM_Qt->resize(1110, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Project_DM_Qt->sizePolicy().hasHeightForWidth());
        Project_DM_Qt->setSizePolicy(sizePolicy);
        Project_DM_Qt->setMinimumSize(QSize(1110, 800));
        Project_DM_Qt->setMaximumSize(QSize(1110, 800));
        Project_DM_Qt->setStyleSheet(QString::fromUtf8(""));
        action = new QAction(Project_DM_Qt);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(Project_DM_Qt);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame_Buttons = new QFrame(centralwidget);
        frame_Buttons->setObjectName(QString::fromUtf8("frame_Buttons"));
        frame_Buttons->setGeometry(QRect(0, 720, 1111, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_Buttons->sizePolicy().hasHeightForWidth());
        frame_Buttons->setSizePolicy(sizePolicy1);
        frame_Buttons->setFrameShape(QFrame::StyledPanel);
        frame_Buttons->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_Buttons);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Btn_natural = new QPushButton(frame_Buttons);
        Btn_natural->setObjectName(QString::fromUtf8("Btn_natural"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Btn_natural->sizePolicy().hasHeightForWidth());
        Btn_natural->setSizePolicy(sizePolicy2);
        Btn_natural->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #000000;\n"
"background-color: white;\n"
"border: 1px solid #828282;\n"
"border-radius: 3px;\n"
"font-size: 18px;\n"
"}\n"
"QPushButton:hover {\n"
"border: 1px solid #828282;\n"
"background-color: #d5d5d5;\n"
"}\n"
"QPushButton:hover:pressed { \n"
"background-color: gray;\n"
"color: white;\n"
"}\n"
"QPushButton:disabled { \n"
"background-color: gray;\n"
"color: white;\n"
"}"));

        horizontalLayout->addWidget(Btn_natural);

        Btn_integer = new QPushButton(frame_Buttons);
        Btn_integer->setObjectName(QString::fromUtf8("Btn_integer"));
        sizePolicy2.setHeightForWidth(Btn_integer->sizePolicy().hasHeightForWidth());
        Btn_integer->setSizePolicy(sizePolicy2);
        Btn_integer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #000000;\n"
"background-color: white;\n"
"border: 1px solid #828282;\n"
"border-radius: 3px;\n"
"font-size: 18px;\n"
"}\n"
"QPushButton:hover {\n"
"border: 1px solid #828282;\n"
"background-color: #d5d5d5;\n"
"}\n"
"QPushButton:hover:pressed { \n"
"background-color: gray;\n"
"color: white;\n"
"}\n"
"QPushButton:disabled { \n"
"background-color: gray;\n"
"color: white;\n"
"}"));

        horizontalLayout->addWidget(Btn_integer);

        Btn_rational = new QPushButton(frame_Buttons);
        Btn_rational->setObjectName(QString::fromUtf8("Btn_rational"));
        sizePolicy2.setHeightForWidth(Btn_rational->sizePolicy().hasHeightForWidth());
        Btn_rational->setSizePolicy(sizePolicy2);
        Btn_rational->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #000000;\n"
"background-color: white;\n"
"border: 1px solid #828282;\n"
"border-radius: 3px;\n"
"font-size: 18px;\n"
"}\n"
"QPushButton:hover {\n"
"border: 1px solid #828282;\n"
"background-color: #d5d5d5;\n"
"}\n"
"QPushButton:hover:pressed { \n"
"background-color: gray;\n"
"color: white;\n"
"}\n"
"QPushButton:disabled { \n"
"background-color: gray;\n"
"color: white;\n"
"}"));

        horizontalLayout->addWidget(Btn_rational);

        Btn_polynomials = new QPushButton(frame_Buttons);
        Btn_polynomials->setObjectName(QString::fromUtf8("Btn_polynomials"));
        sizePolicy2.setHeightForWidth(Btn_polynomials->sizePolicy().hasHeightForWidth());
        Btn_polynomials->setSizePolicy(sizePolicy2);
        Btn_polynomials->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #000000;\n"
"background-color: white;\n"
"border: 1px solid #828282;\n"
"border-radius: 3px;\n"
"font-size: 18px;\n"
"}\n"
"QPushButton:hover {\n"
"border: 1px solid #828282;\n"
"background-color: #d5d5d5;\n"
"}\n"
"QPushButton:hover:pressed { \n"
"background-color: gray;\n"
"color: white;\n"
"}\n"
"QPushButton:disabled { \n"
"background-color: gray;\n"
"color: white;\n"
"}"));

        horizontalLayout->addWidget(Btn_polynomials);

        Btn_matrix = new QPushButton(frame_Buttons);
        Btn_matrix->setObjectName(QString::fromUtf8("Btn_matrix"));
        sizePolicy2.setHeightForWidth(Btn_matrix->sizePolicy().hasHeightForWidth());
        Btn_matrix->setSizePolicy(sizePolicy2);
        Btn_matrix->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #000000;\n"
"background-color: white;\n"
"border: 1px solid #828282;\n"
"border-radius: 3px;\n"
"font-size: 18px;\n"
"}\n"
"QPushButton:hover {\n"
"border: 1px solid #828282;\n"
"background-color: #d5d5d5;\n"
"}\n"
"QPushButton:hover:pressed { \n"
"background-color: gray;\n"
"color: white;\n"
"}\n"
"QPushButton:disabled { \n"
"background-color: gray;\n"
"color: white;\n"
"}"));
        Btn_matrix->setCheckable(false);

        horizontalLayout->addWidget(Btn_matrix);

        main = new QWidget(centralwidget);
        main->setObjectName(QString::fromUtf8("main"));
        main->setGeometry(QRect(0, 0, 5550, 721));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(main->sizePolicy().hasHeightForWidth());
        main->setSizePolicy(sizePolicy3);
        main->setMinimumSize(QSize(5550, 721));
        main->setMaximumSize(QSize(5550, 721));
        gridLayout = new QGridLayout(main);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        integer = new QWidget(main);
        integer->setObjectName(QString::fromUtf8("integer"));

        gridLayout->addWidget(integer, 0, 1, 1, 1);

        polynomials = new QWidget(main);
        polynomials->setObjectName(QString::fromUtf8("polynomials"));

        gridLayout->addWidget(polynomials, 0, 3, 1, 1);

        rational = new QWidget(main);
        rational->setObjectName(QString::fromUtf8("rational"));

        gridLayout->addWidget(rational, 0, 2, 1, 1);

        matrix = new QWidget(main);
        matrix->setObjectName(QString::fromUtf8("matrix"));

        gridLayout->addWidget(matrix, 0, 4, 1, 1);

        natural = new QWidget(main);
        natural->setObjectName(QString::fromUtf8("natural"));

        gridLayout->addWidget(natural, 0, 0, 1, 1);

        Project_DM_Qt->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Project_DM_Qt);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1110, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Project_DM_Qt->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(Project_DM_Qt);

        QMetaObject::connectSlotsByName(Project_DM_Qt);
    } // setupUi

    void retranslateUi(QMainWindow *Project_DM_Qt)
    {
        Project_DM_Qt->setWindowTitle(QCoreApplication::translate("Project_DM_Qt", "Project_DM_Qt", nullptr));
        action->setText(QCoreApplication::translate("Project_DM_Qt", "\320\242\320\265\321\201\321\202", nullptr));
        Btn_natural->setText(QCoreApplication::translate("Project_DM_Qt", "\320\235\320\260\321\202\321\203\321\200\320\260\320\273\321\214\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260 N", nullptr));
        Btn_integer->setText(QCoreApplication::translate("Project_DM_Qt", "\320\246\320\265\320\273\321\213\320\265 \321\207\320\270\321\201\320\273\320\260 Z", nullptr));
        Btn_rational->setText(QCoreApplication::translate("Project_DM_Qt", "\320\240\320\260\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260 Q", nullptr));
        Btn_polynomials->setText(QCoreApplication::translate("Project_DM_Qt", "\320\234\320\275\320\276\320\263\320\276\321\207\320\273\320\265\320\275\321\213 P", nullptr));
        Btn_matrix->setText(QCoreApplication::translate("Project_DM_Qt", "\320\234\320\260\321\202\321\200\320\270\321\206\321\213 M", nullptr));
        menu->setTitle(QCoreApplication::translate("Project_DM_Qt", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Project_DM_Qt: public Ui_Project_DM_Qt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_DM_QT_H
