#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QPushButton>

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

void MainWindow::on_Display_clicked()
{
    QPixmap pic("C:/Users/tin053/Downloads/pic.png");
    ui->label->setPixmap(pic.scaled(211,131,Qt::KeepAspectRatio));
}



void MainWindow::on_Hide_clicked()
{
    ui->label->setPixmap(QPixmap());
    ui->label->setText("  Click the button");
}

