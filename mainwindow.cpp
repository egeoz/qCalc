#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double topd, cikd, card, bold, to_s1, ci_s1, ca_s1, bo_s1, s2, sonuc;


void MainWindow::on_btn_hakkinda_clicked()
{
    QMessageBox::about(NULL, "About", "Ege Öz 2014");
}

void MainWindow::on_btn_karekok_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    double kok,sayi;
    sayi=qstrsayi.toDouble();
    kok=sqrt(sayi);
    QString strkok=QString::number(kok);
    ui->hesaplama->setText(strkok);
}

void MainWindow::on_btn_0_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + "0");
}

void MainWindow::on_btn_1_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + "1");
}

void MainWindow::on_btn_2_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + "2");
}

void MainWindow::on_btn_3_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + "3");
}

void MainWindow::on_btn_4_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + "4");
}

void MainWindow::on_btn_5_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + "5");
}

void MainWindow::on_btn_6_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + "6");
}

void MainWindow::on_btn_7_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + "7");
}

void MainWindow::on_btn_8_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + "8");
}

void MainWindow::on_btn_9_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + "9");
}

void MainWindow::on_btn_virgul_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    ui->hesaplama->setText(qstrsayi + ".");
}

void MainWindow::on_btn_kup_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    double kup,sayi;
    sayi=qstrsayi.toDouble();
    kup=sayi*sayi*sayi;
    QString strkup=QString::number(kup);
    ui->hesaplama->setText(strkup);
}

void MainWindow::on_btn_temizle_clicked()
{
    ui->hesaplama->clear();
    topd=0, cikd=0, card=0, bold=0, to_s1=0, ci_s1=0, ca_s1=0, bo_s1=0, s2=0, sonuc=0;
}

void MainWindow::on_btn_kare_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    double kare,sayi;
    sayi=qstrsayi.toDouble();
    kare=sayi*sayi;
    QString strkare=QString::number(kare);
    ui->hesaplama->setText(strkare);
}

void MainWindow::on_btn_zit_clicked()
{
    QString qstrsayi=ui->hesaplama->text();
    double zit,sayi;
    sayi=qstrsayi.toDouble();
    zit=-sayi;
    QString strzit=QString::number(zit);
    ui->hesaplama->setText(strzit);
}

void MainWindow::on_btn_toplama_clicked()
{
    topd=1;
    cikd=0;
    card=0;
    bold=0;
    to_s1=ui->hesaplama->text().toDouble();
    ui->hesaplama->clear();
}

void MainWindow::on_btn_cikarma_clicked()
{
    topd=0;
    cikd=1;
    card=0;
    bold=0;
    ci_s1=ui->hesaplama->text().toDouble();
    ui->hesaplama->clear();
}

void MainWindow::on_btn_carpma_clicked()
{
    topd=0;
    cikd=0;
    card=1;
    bold=0;
    ca_s1=ui->hesaplama->text().toDouble();
    ui->hesaplama->clear();
}

void MainWindow::on_btn_bolme_clicked()
{
    topd=0;
    cikd=0;
    card=0;
    bold=1;
    bo_s1=ui->hesaplama->text().toDouble();
    ui->hesaplama->clear();
}

void MainWindow::on_btn_esit_clicked()
{
    s2=ui->hesaplama->text().toDouble();
    if (topd==1)
    {
        sonuc=to_s1+s2;
        QString sonucc=QString::number(sonuc);
        ui->hesaplama->setText(sonucc);
        topd=0;
    }
    else if (cikd==1)
    {
        sonuc=ci_s1-s2;
        QString sonucc=QString::number(sonuc);
        ui->hesaplama->setText(sonucc);
        cikd=0;
    }
    else if (card==1)
    {
        sonuc=ca_s1*s2;
        QString sonucc=QString::number(sonuc);
        ui->hesaplama->setText(sonucc);
        card=0;
    }
    else if (bold==1)
    {
        sonuc=bo_s1/s2;
        QString sonucc=QString::number(sonuc);
        ui->hesaplama->setText(sonucc);
        bold=0;
    }
    else
    {
        ui->hesaplama->setText("ERROR");
    }
}
