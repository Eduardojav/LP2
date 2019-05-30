#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "figure.h"
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <vector>
std::vector <figure*>draws;
namespace Ui {
class MainWindow;
}

class MainWindow: public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget * parent = nullptr);
    ~MainWindow();

private: slots
    void on_b_draw_clicked();
    void on_b_draw_circle_clicked();
    void on_b_draw_square_clicked();
    void on_b_draw_triangle_clicked();


private:
    void Add_circle(QPainter *painter);
    void Add_square(QPainter *painter);
    void Add_triangle(QPainter *painter);

    Ui::MainWindow * ui;
    QPainter *painter;
    QPixmap *pixmap;
    QPen *pen;
};

#endif  MAINWINDOW_H

