#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <cmath> // Include cmath for sqrt function

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->loadImage1Button, &QPushButton::clicked, this, &MainWindow::loadImage1);
    connect(ui->loadImage2Button, &QPushButton::clicked, this, &MainWindow::loadImage2);
    connect(ui->compareButton, &QPushButton::clicked, this, &MainWindow::compareImages);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadImage1()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open Image 1"), "", tr("Image Files (*.png *.jpg *.bmp)"));
    if (!imagePath.isEmpty()) {
        image1.load(imagePath);
        if (!image1.isNull()) {
            ui->image1Label->setPixmap(QPixmap::fromImage(image1));
            ui->image1Label->setScaledContents(true);
            ui->image1Label->adjustSize();
        } else {
            qDebug() << "Failed to load Image 1!";
        }
    }
}

void MainWindow::loadImage2()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open Image 2"), "", tr("Image Files (*.png *.jpg *.bmp)"));
    if (!imagePath.isEmpty()) {
        image2.load(imagePath);
        if (!image2.isNull()) {
            ui->image2Label->setPixmap(QPixmap::fromImage(image2));
            ui->image2Label->setScaledContents(true);
            ui->image2Label->adjustSize();
        } else {
            qDebug() << "Failed to load Image 2!";
        }
    }
}

void MainWindow::compareImages()
{
    if (image1.isNull() || image2.isNull()) {
        qDebug() << "Please load both images first!";
        return;
    }

    double difference = calculateImageDifference(image1, image2);
    double similarity = calculateImageSimilarity(image1, image2);
    ui->differenceLabel->setText(QString("Difference: %1").arg(difference));
    ui->similarityLabel->setText(QString("Similarity: %1").arg(similarity));
}

double MainWindow::calculateImageDifference(const QImage& image1, const QImage& image2)
{
    if (image1.size() != image2.size()) {
        qWarning() << "Image dimensions do not match!";
        return -1.0;
    }

    int width = image1.width();
    int height = image1.height();
    double totalDifference = 0.0;
    double maxDifference = 255.0 * 3; // Maximum difference for each RGB channel

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            QRgb pixel1 = image1.pixel(x, y);
            QRgb pixel2 = image2.pixel(x, y);

            int rDiff = qAbs(qRed(pixel1) - qRed(pixel2));
            int gDiff = qAbs(qGreen(pixel1) - qGreen(pixel2));
            int bDiff = qAbs(qBlue(pixel1) - qBlue(pixel2));

            double pixelDifference = (rDiff + gDiff + bDiff) / maxDifference;

            totalDifference += pixelDifference;
        }
    }

    return totalDifference / (width * height);
}
double MainWindow::calculateImageSimilarity(const QImage& image1, const QImage& image2)
{
    if (image1.size() != image2.size()) {
        qWarning() << "Image dimensions do not match!";
        return -1.0;
    }

    int width = image1.width();
    int height = image1.height();
    double totalSimilarity = 0.0;

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            QRgb pixel1 = image1.pixel(x, y);
            QRgb pixel2 = image2.pixel(x, y);

            double dotProduct = qRed(pixel1) * qRed(pixel2) + qGreen(pixel1) * qGreen(pixel2) + qBlue(pixel1) * qBlue(pixel2);

            double magnitude1 = std::sqrt(qRed(pixel1) * qRed(pixel1) + qGreen(pixel1) * qGreen(pixel1) + qBlue(pixel1) * qBlue(pixel1));
            double magnitude2 = std::sqrt(qRed(pixel2) * qRed(pixel2) + qGreen(pixel2) * qGreen(pixel2) + qBlue(pixel2) * qBlue(pixel2));

            double similarity = dotProduct / (magnitude1 * magnitude2);

            totalSimilarity += similarity;
        }
    }

    return totalSimilarity / (width * height);
}
