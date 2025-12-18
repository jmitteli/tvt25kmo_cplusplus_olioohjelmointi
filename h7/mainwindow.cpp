#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>



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

void MainWindow::on_btnCount_clicked()
{
    counter++;
    std::cout<<"Count clicked"<<std::endl;
    QString s = QString::number(counter);

    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu "+ s +" kertaa");

}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;

    std::cout<<"Reset clicked"<<std::endl;
    QString s = QString::number(counter);

    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu "+ s +" kertaa");

}

