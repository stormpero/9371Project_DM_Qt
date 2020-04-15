#include "project_dm_qt.h"
#include "ui_project_dm_qt.h"


Project_DM_Qt::Project_DM_Qt(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::Project_DM_Qt)
{
    ui->setupUi(this);

    connect(ui->Btn_natural,SIGNAL(clicked()),this,SLOT(btn_click()));
    connect(ui->Btn_integer,SIGNAL(clicked()),this,SLOT(btn_click()));
    connect(ui->Btn_rational,SIGNAL(clicked()),this,SLOT(btn_click()));
    connect(ui->Btn_polynomials,SIGNAL(clicked()),this,SLOT(btn_click()));
    connect(ui->Btn_matrix,SIGNAL(clicked()),this,SLOT(btn_click()));

}

Project_DM_Qt::~Project_DM_Qt()
{
    delete ui;
}
void Project_DM_Qt::framehide()
{
    ui->widget_natural->hide();
    ui->widget_integer->hide();
}
void Project_DM_Qt::btn_click()
{
    ui->Btn_matrix->setDisabled(false);
    ui->Btn_polynomials->setDisabled(false);
    ui->Btn_rational->setDisabled(false);
    ui->Btn_integer->setDisabled(false);
    ui->Btn_natural->setDisabled(false);
    QPushButton *button = (QPushButton *)sender();
    button->setDisabled(true);
    if (button == ui->Btn_natural)
    {
        framehide();
        ui->widget_natural->show();
    }
    else if (button == ui->Btn_integer)
    {
        framehide();
        ui->widget_integer->show();
    }
//    else if (button == ui->Btn_rational)
//    {
//        framehide();
//        ui->widget_rat->show();
//    }

//    else if (button == ui->Btn_polynomials)
//    {
//        framehide();
//        ui->widget_rat->show();
//    }
//    else if (button == ui->Btn_matrix)
//    {
//        framehide();
//        ui->widget_rat->show();
//    }

    //ui->frame_Brn->show();
}




