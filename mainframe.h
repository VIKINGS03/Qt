#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void savea();   // 保存a值、清空缓存

private slots:
    void on_btn_0_clicked();

    void on_btn_dot_clicked();

    void on_btn_equal_clicked();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_plus_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_minus_clicked();

    void on_btn_multiply_clicked();

    void on_btn_divide_clicked();

    void on_btn_percent_clicked();

    void on_btn_opposite_clicked();

    void on_btn_clear_clicked();

private:
    Ui::MainWindow *ui;
    double opera = 0.0; // 操作数a
    double operb = 0.0; // 操作数b
    QString opertmp = "";   // 显示的字符串
    int operation = 0;  // +-*/ 1234,判断是加、减、乘、除的哪一个
    bool isaready = false;  // 操作数a是否完成输入
};
#endif // MAINWINDOW_H
