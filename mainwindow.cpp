#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMoveEvent>
#include <QPainter>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _pixmapBg.load(QStringLiteral("/home/tim/Downloads/background.jpg"));
}

void MainWindow::moveEvent(QMoveEvent *e) {
    repaint();

    QMainWindow::moveEvent(e);
}

void MainWindow::paintEvent(QPaintEvent *e) {
    QMainWindow::paintEvent(e);

    QPainter painter(this);

    auto window = pos();

    painter.drawPixmap(0, 0, _pixmapBg, window.x(), window.y(), 0, 0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
