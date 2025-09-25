#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>

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
    void loadImage1();
    void loadImage2();
    void compareImages();

private:
    Ui::MainWindow *ui;
    QImage image1;
    QImage image2;
    double calculateImageDifference(const QImage& image1, const QImage& image2);
    double calculateImageSimilarity(const QImage& image1, const QImage& image2);
};

#endif // MAINWINDOW_H
