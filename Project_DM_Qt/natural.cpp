#include "natural.h"
#include "ui_natural.h"

Natural::Natural(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Natural)
{
    ui->setupUi(this);
}

Natural::~Natural()
{
    delete ui;
}

void Natural::pushButton_natural()
{
    this->close();
    emit firstWindow();
}
