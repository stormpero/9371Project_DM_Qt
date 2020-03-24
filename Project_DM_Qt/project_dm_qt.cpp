#include "project_dm_qt.h"
#include "ui_project_dm_qt.h"
#include "natural.h"


Project_DM_Qt::Project_DM_Qt(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Project_DM_Qt)
{
    ui->setupUi(this);
}

Project_DM_Qt::~Project_DM_Qt()
{
    delete ui;
}


void Project_DM_Qt::on_pushButton_natural_clicked()
{

}

void Project_DM_Qt::on_pushButton_integer_clicked()
{

}

void Project_DM_Qt::on_pushButton_rational_clicked()
{

}

void Project_DM_Qt::on_pushButton_polynomials_clicked()
{

}

void Project_DM_Qt::on_pushButton_matrix_clicked()
{

}
