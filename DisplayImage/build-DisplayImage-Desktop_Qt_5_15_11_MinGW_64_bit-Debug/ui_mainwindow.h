/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Display;
    QLabel *label;
    QPushButton *Hide;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(486, 259);
        QPalette palette;
        QBrush brush(QColor(85, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Display = new QPushButton(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(50, 160, 191, 61));
        QPalette palette1;
        QLinearGradient gradient(0, 0, 1, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(202, 203, 255, 255));
        gradient.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush1(gradient);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QLinearGradient gradient1(0, 0, 1, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(202, 203, 255, 255));
        gradient1.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush2(gradient1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0, 0, 1, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(202, 203, 255, 255));
        gradient2.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush3(gradient2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        QLinearGradient gradient3(0, 0, 1, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(202, 203, 255, 255));
        gradient3.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush4(gradient3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        QLinearGradient gradient4(0, 0, 1, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(202, 203, 255, 255));
        gradient4.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush5(gradient4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QLinearGradient gradient5(0, 0, 1, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(202, 203, 255, 255));
        gradient5.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush6(gradient5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QLinearGradient gradient6(0, 0, 1, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(202, 203, 255, 255));
        gradient6.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush7(gradient6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        QLinearGradient gradient7(0, 0, 1, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(202, 203, 255, 255));
        gradient7.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush8(gradient7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        QLinearGradient gradient8(0, 0, 1, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(202, 203, 255, 255));
        gradient8.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush9(gradient8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        Display->setPalette(palette1);
        QFont font;
        font.setPointSize(16);
        Display->setFont(font);
        Display->setAutoFillBackground(false);
        Display->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(202, 203, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/show.png"), QSize(), QIcon::Normal, QIcon::Off);
        Display->setIcon(icon);
        Display->setIconSize(QSize(50, 50));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 10, 211, 131));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(false);
        label->setFont(font1);
        Hide = new QPushButton(centralwidget);
        Hide->setObjectName(QString::fromUtf8("Hide"));
        Hide->setGeometry(QRect(250, 160, 201, 61));
        QPalette palette2;
        QLinearGradient gradient9(0, 0, 1, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(202, 203, 255, 255));
        gradient9.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush10(gradient9);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
        QLinearGradient gradient10(0, 0, 1, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(202, 203, 255, 255));
        gradient10.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush11(gradient10);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush11);
        QLinearGradient gradient11(0, 0, 1, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(202, 203, 255, 255));
        gradient11.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush12(gradient11);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush12);
        QLinearGradient gradient12(0, 0, 1, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(202, 203, 255, 255));
        gradient12.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush13(gradient12);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        QLinearGradient gradient13(0, 0, 1, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(202, 203, 255, 255));
        gradient13.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush14(gradient13);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush14);
        QLinearGradient gradient14(0, 0, 1, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(202, 203, 255, 255));
        gradient14.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush15(gradient14);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        QLinearGradient gradient15(0, 0, 1, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(202, 203, 255, 255));
        gradient15.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush16(gradient15);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        QLinearGradient gradient16(0, 0, 1, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(202, 203, 255, 255));
        gradient16.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush17(gradient16);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        QLinearGradient gradient17(0, 0, 1, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(202, 203, 255, 255));
        gradient17.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush18(gradient17);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        Hide->setPalette(palette2);
        Hide->setFont(font);
        Hide->setAutoFillBackground(false);
        Hide->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(202, 203, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Downloads/hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        Hide->setIcon(icon1);
        Hide->setIconSize(QSize(50, 50));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 486, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Display->setText(QCoreApplication::translate("MainWindow", "Display Logo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "  Click the button ", nullptr));
        Hide->setText(QCoreApplication::translate("MainWindow", "Hide Logo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
