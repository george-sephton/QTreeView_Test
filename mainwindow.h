#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtWidgets>
#include <QTreeView>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QLabel *assetSelectLabel;
    QTreeView *assetSelectTree;
    QDialogButtonBox *buttonBox;
    QPushButton *okButton;
    QPushButton *cancelButton;

    QStandardItemModel *assetSelectItemModel;
};
#endif // MAINWINDOW_H
