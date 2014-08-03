#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <cmath>
#include <QMainWindow>
#include <cstdlib>
#include <iostream>
#include <QMessageBox>
#include <string>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_hakkinda_clicked();

    void on_btn_karekok_clicked();

    void on_btn_0_clicked();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_virgul_clicked();

    void on_btn_kup_clicked();

    void on_btn_temizle_clicked();

    void on_btn_kare_clicked();

    void on_btn_zit_clicked();

    void on_btn_toplama_clicked();

    void on_btn_cikarma_clicked();

    void on_btn_carpma_clicked();

    void on_btn_bolme_clicked();

    void on_btn_esit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
