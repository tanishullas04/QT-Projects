#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->frame->setAutoFillBackground("QFrame { border: 2px solid blue; }");
    QPixmap pic("C:/Users/tin053/Downloads/pic.png");
    ui->logo->setPixmap(pic.scaled(161,151,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Login_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    if(username=="Tanish" && password=="12345")
    {
        ui->username_status->setText("");
        ui->password_status->setText("");
        QMessageBox::information(this,"Login","Username and password is correct");
    }
    else
    {
        if(username != "Tanish")
        {
            ui->username_status->setText("Invalid Username");
            ui->username_status->setStyleSheet("color: red;");
        }
        if(password != "12345")
        {
            ui->password_status->setText("Invalid Password");
            ui->password_status->setStyleSheet("color: red;");
        }
    }
}




