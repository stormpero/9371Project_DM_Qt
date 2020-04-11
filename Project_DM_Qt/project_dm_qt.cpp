#include "project_dm_qt.h"
#include "ui_project_dm_qt.h"


Project_DM_Qt::Project_DM_Qt(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::Project_DM_Qt)
{
    ui->setupUi(this);









}

Project_DM_Qt::~Project_DM_Qt()
{
    delete ui;
}



void Project_DM_Qt::on_Btn_natural_clicked()
{
    Project_DM_Qt::ui->Btn_natural->setEnabled(false);
}

void Project_DM_Qt::on_Btn_integer_clicked()
{

}
