// Copyright (c) 2019 The WORX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef TOOLTIPMENU_H
#define TOOLTIPMENU_H

#include "qt/worx/pwidget.h"
#include <QWidget>
#include <QModelIndex>

class WORXGUI;
class WalletModel;

namespace Ui {
class TooltipMenu;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

class TooltipMenu : public PWidget
{
    Q_OBJECT

public:
    explicit TooltipMenu(WORXGUI* _window, QWidget *parent = nullptr);
    ~TooltipMenu() override;

    void setIndex(const QModelIndex &index);
    virtual void showEvent(QShowEvent *event) override;

    void setEditBtnText(QString btnText);
    void setDeleteBtnText(QString btnText);
    void setCopyBtnText(QString btnText);
    void setCopyBtnVisible(bool visible);
    void setDeleteBtnVisible(bool visible);

signals:
    void onDeleteClicked();
    void onCopyClicked();
    void onEditClicked();

private slots:
    void deleteClicked();
    void copyClicked();
    void editClicked();

private:
    Ui::TooltipMenu *ui;
    QModelIndex index;
};

#endif // TOOLTIPMENU_H
