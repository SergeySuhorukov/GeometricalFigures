#include "MainForm.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainForm* mainForm = new MainForm;
    mainForm->show();

    return a.exec();
}
