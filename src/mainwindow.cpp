#include <fstream>
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->yourCodeLEdit->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_yourCodeBtn_clicked()
{
    this->ui->yourCodeLEdit->setText(QFileDialog::getOpenFileName(this, tr("Choose Your Code"), "/home", tr("C++ Files (*.cpp)")));
}

void MainWindow::on_corrCodeBtn_clicked()
{
    this->ui->corrCodeLEdit->setText(QFileDialog::getOpenFileName(this, tr("Choose Correct Code"), "/home", tr("C++ Files (*.cpp)")));
}

void MainWindow::on_tstMakerBtn_clicked()
{
    this->ui->tstMakerLEdit->setText(QFileDialog::getOpenFileName(this, tr("Choose Test Maker Code"), "/home", tr("C++ Files (*.cpp)")));
}

void MainWindow::on_judgeBtn_clicked()
{
    if(!Judge::copyCode(ui->yourCodeLEdit->text(),QString("yourCode.cpp")))
    {
        ui->statusTEdit->setText(QString("Your code doesn't exist!"));
        return;
    }
    if(!Judge::compileCode(ui->compileOptionsLEdit->text(),ui->yourCodeLEdit->text(),QString("a")))
    {
        ui->statusTEdit->setText(QString("Your code doesn't compile!"));
        return;
    }

    if(!Judge::copyCode(ui->corrCodeLEdit->text(),QString("corrCode.cpp")))
    {
        ui->statusTEdit->setText(QString("Correct code doesn't exist!"));
        return;
    }
    if(!Judge::compileCode(ui->compileOptionsLEdit->text(),ui->corrCodeLEdit->text(),QString("b")))
    {
        ui->statusTEdit->setText(QString("Correct code doesn't compile!"));
        return;
    }

    if(!Judge::copyCode(ui->tstMakerLEdit->text(),QString("tstMaker.cpp")))
    {
        ui->statusTEdit->setText(QString("Test Maker code doesn't exist!"));
        return;
    }
    if(!Judge::compileCode(ui->compileOptionsLEdit->text(),ui->tstMakerLEdit->text(),QString("c")))
    {
        ui->statusTEdit->setText(QString("Test Maker code doesn't compile!"));
        return;
    }

    QString output = Judge::judge(ui->timeSpinBox->value(),ui->testsCountSpinBox->value());
    ui->statusTEdit->setText(QString(output));
}

void MainWindow::on_actionReset_triggered()
{
    ui->yourCodeLEdit->clear();
    ui->corrCodeLEdit->clear();
    ui->tstMakerLEdit->clear();
    ui->testsCountSpinBox->setValue(ui->testsCountSpinBox->minimum());
    ui->timeSpinBox->setValue(ui->timeSpinBox->minimum());
    ui->statusTEdit->clear();
    Judge::clear();
}

void MainWindow::on_actionQuit_triggered()
{
    this->close();
}

void MainWindow::on_lstInputBtn_clicked()
{
    if(!Judge::openLastInput())
        ui->statusTEdit->setText(QString("Last input doesn't exist!"));
}

void MainWindow::on_yourOutBtn_clicked()
{
    if(!Judge::openYourOutput())
        ui->statusTEdit->setText(QString("Your output doesn't exist!"));
}

void MainWindow::on_corrOutBtn_clicked()
{
    if(!Judge::openCorrOutput())
        ui->statusTEdit->setText(QString("Correct output doesn't exist!"));
}

void MainWindow::on_compileOutputBtn_clicked()
{
    if(!Judge::openCompileOutput())
        ui->statusTEdit->setText(QString("Compile output doesn't exist!"));
}

void MainWindow::on_resetBtn_clicked()
{
    on_actionReset_triggered();
}

void MainWindow::on_quitBtn_clicked()
{
    on_actionQuit_triggered();
}
