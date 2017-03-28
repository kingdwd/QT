﻿#ifndef SYSTEMSET_H
#define SYSTEMSET_H

#include <QWidget>
#include <QAbstractButton>

#include <qmyedit.h>
#include <config.h>
#include <QFileDialog>
#include "globl_data.h"
namespace Ui {
class Systemset;
}

class Systemset : public QWidget
{
    Q_OBJECT

public:
    explicit Systemset(QWidget *parent = 0);
    ~Systemset();
protected:
    bool eventFilter(QObject *, QEvent *);
private:
    Ui::Systemset *ui;
   // QButtonGroup *buttonGroup;
    void valueInt(void);
    void Button_AMP_1(QPushButton *button);
    void Button_AMP_0(QPushButton *button);
public slots:
    void ShowTime(void);
};

#endif // SYSTEMSET_H
