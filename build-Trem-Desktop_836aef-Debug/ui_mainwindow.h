/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trem1;
    QLabel *label_trilho1;
    QLabel *label_trilho2;
    QLabel *label_trilho3;
    QLabel *label_trilho4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_trem2;
    QLabel *label_trilho1_2;
    QLabel *label_trilho2_2;
    QLabel *label_trilho3_2;
    QLabel *label_trilho1_3;
    QLabel *label_trilho3_3;
    QLabel *label_trilho2_3;
    QLabel *label_trilho4_2;
    QLabel *label_trilho2_4;
    QLabel *label_trilho3_4;
    QLabel *label_trilho3_5;
    QLabel *label_trilho2_5;
    QLabel *label_trem3;
    QLabel *label_trem4;
    QLabel *label_trem5;
    QSlider *sliderTrem1;
    QSlider *sliderTrem2;
    QSlider *sliderTrem3;
    QSlider *sliderTrem4;
    QSlider *sliderTrem5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(899, 417);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QStringLiteral("label_trem1"));
        label_trem1->setGeometry(QRect(60, 90, 30, 25));
        label_trem1->setStyleSheet(QStringLiteral("QLabel { background: rgb(32, 74, 135)}"));
        label_trilho1 = new QLabel(centralWidget);
        label_trilho1->setObjectName(QStringLiteral("label_trilho1"));
        label_trilho1->setGeometry(QRect(70, 30, 171, 8));
        label_trilho1->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho2 = new QLabel(centralWidget);
        label_trilho2->setObjectName(QStringLiteral("label_trilho2"));
        label_trilho2->setGeometry(QRect(70, 160, 171, 8));
        label_trilho2->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho3 = new QLabel(centralWidget);
        label_trilho3->setObjectName(QStringLiteral("label_trilho3"));
        label_trilho3->setGeometry(QRect(240, 30, 8, 137));
        label_trilho3->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho4 = new QLabel(centralWidget);
        label_trilho4->setObjectName(QStringLiteral("label_trilho4"));
        label_trilho4->setGeometry(QRect(70, 30, 8, 137));
        label_trilho4->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 310, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 310, 98, 27));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QStringLiteral("label_trem2"));
        label_trem2->setGeometry(QRect(230, 90, 30, 25));
        label_trem2->setStyleSheet(QStringLiteral("QLabel { background: rgb(164, 0, 0)}"));
        label_trilho1_2 = new QLabel(centralWidget);
        label_trilho1_2->setObjectName(QStringLiteral("label_trilho1_2"));
        label_trilho1_2->setGeometry(QRect(240, 30, 171, 8));
        label_trilho1_2->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho2_2 = new QLabel(centralWidget);
        label_trilho2_2->setObjectName(QStringLiteral("label_trilho2_2"));
        label_trilho2_2->setGeometry(QRect(240, 160, 171, 8));
        label_trilho2_2->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho3_2 = new QLabel(centralWidget);
        label_trilho3_2->setObjectName(QStringLiteral("label_trilho3_2"));
        label_trilho3_2->setGeometry(QRect(410, 30, 8, 137));
        label_trilho3_2->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho1_3 = new QLabel(centralWidget);
        label_trilho1_3->setObjectName(QStringLiteral("label_trilho1_3"));
        label_trilho1_3->setGeometry(QRect(410, 30, 171, 8));
        label_trilho1_3->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho3_3 = new QLabel(centralWidget);
        label_trilho3_3->setObjectName(QStringLiteral("label_trilho3_3"));
        label_trilho3_3->setGeometry(QRect(580, 30, 8, 137));
        label_trilho3_3->setAutoFillBackground(false);
        label_trilho3_3->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho2_3 = new QLabel(centralWidget);
        label_trilho2_3->setObjectName(QStringLiteral("label_trilho2_3"));
        label_trilho2_3->setGeometry(QRect(410, 160, 171, 8));
        label_trilho2_3->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho4_2 = new QLabel(centralWidget);
        label_trilho4_2->setObjectName(QStringLiteral("label_trilho4_2"));
        label_trilho4_2->setGeometry(QRect(160, 166, 8, 131));
        label_trilho4_2->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho2_4 = new QLabel(centralWidget);
        label_trilho2_4->setObjectName(QStringLiteral("label_trilho2_4"));
        label_trilho2_4->setGeometry(QRect(160, 290, 171, 8));
        label_trilho2_4->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho3_4 = new QLabel(centralWidget);
        label_trilho3_4->setObjectName(QStringLiteral("label_trilho3_4"));
        label_trilho3_4->setGeometry(QRect(330, 166, 8, 131));
        label_trilho3_4->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho3_5 = new QLabel(centralWidget);
        label_trilho3_5->setObjectName(QStringLiteral("label_trilho3_5"));
        label_trilho3_5->setGeometry(QRect(500, 166, 8, 131));
        label_trilho3_5->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trilho2_5 = new QLabel(centralWidget);
        label_trilho2_5->setObjectName(QStringLiteral("label_trilho2_5"));
        label_trilho2_5->setGeometry(QRect(330, 290, 171, 8));
        label_trilho2_5->setStyleSheet(QStringLiteral("QLabel { background: rgb(114, 159, 207)}"));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QStringLiteral("label_trem3"));
        label_trem3->setGeometry(QRect(400, 90, 30, 25));
        label_trem3->setStyleSheet(QStringLiteral("QLabel { background: rgb(115, 210, 22)}"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QStringLiteral("label_trem4"));
        label_trem4->setGeometry(QRect(150, 220, 30, 25));
        label_trem4->setStyleSheet(QStringLiteral("QLabel { background: rgb(117, 80, 123)}"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QStringLiteral("label_trem5"));
        label_trem5->setGeometry(QRect(320, 220, 30, 25));
        label_trem5->setStyleSheet(QStringLiteral("QLabel { background: rgb(245, 121, 0)}"));
        sliderTrem1 = new QSlider(centralWidget);
        sliderTrem1->setObjectName(QStringLiteral("sliderTrem1"));
        sliderTrem1->setGeometry(QRect(640, 170, 191, 31));
        sliderTrem1->setStyleSheet(QLatin1String("background-color: rgb(32, 74, 135);\n"
""));
        sliderTrem1->setMinimum(0);
        sliderTrem1->setMaximum(200);
        sliderTrem1->setValue(100);
        sliderTrem1->setSliderPosition(100);
        sliderTrem1->setTracking(true);
        sliderTrem1->setOrientation(Qt::Horizontal);
        sliderTrem1->setInvertedAppearance(false);
        sliderTrem1->setInvertedControls(false);
        sliderTrem2 = new QSlider(centralWidget);
        sliderTrem2->setObjectName(QStringLiteral("sliderTrem2"));
        sliderTrem2->setGeometry(QRect(640, 200, 191, 31));
        sliderTrem2->setStyleSheet(QStringLiteral("background-color: rgb(164, 0, 0);"));
        sliderTrem2->setMaximum(200);
        sliderTrem2->setSliderPosition(100);
        sliderTrem2->setOrientation(Qt::Horizontal);
        sliderTrem3 = new QSlider(centralWidget);
        sliderTrem3->setObjectName(QStringLiteral("sliderTrem3"));
        sliderTrem3->setGeometry(QRect(640, 230, 191, 31));
        sliderTrem3->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));
        sliderTrem3->setMaximum(200);
        sliderTrem3->setSliderPosition(100);
        sliderTrem3->setOrientation(Qt::Horizontal);
        sliderTrem4 = new QSlider(centralWidget);
        sliderTrem4->setObjectName(QStringLiteral("sliderTrem4"));
        sliderTrem4->setGeometry(QRect(640, 260, 191, 31));
        sliderTrem4->setStyleSheet(QStringLiteral("background-color: rgb(117, 80, 123);"));
        sliderTrem4->setMaximum(200);
        sliderTrem4->setSliderPosition(100);
        sliderTrem4->setOrientation(Qt::Horizontal);
        sliderTrem5 = new QSlider(centralWidget);
        sliderTrem5->setObjectName(QStringLiteral("sliderTrem5"));
        sliderTrem5->setGeometry(QRect(640, 290, 191, 31));
        sliderTrem5->setStyleSheet(QStringLiteral("background-color: rgb(245, 121, 0);"));
        sliderTrem5->setMaximum(200);
        sliderTrem5->setSliderPosition(100);
        sliderTrem5->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        label_trilho1_3->raise();
        label_trilho3->raise();
        label_trilho3_4->raise();
        label_trilho4_2->raise();
        label_trilho2_3->raise();
        label_trilho3_2->raise();
        label_trilho2_2->raise();
        label_trilho1_2->raise();
        label_trilho1->raise();
        label_trilho2->raise();
        label_trilho4->raise();
        label_trem1->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_trem2->raise();
        label_trilho3_3->raise();
        label_trilho2_4->raise();
        label_trilho3_5->raise();
        label_trilho2_5->raise();
        label_trem3->raise();
        label_trem4->raise();
        label_trem5->raise();
        sliderTrem1->raise();
        sliderTrem2->raise();
        sliderTrem3->raise();
        sliderTrem4->raise();
        sliderTrem5->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 899, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_trem1->setText(QApplication::translate("MainWindow", "  T1", Q_NULLPTR));
        label_trilho1->setText(QString());
        label_trilho2->setText(QString());
        label_trilho3->setText(QString());
        label_trilho4->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Ligar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Parar", Q_NULLPTR));
        label_trem2->setText(QApplication::translate("MainWindow", "  T2", Q_NULLPTR));
        label_trilho1_2->setText(QString());
        label_trilho2_2->setText(QString());
        label_trilho3_2->setText(QString());
        label_trilho1_3->setText(QString());
        label_trilho3_3->setText(QString());
        label_trilho2_3->setText(QString());
        label_trilho4_2->setText(QString());
        label_trilho2_4->setText(QString());
        label_trilho3_4->setText(QString());
        label_trilho3_5->setText(QString());
        label_trilho2_5->setText(QString());
        label_trem3->setText(QApplication::translate("MainWindow", "  T3", Q_NULLPTR));
        label_trem4->setText(QApplication::translate("MainWindow", "  T4", Q_NULLPTR));
        label_trem5->setText(QApplication::translate("MainWindow", "  T5", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
