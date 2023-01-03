#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void moveEvent(QMoveEvent *) override;
    void paintEvent(QPaintEvent*) override;

private:
    Ui::MainWindow *ui;

    QPixmap _pixmapBg;
};
