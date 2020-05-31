#include "majormap.h"
#include <QPainter>
#include <QPixmap>
#include <QPaintEvent>
#include "button.h"
Majormap::Majormap(QWidget *parent)
    : QMainWindow(parent)

{
    this->setFixedSize(1000,600);
    Button*setTa=new Button(":/ta.png");
    setTa->setParent(this);
    setTa->move(625,240);
    connect(setTa,&Button::clicked,this,&Majormap::set_ta);
}
void Majormap:: paintEvent(QPaintEvent*){
    QPainter painter(this);
    QPixmap pixmap(":/map.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}

void Majormap::set_ta(){
    Ta*a_new_ta=new Ta(QPoint(200,100),"ta.png");
    ta_list.push_back(a_new_ta);
    update();
}
