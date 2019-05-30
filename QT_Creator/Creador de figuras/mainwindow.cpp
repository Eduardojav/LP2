#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "figure.h"
vector<figure> draws;
MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	pixmap = new QPixmap(600, 400);
	pixmap->fill();

	pen = new QPen(QColor("black"));

	ui->label_draw_area->setPixmap(*pixmap);

	painter = new QPainter(pixmap);
	painter->setPen(*pen);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_b_draw_clicked()
{
    pixmap->fill();
    for(unsigned long long i=0; i<draws.size();i++){
        draws[i]->draw(painter);
    }
    ui->label_draw_area->setPixmap(*pixmap);
}

void MainWindow::Add_circle(QPainter * painter)
{
	draws.push_back(new circle());

}
void MainWindow::Add_square(QPainter * painter)
{
	draws.push_back(new square());
}
void MainWindow::Add_triangle(QPainter *painter){
    

    draws.push_back(new triangle());

};

void MainWindow::on_b_draw_circle_clicked()
{
	pixmap->fill();

	Add_circle(painter);

	ui->label_draw_area->setPixmap(*pixmap);
}
void MainWindow::on_b_draw_square_clicked()
{
    pixmap->fill();

    Add_square(painter);

    ui->label_draw_area->setPixmap(*pixmap);
}
void MainWindow::on_b_draw_triangle_clicked()
{
    pixmap->fill();

    Add_triangle(painter);

    ui->label_draw_area->setPixmap(*pixmap);
}
