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

signals:
    void firstWindow();

private slots:

    void pushButton_natural();

private:
    Ui::Natural *ui;
};

#endif // NATURAL_H
