#ifndef NATURAL_H
#define NATURAL_H

#include <QMainWindow>

namespace Ui {
class Natural;
}

class Natural : public QMainWindow
{
    Q_OBJECT

public:
    explicit Natural(QWidget *parent = nullptr);
    ~Natural();

private:
    Ui::Natural *ui;
};

#endif // NATURAL_H
