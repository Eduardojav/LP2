#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "figure.h"

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

void MainWindow::draw_circle(QPainter * painter)
{
	int r = rand() % 100 + 1;
	painter->drawEllipse({rand()%pixmap->width(), rand()%pixmap->height()}, r, r);

}
void MainWindow::draw_square(QPainter * painter)
{
    int p = rand() % 100 + 1;
    painter->drawRect(rand()%pixmap->width(), rand()%pixmap->height(),p,p);
}
void MainWindow::draw_triangle(QPainter *painter){
    int p = rand()%pixmap->width();
    int e = rand()%pixmap->height();
    int b = rand()%pixmap->width();
    int c = rand()%pixmap->height();
    int f = rand()%pixmap->width();
    int g = rand()%pixmap->height();
    painter->drawLine(b, c, p,e );
    painter->drawLine(p, e, f,g);
    painter->drawLine(f, g, b, c);

};

void MainWindow::on_b_draw_circle_clicked()
{
	pixmap->fill();

	draw_circle(painter);

	ui->label_draw_area->setPixmap(*pixmap);
}
void MainWindow::on_b_draw_square_clicked()
{
    pixmap->fill();

    draw_square(painter);

    ui->label_draw_area->setPixmap(*pixmap);
}
void MainWindow::on_b_draw_triangle_clicked()
{
    pixmap->fill();

    draw_triangle(painter);

    ui->label_draw_area->setPixmap(*pixmap);
}
