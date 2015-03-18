#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "judge.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_yourCodeBtn_clicked();

    void on_corrCodeBtn_clicked();

    void on_tstMakerBtn_clicked();

    void on_judgeBtn_clicked();

    void on_actionReset_triggered();

    void on_actionQuit_triggered();

    void on_lstInputBtn_clicked();

    void on_yourOutBtn_clicked();

    void on_corrOutBtn_clicked();

    void on_compileOutputBtn_clicked();

    void on_resetBtn_clicked();

    void on_quitBtn_clicked();

    void on_yourCodeLangCbox_currentIndexChanged(const QString &arg1);

    void on_corrCodeLangCbox_currentIndexChanged(const QString &arg1);

    void on_tstMakerLangCbox_currentIndexChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
