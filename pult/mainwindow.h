#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

private slots:
    void on_can1_clicked();

    void on_can2_clicked();

    void on_can3_clicked();

    void on_can4_clicked();

    void on_can5_clicked();

    void on_can6_clicked();

    void on_can7_clicked();

    void on_can8_clicked();

    void on_can9_clicked();

    void on_switch1_clicked();

    void on_switch2_clicked();

    void on_vol1_clicked();

    void on_vol2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
