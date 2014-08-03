/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_0;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_4;
    QLineEdit *hesaplama;
    QPushButton *btn_bolme;
    QPushButton *btn_carpma;
    QPushButton *btn_toplama;
    QPushButton *btn_cikarma;
    QPushButton *btn_temizle;
    QPushButton *btn_5;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_6;
    QPushButton *btn_9;
    QPushButton *btn_virgul;
    QPushButton *btn_esit;
    QPushButton *btn_zit;
    QPushButton *btn_kare;
    QPushButton *btn_kup;
    QPushButton *btn_karekok;
    QPushButton *btn_hakkinda;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(233, 296);
        MainWindow->setMinimumSize(QSize(233, 296));
        MainWindow->setMaximumSize(QSize(233, 296));
        QIcon icon;
        QString iconThemeName = QStringLiteral("calc");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setGeometry(QRect(10, 250, 71, 21));
        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setGeometry(QRect(10, 210, 31, 31));
        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setGeometry(QRect(50, 210, 31, 31));
        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setGeometry(QRect(90, 210, 31, 31));
        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setGeometry(QRect(10, 170, 31, 31));
        hesaplama = new QLineEdit(centralwidget);
        hesaplama->setObjectName(QStringLiteral("hesaplama"));
        hesaplama->setGeometry(QRect(10, 20, 211, 41));
        QFont font;
        font.setPointSize(16);
        hesaplama->setFont(font);
        btn_bolme = new QPushButton(centralwidget);
        btn_bolme->setObjectName(QStringLiteral("btn_bolme"));
        btn_bolme->setGeometry(QRect(10, 90, 31, 23));
        btn_carpma = new QPushButton(centralwidget);
        btn_carpma->setObjectName(QStringLiteral("btn_carpma"));
        btn_carpma->setGeometry(QRect(50, 90, 31, 23));
        btn_toplama = new QPushButton(centralwidget);
        btn_toplama->setObjectName(QStringLiteral("btn_toplama"));
        btn_toplama->setGeometry(QRect(130, 90, 31, 23));
        btn_cikarma = new QPushButton(centralwidget);
        btn_cikarma->setObjectName(QStringLiteral("btn_cikarma"));
        btn_cikarma->setGeometry(QRect(90, 90, 31, 23));
        btn_temizle = new QPushButton(centralwidget);
        btn_temizle->setObjectName(QStringLiteral("btn_temizle"));
        btn_temizle->setGeometry(QRect(180, 90, 41, 23));
        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setGeometry(QRect(50, 170, 31, 31));
        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setGeometry(QRect(10, 130, 31, 31));
        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setGeometry(QRect(50, 130, 31, 31));
        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setGeometry(QRect(90, 170, 31, 31));
        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setGeometry(QRect(90, 130, 31, 31));
        btn_virgul = new QPushButton(centralwidget);
        btn_virgul->setObjectName(QStringLiteral("btn_virgul"));
        btn_virgul->setGeometry(QRect(90, 250, 31, 23));
        btn_esit = new QPushButton(centralwidget);
        btn_esit->setObjectName(QStringLiteral("btn_esit"));
        btn_esit->setGeometry(QRect(130, 130, 31, 141));
        btn_zit = new QPushButton(centralwidget);
        btn_zit->setObjectName(QStringLiteral("btn_zit"));
        btn_zit->setGeometry(QRect(180, 120, 41, 23));
        btn_kare = new QPushButton(centralwidget);
        btn_kare->setObjectName(QStringLiteral("btn_kare"));
        btn_kare->setGeometry(QRect(180, 150, 41, 23));
        btn_kup = new QPushButton(centralwidget);
        btn_kup->setObjectName(QStringLiteral("btn_kup"));
        btn_kup->setGeometry(QRect(180, 180, 41, 23));
        btn_karekok = new QPushButton(centralwidget);
        btn_karekok->setObjectName(QStringLiteral("btn_karekok"));
        btn_karekok->setGeometry(QRect(180, 210, 41, 23));
        btn_hakkinda = new QPushButton(centralwidget);
        btn_hakkinda->setObjectName(QStringLiteral("btn_hakkinda"));
        btn_hakkinda->setGeometry(QRect(180, 240, 41, 23));
        QIcon icon1;
        icon1.addFile(QStringLiteral("about.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_hakkinda->setIcon(icon1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", 0));
        btn_0->setText(QApplication::translate("MainWindow", "0", 0));
        btn_1->setText(QApplication::translate("MainWindow", "1", 0));
        btn_2->setText(QApplication::translate("MainWindow", "2", 0));
        btn_3->setText(QApplication::translate("MainWindow", "3", 0));
        btn_4->setText(QApplication::translate("MainWindow", "4", 0));
        hesaplama->setText(QString());
        btn_bolme->setText(QApplication::translate("MainWindow", "\303\267", 0));
        btn_carpma->setText(QApplication::translate("MainWindow", "x", 0));
        btn_toplama->setText(QApplication::translate("MainWindow", "+", 0));
        btn_cikarma->setText(QApplication::translate("MainWindow", "-", 0));
        btn_temizle->setText(QApplication::translate("MainWindow", "AC", 0));
        btn_5->setText(QApplication::translate("MainWindow", "5", 0));
        btn_7->setText(QApplication::translate("MainWindow", "7", 0));
        btn_8->setText(QApplication::translate("MainWindow", "8", 0));
        btn_6->setText(QApplication::translate("MainWindow", "6", 0));
        btn_9->setText(QApplication::translate("MainWindow", "9", 0));
        btn_virgul->setText(QApplication::translate("MainWindow", ".", 0));
        btn_esit->setText(QApplication::translate("MainWindow", "=", 0));
        btn_zit->setText(QApplication::translate("MainWindow", "+/-", 0));
        btn_kare->setText(QApplication::translate("MainWindow", "^2", 0));
        btn_kup->setText(QApplication::translate("MainWindow", "^3", 0));
        btn_karekok->setText(QApplication::translate("MainWindow", "\342\210\232x", 0));
        btn_hakkinda->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
