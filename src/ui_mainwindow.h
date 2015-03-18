/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReset;
    QAction *actionQuit;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *tstMakerLbl;
    QPushButton *tstMakerBtn;
    QSpinBox *timeSpinBox;
    QLabel *corrCodeLbl;
    QLineEdit *corrCodeLEdit;
    QLineEdit *yourCodeLEdit;
    QSpinBox *testsCountSpinBox;
    QLabel *yourCodeLbl;
    QLineEdit *tstMakerLEdit;
    QLabel *testsCountLbl;
    QLabel *timeLbl;
    QPushButton *corrCodeBtn;
    QPushButton *yourCodeBtn;
    QLabel *statusLbl;
    QTextEdit *statusTEdit;
    QPushButton *judgeBtn;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *compileOutputBtn;
    QPushButton *lstInputBtn;
    QPushButton *yourOutBtn;
    QPushButton *corrOutBtn;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *resetBtn;
    QPushButton *quitBtn;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *yourCodeCommandLbl;
    QLabel *yourCodeLangLbl;
    QComboBox *yourCodeLangCbox;
    QLineEdit *yourCodeCommandLEdit;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *corrCodeCommandLbl;
    QLabel *corrCodeLangLbl;
    QComboBox *corrCodeLangCbox;
    QLineEdit *corrCodeCommandLEdit;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *tstMakerCommandLbl;
    QLabel *tstMakerLangLbl;
    QComboBox *tstMakerLangCbox;
    QLineEdit *tstMakerCommandLEdit;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(719, 455);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 431, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tstMakerLbl = new QLabel(gridLayoutWidget);
        tstMakerLbl->setObjectName(QString::fromUtf8("tstMakerLbl"));

        gridLayout->addWidget(tstMakerLbl, 2, 0, 1, 1);

        tstMakerBtn = new QPushButton(gridLayoutWidget);
        tstMakerBtn->setObjectName(QString::fromUtf8("tstMakerBtn"));

        gridLayout->addWidget(tstMakerBtn, 2, 3, 1, 1);

        timeSpinBox = new QSpinBox(gridLayoutWidget);
        timeSpinBox->setObjectName(QString::fromUtf8("timeSpinBox"));
        timeSpinBox->setMinimum(1);
        timeSpinBox->setMaximum(5);

        gridLayout->addWidget(timeSpinBox, 3, 2, 1, 1);

        corrCodeLbl = new QLabel(gridLayoutWidget);
        corrCodeLbl->setObjectName(QString::fromUtf8("corrCodeLbl"));

        gridLayout->addWidget(corrCodeLbl, 1, 0, 1, 1);

        corrCodeLEdit = new QLineEdit(gridLayoutWidget);
        corrCodeLEdit->setObjectName(QString::fromUtf8("corrCodeLEdit"));

        gridLayout->addWidget(corrCodeLEdit, 1, 2, 1, 1);

        yourCodeLEdit = new QLineEdit(gridLayoutWidget);
        yourCodeLEdit->setObjectName(QString::fromUtf8("yourCodeLEdit"));

        gridLayout->addWidget(yourCodeLEdit, 0, 2, 1, 1);

        testsCountSpinBox = new QSpinBox(gridLayoutWidget);
        testsCountSpinBox->setObjectName(QString::fromUtf8("testsCountSpinBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        testsCountSpinBox->setFont(font);
        testsCountSpinBox->setMinimum(5);
        testsCountSpinBox->setMaximum(20);

        gridLayout->addWidget(testsCountSpinBox, 4, 2, 1, 1);

        yourCodeLbl = new QLabel(gridLayoutWidget);
        yourCodeLbl->setObjectName(QString::fromUtf8("yourCodeLbl"));

        gridLayout->addWidget(yourCodeLbl, 0, 0, 1, 1);

        tstMakerLEdit = new QLineEdit(gridLayoutWidget);
        tstMakerLEdit->setObjectName(QString::fromUtf8("tstMakerLEdit"));

        gridLayout->addWidget(tstMakerLEdit, 2, 2, 1, 1);

        testsCountLbl = new QLabel(gridLayoutWidget);
        testsCountLbl->setObjectName(QString::fromUtf8("testsCountLbl"));

        gridLayout->addWidget(testsCountLbl, 4, 0, 1, 1);

        timeLbl = new QLabel(gridLayoutWidget);
        timeLbl->setObjectName(QString::fromUtf8("timeLbl"));

        gridLayout->addWidget(timeLbl, 3, 0, 1, 1);

        corrCodeBtn = new QPushButton(gridLayoutWidget);
        corrCodeBtn->setObjectName(QString::fromUtf8("corrCodeBtn"));

        gridLayout->addWidget(corrCodeBtn, 1, 3, 1, 1);

        yourCodeBtn = new QPushButton(gridLayoutWidget);
        yourCodeBtn->setObjectName(QString::fromUtf8("yourCodeBtn"));

        gridLayout->addWidget(yourCodeBtn, 0, 3, 1, 1);

        statusLbl = new QLabel(gridLayoutWidget);
        statusLbl->setObjectName(QString::fromUtf8("statusLbl"));

        gridLayout->addWidget(statusLbl, 5, 0, 1, 1);

        statusTEdit = new QTextEdit(gridLayoutWidget);
        statusTEdit->setObjectName(QString::fromUtf8("statusTEdit"));

        gridLayout->addWidget(statusTEdit, 5, 2, 1, 1);

        judgeBtn = new QPushButton(gridLayoutWidget);
        judgeBtn->setObjectName(QString::fromUtf8("judgeBtn"));

        gridLayout->addWidget(judgeBtn, 5, 3, 1, 1);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 320, 701, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        compileOutputBtn = new QPushButton(horizontalLayoutWidget);
        compileOutputBtn->setObjectName(QString::fromUtf8("compileOutputBtn"));

        horizontalLayout->addWidget(compileOutputBtn);

        lstInputBtn = new QPushButton(horizontalLayoutWidget);
        lstInputBtn->setObjectName(QString::fromUtf8("lstInputBtn"));

        horizontalLayout->addWidget(lstInputBtn);

        yourOutBtn = new QPushButton(horizontalLayoutWidget);
        yourOutBtn->setObjectName(QString::fromUtf8("yourOutBtn"));

        horizontalLayout->addWidget(yourOutBtn);

        corrOutBtn = new QPushButton(horizontalLayoutWidget);
        corrOutBtn->setObjectName(QString::fromUtf8("corrOutBtn"));

        horizontalLayout->addWidget(corrOutBtn);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(190, 360, 341, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        resetBtn = new QPushButton(horizontalLayoutWidget_2);
        resetBtn->setObjectName(QString::fromUtf8("resetBtn"));

        horizontalLayout_2->addWidget(resetBtn);

        quitBtn = new QPushButton(horizontalLayoutWidget_2);
        quitBtn->setObjectName(QString::fromUtf8("quitBtn"));

        horizontalLayout_2->addWidget(quitBtn);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(450, 30, 261, 80));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        yourCodeCommandLbl = new QLabel(gridLayoutWidget_2);
        yourCodeCommandLbl->setObjectName(QString::fromUtf8("yourCodeCommandLbl"));

        gridLayout_2->addWidget(yourCodeCommandLbl, 1, 0, 1, 1);

        yourCodeLangLbl = new QLabel(gridLayoutWidget_2);
        yourCodeLangLbl->setObjectName(QString::fromUtf8("yourCodeLangLbl"));

        gridLayout_2->addWidget(yourCodeLangLbl, 0, 0, 1, 1);

        yourCodeLangCbox = new QComboBox(gridLayoutWidget_2);
        yourCodeLangCbox->setObjectName(QString::fromUtf8("yourCodeLangCbox"));

        gridLayout_2->addWidget(yourCodeLangCbox, 0, 1, 1, 1);

        yourCodeCommandLEdit = new QLineEdit(gridLayoutWidget_2);
        yourCodeCommandLEdit->setObjectName(QString::fromUtf8("yourCodeCommandLEdit"));

        gridLayout_2->addWidget(yourCodeCommandLEdit, 1, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(450, 120, 261, 80));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        corrCodeCommandLbl = new QLabel(gridLayoutWidget_3);
        corrCodeCommandLbl->setObjectName(QString::fromUtf8("corrCodeCommandLbl"));

        gridLayout_3->addWidget(corrCodeCommandLbl, 1, 0, 1, 1);

        corrCodeLangLbl = new QLabel(gridLayoutWidget_3);
        corrCodeLangLbl->setObjectName(QString::fromUtf8("corrCodeLangLbl"));

        gridLayout_3->addWidget(corrCodeLangLbl, 0, 0, 1, 1);

        corrCodeLangCbox = new QComboBox(gridLayoutWidget_3);
        corrCodeLangCbox->setObjectName(QString::fromUtf8("corrCodeLangCbox"));

        gridLayout_3->addWidget(corrCodeLangCbox, 0, 1, 1, 1);

        corrCodeCommandLEdit = new QLineEdit(gridLayoutWidget_3);
        corrCodeCommandLEdit->setObjectName(QString::fromUtf8("corrCodeCommandLEdit"));

        gridLayout_3->addWidget(corrCodeCommandLEdit, 1, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(centralWidget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(450, 210, 261, 80));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        tstMakerCommandLbl = new QLabel(gridLayoutWidget_4);
        tstMakerCommandLbl->setObjectName(QString::fromUtf8("tstMakerCommandLbl"));

        gridLayout_4->addWidget(tstMakerCommandLbl, 1, 0, 1, 1);

        tstMakerLangLbl = new QLabel(gridLayoutWidget_4);
        tstMakerLangLbl->setObjectName(QString::fromUtf8("tstMakerLangLbl"));

        gridLayout_4->addWidget(tstMakerLangLbl, 0, 0, 1, 1);

        tstMakerLangCbox = new QComboBox(gridLayoutWidget_4);
        tstMakerLangCbox->setObjectName(QString::fromUtf8("tstMakerLangCbox"));

        gridLayout_4->addWidget(tstMakerLangCbox, 0, 1, 1, 1);

        tstMakerCommandLEdit = new QLineEdit(gridLayoutWidget_4);
        tstMakerCommandLEdit->setObjectName(QString::fromUtf8("tstMakerCommandLEdit"));

        gridLayout_4->addWidget(tstMakerCommandLEdit, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 719, 25));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionReset);
        menuMenu->addAction(actionQuit);

        retranslateUi(MainWindow);

        yourCodeLangCbox->setCurrentIndex(1);
        corrCodeLangCbox->setCurrentIndex(1);
        tstMakerLangCbox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Judge", 0, QApplication::UnicodeUTF8));
        actionReset->setText(QApplication::translate("MainWindow", "&Reset", 0, QApplication::UnicodeUTF8));
        actionReset->setShortcut(QApplication::translate("MainWindow", "R", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Q", 0, QApplication::UnicodeUTF8));
        tstMakerLbl->setText(QApplication::translate("MainWindow", "Test Maker:", 0, QApplication::UnicodeUTF8));
        tstMakerBtn->setText(QApplication::translate("MainWindow", "Ch&oose", 0, QApplication::UnicodeUTF8));
        corrCodeLbl->setText(QApplication::translate("MainWindow", "Correct Code:", 0, QApplication::UnicodeUTF8));
        yourCodeLbl->setText(QApplication::translate("MainWindow", "Your Code:", 0, QApplication::UnicodeUTF8));
        testsCountLbl->setText(QApplication::translate("MainWindow", "How Many Test:", 0, QApplication::UnicodeUTF8));
        timeLbl->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Time(s):</p></body></html>", 0, QApplication::UnicodeUTF8));
        corrCodeBtn->setText(QApplication::translate("MainWindow", "C&hoose", 0, QApplication::UnicodeUTF8));
        yourCodeBtn->setText(QApplication::translate("MainWindow", "&Choose", 0, QApplication::UnicodeUTF8));
        statusLbl->setText(QApplication::translate("MainWindow", "Status:", 0, QApplication::UnicodeUTF8));
        judgeBtn->setText(QApplication::translate("MainWindow", "&Judge", 0, QApplication::UnicodeUTF8));
        compileOutputBtn->setText(QApplication::translate("MainWindow", "Com&pile Output", 0, QApplication::UnicodeUTF8));
        lstInputBtn->setText(QApplication::translate("MainWindow", "Last &Input", 0, QApplication::UnicodeUTF8));
        yourOutBtn->setText(QApplication::translate("MainWindow", "&Your Output", 0, QApplication::UnicodeUTF8));
        corrOutBtn->setText(QApplication::translate("MainWindow", "Correct O&utput", 0, QApplication::UnicodeUTF8));
        resetBtn->setText(QApplication::translate("MainWindow", "&Reset", 0, QApplication::UnicodeUTF8));
        quitBtn->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        yourCodeCommandLbl->setText(QApplication::translate("MainWindow", "Command:", 0, QApplication::UnicodeUTF8));
        yourCodeLangLbl->setText(QApplication::translate("MainWindow", "Your Code Language:", 0, QApplication::UnicodeUTF8));
        yourCodeLangCbox->clear();
        yourCodeLangCbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "C++", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Other", 0, QApplication::UnicodeUTF8)
        );
        yourCodeCommandLEdit->setText(QApplication::translate("MainWindow", "g++ -lm", 0, QApplication::UnicodeUTF8));
        corrCodeCommandLbl->setText(QApplication::translate("MainWindow", "Command:", 0, QApplication::UnicodeUTF8));
        corrCodeLangLbl->setText(QApplication::translate("MainWindow", "Correct Code Language:", 0, QApplication::UnicodeUTF8));
        corrCodeLangCbox->clear();
        corrCodeLangCbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "C++", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Other", 0, QApplication::UnicodeUTF8)
        );
        corrCodeCommandLEdit->setText(QApplication::translate("MainWindow", "g++ -lm", 0, QApplication::UnicodeUTF8));
        tstMakerCommandLbl->setText(QApplication::translate("MainWindow", "Command:", 0, QApplication::UnicodeUTF8));
        tstMakerLangLbl->setText(QApplication::translate("MainWindow", "Test Maker Language:", 0, QApplication::UnicodeUTF8));
        tstMakerLangCbox->clear();
        tstMakerLangCbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "C++", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Other", 0, QApplication::UnicodeUTF8)
        );
        tstMakerCommandLEdit->setText(QApplication::translate("MainWindow", "g++ -lm", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("MainWindow", "&Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
