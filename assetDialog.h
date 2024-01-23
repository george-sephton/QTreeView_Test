#ifndef ASSETDIALOG_H
#define ASSETDIALOG_H
#pragma once

#include "mainWindow.h"

#include <QDialog>
#include <QtWidgets>
#include <QTreeView>

#include <string>

QT_BEGIN_NAMESPACE
class QLabel;
class QLineEdit;
class QComboBox;
//class QCheckBox;

class QDialogButtonBox;
class QPushButton;
QT_END_NAMESPACE

class assetAssetSelector : public QDialog
{
    Q_OBJECT

public:
    assetAssetSelector(QWidget *parent = nullptr);

protected slots:
    void slotAccept();
    void slotReject();

private:
    QLabel *assetSelectLabel;
    QTreeView *assetSelectTree;
    QDialogButtonBox *buttonBox;
    QPushButton *okButton;
    QPushButton *cancelButton;

    QStandardItemModel *assetSelectItemModel;
};

#endif // ASSETDIALOG_H
