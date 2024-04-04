#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pult.h"

pult p;

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


void MainWindow::on_can1_clicked()
{
  p.digit(1);
  ui->screen1->setText(p.india1());
}

void MainWindow::on_can2_clicked()
{
    p.digit(2);
    ui->screen1->setText(p.india1());
}

void MainWindow::on_can3_clicked()
{
    p.digit(3);
    ui->screen1->setText(p.india1());
}

void MainWindow::on_can4_clicked()
{
    p.digit(4);
    ui->screen1->setText(p.india1());
}

void MainWindow::on_can5_clicked()
{
    p.digit(5);
    ui->screen1->setText(p.india1());
}

void MainWindow::on_can6_clicked()
{
    p.digit(6);
    ui->screen1->setText(p.india1());
}

void MainWindow::on_can7_clicked()
{
    p.digit(7);
    ui->screen1->setText(p.india1());
}

void MainWindow::on_can8_clicked()
{
    p.digit(8);
    ui->screen1->setText(p.india1());
}

void MainWindow::on_can9_clicked()
{
    p.digit(9);
    ui->screen1->setText(p.india1());
}


void MainWindow::on_switch1_clicked()
{
    p.canaldown();
    ui->screen1->setText(p.india1());
}

void MainWindow::on_switch2_clicked()
{
    p.canalup();
    ui->screen1->setText(p.india1());
}



void MainWindow::on_vol1_clicked()
{
    p.volumeup();
    ui->screen1->setText(p.india1());
}


void MainWindow::on_vol2_clicked()
{
    p.volumedown();
    ui->screen1->setText(p.india1());
}
