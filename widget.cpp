#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::changeMoney(int n){
    int k = money;
    money += n;
    if(money<0){
        QMessageBox msg;
        msg.information(nullptr, "Error", "Not Enough Money");
        money = k;
    }
    ui->lcdNumber->display(money);
}
void Widget::on_pb10_clicked()
{
    changeMoney(10);

}

void Widget::on_pb50_clicked()
{
    changeMoney(50);
}

void Widget::on_pb100_clicked()
{
    changeMoney(100);

}

void Widget::on_pb500_clicked()
{
    changeMoney(500);
}

void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
}

void Widget::on_pbTea_clicked()
{
    changeMoney(-150);
}

void Widget::on_pbCoke_clicked()
{
    changeMoney(-200);
}

void Widget::on_pbRetrurn_clicked()
{
    int q500 = money/500;
    int  q100 = (money - (500*q500)) / 100;
    int q50 = (money - (500*q500) - (100*q100)) / 50;
    int q10 = (money - (500*q500) - (100*q100) - (50 * q50)) / 10;
    QMessageBox msg;
    msg.information(nullptr, "Return", QString("500 : %1\n 100 : %2\n 50 : %3\n 10 : %4").arg(q500).arg(q100).arg(q50).arg(q10));
}
