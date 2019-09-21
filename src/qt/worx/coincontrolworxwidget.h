// Copyright (c) 2019 The WORX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLWORXWIDGET_H
#define COINCONTROLWORXWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlWorxWidget;
}

class CoinControlWorxWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlWorxWidget(QWidget *parent = nullptr);
    ~CoinControlWorxWidget();

private:
    Ui::CoinControlWorxWidget *ui;
};

#endif // COINCONTROLWORXWIDGET_H
