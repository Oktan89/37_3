#pragma once
#include <QMainWindow>
#include "ui_control.h"

class Control : public QMainWindow
{
    Q_OBJECT

    Ui::MainWindow *win;
public:
    explicit Control(QWidget *parent);
    ~Control();
public slots:


};