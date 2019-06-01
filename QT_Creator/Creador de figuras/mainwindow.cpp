#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "figure.h"
#include "triangle.h"
#include "circle.h"
#include "square.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pixmap = new QPixmap(600, 200);
    pixmap->fill();

    pen = new QPen(QColor("red"));
    pen->setWidth(5);

    ui->label_draw_area->setPixmap(*pixmap);

    painter = new QPainter(pixmap);
    painter->setPen(*pen);
}

MainWindow::~MainWindow()
{

        delete ui;
        delete pixmap;
        delete pen;
        delete painter;
    for(unsigned long long i=0;i<draws.size();i++){
           delete [] draws[i];
       }

}

void MainWindow::on_b_draw_circle_clicked()
{
    int side=rand() % 100 + 1;
    int x=rand()%pixmap->width();
    int y=rand()%pixmap->height();
    draws.push_back(new circle(x,y,side));

}
void MainWindow::on_b_draw_square_clicked()
{
    int side=rand() % 100 + 1;
    int x=rand()%pixmap->width();
    int y=rand()%pixmap->height();
    draws.push_back(new square(x, y,side));
}
void MainWindow::on_b_draw_triangle_clicked(){


    int x1=rand()%pixmap->width();int y1=rand()%pixmap->height();
    int x2=rand()%pixmap->width();int y2=rand()%pixmap->height();
    int x3=rand()%pixmap->width();int y3=rand()%pixmap->height();
    draws.push_back(new triangle(x1,y1,x2,y2,x3,y3));

};


void MainWindow::on_a_color_2_clicked()
{

        pixmap->fill();
            for(int i=0;i<draws.size();i++){
                draws[i]->draw(painter);
            }
            ui->label_draw_area->setPixmap(*pixmap);

}
