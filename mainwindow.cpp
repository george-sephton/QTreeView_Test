#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "assetDialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    assetAssetSelector dialog(this);
    dialog.exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}
