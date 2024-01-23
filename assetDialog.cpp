#include "assetDialog.h"

assetAssetSelector::assetAssetSelector(QWidget *parent)
    : QDialog(parent)
{
    assetSelectLabel = new QLabel("Test");

    assetSelectTree = new QTreeView();
    assetSelectTree->setFixedSize(260, 360);
    assetSelectTree->setHeaderHidden(true);
    assetSelectTree->setDragEnabled(false);
    assetSelectTree->setEditTriggers(QAbstractItemView::NoEditTriggers);

    assetSelectItemModel = new QStandardItemModel(this);

    // Data would usually be added here

    assetSelectTree->setModel(assetSelectItemModel);
    assetSelectTree->setCurrentIndex(assetSelectItemModel->invisibleRootItem()->index());
    assetSelectTree->expandAll();

    okButton = new QPushButton(QString("&OK"));
    okButton->setDefault(true);

    cancelButton = new QPushButton(QString("&Cancel"));

    buttonBox = new QDialogButtonBox(Qt::Horizontal);
    buttonBox->addButton(cancelButton, QDialogButtonBox::RejectRole);
    buttonBox->addButton(okButton, QDialogButtonBox::AcceptRole);

    QVBoxLayout *assetSelectLayout = new QVBoxLayout;
    assetSelectLayout->addWidget(assetSelectLabel);
    assetSelectLayout->addWidget(assetSelectTree);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
    mainLayout->addLayout(assetSelectLayout, 0, 0);
    mainLayout->addWidget(buttonBox, 1, 0);

    setLayout(mainLayout);

    connect(buttonBox, &QDialogButtonBox::accepted, this, &assetAssetSelector::slotAccept);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &assetAssetSelector::slotReject);
}

void assetAssetSelector::slotAccept()
{
    /* Accept the dialog */
    accept();
}

void assetAssetSelector::slotReject()
{
    /* Reject the dialog */
    reject();
}

