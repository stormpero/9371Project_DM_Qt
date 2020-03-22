#ifndef PROJECT_DM_QT_H
#define PROJECT_DM_QT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Project_DM_Qt; }
QT_END_NAMESPACE

class Project_DM_Qt : public QMainWindow
{
    Q_OBJECT

public:
    Project_DM_Qt(QWidget *parent = nullptr);
    ~Project_DM_Qt();

private slots:
    void on_pushButton_natural_clicked();

    void on_pushButton_integer_clicked();

    void on_pushButton_rational_clicked();

    void on_pushButton_polynomials_clicked();

    void on_pushButton_matrix_clicked();

private:
    Ui::Project_DM_Qt *ui;
};
#endif // PROJECT_DM_QT_H
