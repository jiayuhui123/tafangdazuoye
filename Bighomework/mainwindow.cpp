#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QPainter>
#include <QPixmap>
#include <QPaintEvent>
#include <QPushButton>
#include <QDebug>
#include "button.h"
#include "majormap.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setFixedSize(1000,600);
    ui->setupUi(this);
    Button*btn = new Button(":/startgame.png");
    btn->setParent(this);
    btn->move(300,205);
    Majormap*scene =  new Majormap;
    connect(btn,&QPushButton::clicked,this,[=](){
        this->close();
        scene->show();
    });
}

void MainWindow:: paintEvent(QPaintEvent*){
    QPainter painter(this);
    QPixmap pixmap(":/startBG.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}
MainWindow::~MainWindow()
{
    delete ui;
}

