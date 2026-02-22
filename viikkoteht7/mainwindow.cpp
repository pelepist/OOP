#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_countButton_clicked()
{
    //luetaan luku
    QString num = ui->countEdit->text();
    qDebug() << "Current num as string" << num;
    //muutetaan intiksi
    int numb = num.toInt();
    qDebug() << "Current num as int" << numb;
    //+1
    numb = numb+1;
    qDebug() << "New num as int" << numb;
    //kirj edit
    QString txt = QString::number(numb);
    ui->countEdit->setText(txt);
}



void MainWindow::on_resetButton_clicked()
{
    QString txt = "0";
    ui->countEdit->setText(txt);
}

