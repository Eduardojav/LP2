#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "figure.h"
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <vector>
#include "triangle.h"
#include "circle.h"
#include "square.h"
#include <vector>
namespace Ui {
class MainWindow;
}

class MainWindow: public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget * parent = nullptr);
    ~MainWindow();

private slots:
    void on_b_draw_circle_clicked();
    void on_b_draw_square_clicked();
    void on_b_draw_triangle_clicked();


    void on_a_color_2_clicked();

private:
    Ui::MainWindow *ui;

    protected:
    QPainter *painter;
    QPixmap *pixmap;
    QPen *pen;
    QPixmap *as;
    std::vector <figure*> draws;
};

#endif  //MAINWINDOW_H
