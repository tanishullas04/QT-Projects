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
    QPushButton *loadImage1Button;
    QPushButton *loadImage2Button;
    QLabel *differenceLabel;
    QPushButton *compareButton;
    QLabel *image1Label;
    QLabel *image2Label;
    QLabel *similarityLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(704, 330);
        QPalette palette;
        QBrush brush(QColor(112, 193, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        loadImage1Button = new QPushButton(centralwidget);
        loadImage1Button->setObjectName(QString::fromUtf8("loadImage1Button"));
        loadImage1Button->setGeometry(QRect(110, 200, 111, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/upload-image-icon-png-11.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        loadImage1Button->setIcon(icon);
        loadImage1Button->setIconSize(QSize(20, 20));
        loadImage2Button = new QPushButton(centralwidget);
        loadImage2Button->setObjectName(QString::fromUtf8("loadImage2Button"));
        loadImage2Button->setGeometry(QRect(490, 200, 111, 31));
        loadImage2Button->setIcon(icon);
        loadImage2Button->setIconSize(QSize(20, 20));
        differenceLabel = new QLabel(centralwidget);
        differenceLabel->setObjectName(QString::fromUtf8("differenceLabel"));
        differenceLabel->setGeometry(QRect(300, 220, 111, 31));
        compareButton = new QPushButton(centralwidget);
        compareButton->setObjectName(QString::fromUtf8("compareButton"));
        compareButton->setGeometry(QRect(300, 250, 111, 31));
        image1Label = new QLabel(centralwidget);
        image1Label->setObjectName(QString::fromUtf8("image1Label"));
        image1Label->setGeometry(QRect(70, 30, 191, 151));
        image2Label = new QLabel(centralwidget);
        image2Label->setObjectName(QString::fromUtf8("image2Label"));
        image2Label->setGeometry(QRect(400, 30, 191, 151));
        similarityLabel = new QLabel(centralwidget);
        similarityLabel->setObjectName(QString::fromUtf8("similarityLabel"));
        similarityLabel->setGeometry(QRect(300, 200, 111, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 704, 22));
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
        loadImage1Button->setText(QCoreApplication::translate("MainWindow", "Load Image", nullptr));
        loadImage2Button->setText(QCoreApplication::translate("MainWindow", "Load Image", nullptr));
        differenceLabel->setText(QCoreApplication::translate("MainWindow", "Differences:", nullptr));
        compareButton->setText(QCoreApplication::translate("MainWindow", "Compare", nullptr));
        image1Label->setText(QString());
        image2Label->setText(QString());
        similarityLabel->setText(QCoreApplication::translate("MainWindow", "Similarity:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
