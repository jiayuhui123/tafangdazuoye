#ifndef MAJORMAP_H
#define MAJORMAP_H

#include <QMainWindow>
#include "ta.h"
#include <QList>
class Majormap : public QMainWindow
{
    Q_OBJECT
public:
    explicit Majormap(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent*);
    void set_ta();
    void back_btn();
private:
    QList<Ta*>ta_list;

signals:
    void chooseBack();

};

#endif // MAJORMAP_H
