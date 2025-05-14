#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<iostream>

int result;
QString expr="";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_equal_clicked()
{
    int num=0;
    int num1=0;
    QChar ops = '+';
    for(int i=0; i< expr.length(); i++){
        if(expr.at(i).isDigit()){
            num += expr.at(i).digitValue() * pow(10,i);
        }else{
            ops = expr.at(i);
            num1 = num;
            num = 0;
        }
    }
    switch(ops.unicode()){
        case '+':
            result = num + num1;
            break;
        case '-':
            result = num1 - num;
            break;
        case '/':
            result = num1 / num;
            break;
        case '*':
            result = num1 * num;
            break;
        default:
            result = num + num1;
    }

        ui->editInput->setText(QString::number(result));
}


void MainWindow::on_one_clicked()
{
    expr += "1";
    ui->editInput->setText(expr);
}


void MainWindow::on_two_clicked()
{
    expr += "2";
    ui->editInput->setText(expr);
}


void MainWindow::on_three_clicked()
{
    expr += "3";
    ui->editInput->setText(expr);
}


void MainWindow::on_four_clicked()
{
    expr += "4";
    ui->editInput->setText(expr);
}


void MainWindow::on_five_clicked()
{
    expr += "5";
    ui->editInput->setText(expr);
}


void MainWindow::on_six_clicked()
{
    expr += "6";
    ui->editInput->setText(expr);
}


void MainWindow::on_seven_clicked()
{
    expr += "7";
    ui->editInput->setText(expr);
}


void MainWindow::on_eight_clicked()
{
    expr += "8";
    ui->editInput->setText(expr);
}


void MainWindow::on_nine_clicked()
{
    expr += "9";
    ui->editInput->setText(expr);
}


void MainWindow::on_add_clicked()
{
    expr += "+";
    ui->editInput->setText(expr);
}


void MainWindow::on_minus_clicked()
{
    expr += "-";
    ui->editInput->setText(expr);
}


void MainWindow::on_divide_clicked()
{
    expr += "/";
    ui->editInput->setText(expr);
}


void MainWindow::on_multiply_clicked()
{
    expr += "*";
    ui->editInput->setText(expr);
}


void MainWindow::on_zero_clicked()
{
    expr += "0";
    ui->editInput->setText(expr);
}


void MainWindow::on_Clear_clicked()
{
    expr = "";
    ui->editInput->setText(expr);
}

