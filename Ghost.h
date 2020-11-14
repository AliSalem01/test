#ifndef GHOSTS_H
#define GHOSTS_H

#include<QGraphicsPixmapItem>


class Ghost : public QGraphicsPixmapItem
{
private:
    QString ghostname;
    int row;
    int column;
    int move;
    int arr[12][12];
public:
    bool ghostmoving;
    Ghost (QString name, QString filename,int row, int column,int a[12][12]);
    void setrow(int);
    void setcolumn(int);
    int getrow();
    int getcolumn();
    QString getghostname();
    int movement();
    void moveghost(int arr[12][12]);
    void random(int newmove, int arr[12][12]);

};












#endif

