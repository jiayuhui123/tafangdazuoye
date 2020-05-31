#ifndef TA_H
#define TA_H

#include <QObject>
#include <QPoint>
#include <QPixmap>
class Ta : public QObject
{
    Q_OBJECT
public:
    Ta(QPoint pos,QString pixFileName );
    void draw(QPainter*painter);
private:
    QPoint _pos;
    QPixmap pixmap;


signals:

};

#endif // TA_H
