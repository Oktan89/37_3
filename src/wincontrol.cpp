#include "wincontrol.h"


Control::Control(QWidget *parent) : QMainWindow(parent), win(nullptr)
{
    win = new Ui::MainWindow;
    win->setupUi(this);
    show();
}

Control::~Control()
{
    delete win;
}