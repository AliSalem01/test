#include "Ghost.h"
#include <QRandomGenerator>

#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
Ghost::Ghost(QString name, QString filename, int initialrow,int initialcolumn,int a[12][12])
{
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            arr[i][j] = a[i][j];


    ghostname = name;
row = initialrow;
column = initialcolumn;
setPos(200+50*row , 200+50*column );
;
QPixmap m(filename);
m = m.scaledToWidth(50);
m = m.scaledToHeight(50);
setPixmap(m);

}

void Ghost::setrow(int x)
{
row = x;
}
void Ghost::setcolumn(int y)
{
    column = y;
}
int Ghost::getrow()
{
    return row;
}
int Ghost::getcolumn()
{
    return column;
}
QString Ghost::getghostname()
{
    return ghostname;
}


 void Ghost::moveghost(int arr[12][12])
 {
     if ((rand()%4)+1 == 1 && arr[row - 1][column] != -1)
     {
         row--;
     }
     else if ((rand()%4)+1 == 2 && arr[row + 1][column] != -1)
     {
         row++;
     }
     else if ((rand()%4)+1 == 3 && arr[row][column + 1] != -1)
     {
         column++;
     }
     else if ((rand()%4)+1 == 4 && arr[row][column - 1] != -1)
     {
         column--;
     }
     setPos(50 + 50 *column, 50 + 50 * row);
 }
