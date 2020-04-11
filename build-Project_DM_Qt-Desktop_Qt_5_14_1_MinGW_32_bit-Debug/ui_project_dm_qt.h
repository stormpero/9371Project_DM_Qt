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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Project_DM_Qt
{
public:
    QAction *action;
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox;
    QTextEdit *textEdit;
    QFrame *frame_Brn;
    QPushButton *Btn_natural;
    QPushButton *Btn_integer;
    QPushButton *Btn_rational;
    QPushButton *Btn_polynomials;
    QPushButton *Btn_matrix;
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
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(240, 300, 81, 51));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 240, 81, 51));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(440, 240, 81, 51));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(440, 300, 81, 51));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(400, 290, 31, 22));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(230, 420, 104, 71));
        frame_Brn = new QFrame(centralwidget);
        frame_Brn->setObjectName(QString::fromUtf8("frame_Brn"));
        frame_Brn->setGeometry(QRect(0, 720, 1101, 61));
        frame_Brn->setFrameShape(QFrame::StyledPanel);
        frame_Brn->setFrameShadow(QFrame::Raised);
        Btn_natural = new QPushButton(frame_Brn);
        Btn_natural->setObjectName(QString::fromUtf8("Btn_natural"));
        Btn_natural->setGeometry(QRect(10, 10, 211, 41));
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
        Btn_integer = new QPushButton(frame_Brn);
        Btn_integer->setObjectName(QString::fromUtf8("Btn_integer"));
        Btn_integer->setGeometry(QRect(230, 10, 211, 41));
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
        Btn_rational = new QPushButton(frame_Brn);
        Btn_rational->setObjectName(QString::fromUtf8("Btn_rational"));
        Btn_rational->setGeometry(QRect(450, 10, 211, 41));
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
        Btn_polynomials = new QPushButton(frame_Brn);
        Btn_polynomials->setObjectName(QString::fromUtf8("Btn_polynomials"));
        Btn_polynomials->setGeometry(QRect(670, 10, 211, 41));
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
        Btn_matrix = new QPushButton(frame_Brn);
        Btn_matrix->setObjectName(QString::fromUtf8("Btn_matrix"));
        Btn_matrix->setGeometry(QRect(890, 10, 211, 41));
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
        comboBox->setItemText(0, QCoreApplication::translate("Project_DM_Qt", "+", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Project_DM_Qt", "-", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Project_DM_Qt", "*", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Project_DM_Qt", "/", nullptr));

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
