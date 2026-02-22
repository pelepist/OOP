#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Alkutila " << tila;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setEditNum(int num)
{
    QString currentnum;
    if (tila==0){
        qDebug() << "tila 0 : num1";
        currentnum = ui->Num1ed->text();
        currentnum+=QString::number(num);
        ui->Num1ed->setText(currentnum);
    }else if(tila==1){
        qDebug() << "tila 1 : num2";
        currentnum = ui->num2ed->text();
        currentnum+=QString::number(num);
        ui->num2ed->setText(currentnum);
    }
}

void MainWindow::on_plusButton_clicked()
{
    if(tila==2){
        QString n1 = ui->Num1ed->text();
        num1=n1.toInt();
        QString n2 = ui->num2ed->text();
        num2=n2.toInt();
        qDebug() << num1 << " + " << num2;
        result = num1 + num2;
        QString r = QString::number(result);
        ui->resultEd->setText(r);
        tila = 0;
        qDebug() << "tila " << tila;
    }

}

void MainWindow::on_minusButton_clicked()
{
    if(tila==2){
        QString n1 = ui->Num1ed->text();
        num1=n1.toInt();
        QString n2 = ui->num2ed->text();
        num2=n2.toInt();
        qDebug() << num1 << " - " << num2;
        result = num1 - num2;
        QString r = QString::number(result);
        ui->resultEd->setText(r);
        tila=0;
        qDebug() << "tila " << tila;
    }

}
void MainWindow::on_multiButton_clicked()
{
    if(tila==2){
        QString n1 = ui->Num1ed->text();
        num1=n1.toInt();
        QString n2 = ui->num2ed->text();
        num2=n2.toInt();
        qDebug() << num1 << " * " << num2;
        result = num1 * num2;
        QString r = QString::number(result);
        ui->resultEd->setText(r);
        tila = 0;
        qDebug() << "tila " << tila;
    }
}

void MainWindow::on_divButton_clicked()
{
    if(tila==2){
        QString n1 = ui->Num1ed->text();
        num1=n1.toInt();
        QString n2 = ui->num2ed->text();
        num2=n2.toInt();
        qDebug() << num1 << " / " << num2;
        result = num1 / num2;
        QString r = QString::number(result);
        ui->resultEd->setText(r);
        tila = 0;
        qDebug() << "tila " << tila;
    }
}
void MainWindow::on_enterButton_clicked()
{
    qDebug() << "Tila " << tila;
    if(tila==0){
        tila = 1;
    }else if(tila==1){
        tila=2;
    }
    qDebug() << "Tila " << tila;
}

void MainWindow::on_clearButton_clicked()
{
    ui->Num1ed->clear();
    ui->num2ed->clear();
    ui->resultEd->clear();
    tila=0;
    qDebug() <<"Clearing, returning to " << tila;
}

void MainWindow::on_N1Button_clicked()
{
    setEditNum(1);

}

void MainWindow::on_N2Button_clicked()
{
    setEditNum(2);
}


void MainWindow::on_N3Button_clicked()
{
    setEditNum(3);
}

void MainWindow::on_N4Button_clicked()
{
    setEditNum(4);
}


void MainWindow::on_N5Button_clicked()
{
    setEditNum(5);
}


void MainWindow::on_N6Button_clicked()
{
    setEditNum(6);
}


void MainWindow::on_N7Button_clicked()
{
    setEditNum(7);
}


void MainWindow::on_N8Button_clicked()
{
    setEditNum(8);
}


void MainWindow::on_N9Button_clicked()
{
    setEditNum(9);
}


void MainWindow::on_N0Button_clicked()
{
    setEditNum(0);
}

