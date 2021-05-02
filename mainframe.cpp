#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->opertmp.clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::savea()
{
    this->opera = this->opertmp.toDouble();   // 保存a值
    this->isaready = true;
    this->opertmp.clear();    // 清空缓存
}

void MainWindow::on_btn_0_clicked()
{
    this->opertmp += QString("0");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_1_clicked()
{
    this->opertmp += QString("1");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_2_clicked()
{
    this->opertmp += QString("2");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_3_clicked()
{
    this->opertmp += QString("3");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_4_clicked()
{
    this->opertmp += QString("4");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_5_clicked()
{
    this->opertmp += QString("5");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_6_clicked()
{
    this->opertmp += QString("6");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_7_clicked()
{
    this->opertmp += QString("7");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_8_clicked()
{
    this->opertmp += QString("8");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_9_clicked()
{
    this->opertmp += QString("9");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_dot_clicked()
{
    this->opertmp += QString(".");
    this->ui->lan_num->setText(this->opertmp);
}

void MainWindow::on_btn_equal_clicked()
{
    if(this->isaready && !this->opertmp.isEmpty())      // a ok且b非空
    {
        this->operb = this->opertmp.toDouble();    //  存下b的值
//        std::cout<<"b: "<<this->operb<<std::endl;
        this->opertmp.clear();
        switch (this->operation)
        {
            case 1: this->opera += this->operb;break;
            case 2: this->opera -= this->operb;break;
            default: break;
        }
        this->ui->lan_num->setNum(this->opera);

    }
}

void MainWindow::on_btn_plus_clicked()
{
    this->operation = 1;
    if(this->isaready)
    {
        this->on_btn_equal_clicked();
    }
    else    //  存下a的值
    {
        this->savea();
    }
}

void MainWindow::on_btn_minus_clicked()
{
    this->operation = 2;
    if(this->isaready)
    {
        this->on_btn_equal_clicked();
    }
    else
    {
        this->savea();
    }

}

void MainWindow::on_btn_multiply_clicked()
{

}

void MainWindow::on_btn_divide_clicked()
{

}

void MainWindow::on_btn_percent_clicked()
{

}

void MainWindow::on_btn_opposite_clicked()
{

}

void MainWindow::on_btn_clear_clicked()
{
    this->opertmp.clear();
    this->ui->lan_num->setText(this->opertmp);
    this->opera = 0;
    this->operb = 0;
    this->isaready = false;
    this->operation = 0;
}
