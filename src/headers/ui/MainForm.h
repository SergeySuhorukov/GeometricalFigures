#pragma once

#include <ui_MainForm.h>

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QScrollArea>
#include <QMenuBar>
#include <QVBoxLayout>
#include <QListWidget>
#include <QTextBrowser>
#include <QMenuBar>

namespace rio {

class MainForm;

} // rio

class MainForm : public QWidget, public Ui::MainForm  // TODO need fix
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);

private slots:
// TODO add all slots and signals
    void handleAddButton();
    void handleDelButton();

};
