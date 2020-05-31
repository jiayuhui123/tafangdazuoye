#include "ta.h"
#include <QPoint>
#include <QPixmap>
#include <QPainter>
Ta::Ta(QPoint pos,QString pixFileName) : QObject(0),pixmap(pixFileName)
{
 _pos=pos;

}
void Ta::draw(QPainter*painter){
    painter->drawPixmap(_pos,pixmap);

}
