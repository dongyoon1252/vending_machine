#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    int money {0};
    //azile operator '='
    void changeMoney(int n);
    void availablility(int n);
    void returnMoney(int n);
    int coin10;
    int coin50;
    int coin100;
    int coin500;

private slots:
    void on_pb10_clicked();

    void on_pb50_clicked();

    void on_pb100_clicked();

    void on_pb500_clicked();

    void on_pbCoffee_clicked();

    void on_pbTea_clicked();

    void on_pbCoke_clicked();

    void on_pbRetrurn_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
