#include "mainwindow.h"
#include "./ui_mainwindow.h"

int result;
QString expr="";
bool flag = false;

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
    QChar ops = '+';
    QString temp = "";
    int num=1;
    int num1=0;
    for(int i=0; i < expr.length(); i++){
        QChar t = expr.at(i);
        if(t.isDigit()){
            temp+= expr.at(i);
        }else if(t == '+' || t == '-' || t == '*' || t == '/'){
            ops = expr.at(i);
            num1 = temp.toInt();
            num = expr.mid(i+1,expr.length()).toInt();
            temp = "";
        }else{
            ops = '#';
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
        case '#':
            result = 0;
            break;
        default:
            result = num + num1;
    }
    ui->editInput->setText(QString::number(result));
    flag = true;
}


void MainWindow::on_one_clicked()
{
    if(flag){
        expr = "";
        flag = false;
    }
    expr += "1";
    ui->editInput->setText(expr);
}


void MainWindow::on_two_clicked()
{
    if(flag){
        expr = "";
        flag = false;
    }
    expr += "2";
    ui->editInput->setText(expr);
}


void MainWindow::on_three_clicked()
{
    if(flag){
        expr = "";
        flag = false;
    }
    expr += "3";
    ui->editInput->setText(expr);
}


void MainWindow::on_four_clicked()
{
    if(flag){
        expr = "";
        flag = false;
    }
    expr += "4";
    ui->editInput->setText(expr);
}


void MainWindow::on_five_clicked()
{
    if(flag){
        expr = "";
        flag = false;
    }
    expr += "5";
    ui->editInput->setText(expr);
}


void MainWindow::on_six_clicked()
{
    if(flag){
        expr = "";
        flag = false;
    }
    expr += "6";
    ui->editInput->setText(expr);
}


void MainWindow::on_seven_clicked()
{
    if(flag){
        expr = "";
        flag = false;
    }
    expr += "7";
    ui->editInput->setText(expr);
}


void MainWindow::on_eight_clicked()
{
    if(flag){
        expr = "";
        flag = false;
    }
    expr += "8";
    ui->editInput->setText(expr);
}


void MainWindow::on_nine_clicked()
{
    if(flag){
        expr = "";
        flag = false;
    }
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

