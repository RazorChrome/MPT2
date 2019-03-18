/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *About;
    QAction *History;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditRes;
    QSpinBox *spinBoxResBase;
    QLabel *label;
    QSpinBox *spinBoxBase;
    QLineEdit *lineEditFrom;
    QLabel *label_2;
    QSlider *horizontalSliderFrom;
    QSpacerItem *verticalSpacer;
    QSlider *horizontalSliderRes;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pB_4;
    QPushButton *pB_6;
    QPushButton *pB_C;
    QPushButton *pB_2;
    QPushButton *pB_7;
    QPushButton *pB_3;
    QPushButton *pB_A;
    QPushButton *pB_E;
    QPushButton *pB_D;
    QPushButton *pB_1;
    QPushButton *pB_9;
    QPushButton *pB_dot;
    QPushButton *pB_B;
    QPushButton *pB_0;
    QPushButton *pB_F;
    QPushButton *pB_5;
    QPushButton *pB_8;
    QPushButton *pB_BS;
    QPushButton *pB_CE;
    QPushButton *pB_Exec;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(253, 466);
        MainWindow->setMinimumSize(QSize(253, 466));
        MainWindow->setMaximumSize(QSize(253, 466));
        About = new QAction(MainWindow);
        About->setObjectName(QStringLiteral("About"));
        History = new QAction(MainWindow);
        History->setObjectName(QStringLiteral("History"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 241, 162));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditRes = new QLineEdit(gridLayoutWidget);
        lineEditRes->setObjectName(QStringLiteral("lineEditRes"));
        lineEditRes->setReadOnly(true);

        gridLayout->addWidget(lineEditRes, 3, 0, 1, 2);

        spinBoxResBase = new QSpinBox(gridLayoutWidget);
        spinBoxResBase->setObjectName(QStringLiteral("spinBoxResBase"));
        spinBoxResBase->setMinimum(2);
        spinBoxResBase->setMaximum(16);
        spinBoxResBase->setValue(16);

        gridLayout->addWidget(spinBoxResBase, 4, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBoxBase = new QSpinBox(gridLayoutWidget);
        spinBoxBase->setObjectName(QStringLiteral("spinBoxBase"));
        spinBoxBase->setMinimum(2);
        spinBoxBase->setMaximum(16);
        spinBoxBase->setValue(10);

        gridLayout->addWidget(spinBoxBase, 1, 1, 1, 1);

        lineEditFrom = new QLineEdit(gridLayoutWidget);
        lineEditFrom->setObjectName(QStringLiteral("lineEditFrom"));
        lineEditFrom->setReadOnly(false);

        gridLayout->addWidget(lineEditFrom, 0, 0, 1, 2);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        horizontalSliderFrom = new QSlider(gridLayoutWidget);
        horizontalSliderFrom->setObjectName(QStringLiteral("horizontalSliderFrom"));
        horizontalSliderFrom->setInputMethodHints(Qt::ImhNone);
        horizontalSliderFrom->setMinimum(2);
        horizontalSliderFrom->setMaximum(16);
        horizontalSliderFrom->setValue(10);
        horizontalSliderFrom->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderFrom, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 2);

        horizontalSliderRes = new QSlider(gridLayoutWidget);
        horizontalSliderRes->setObjectName(QStringLiteral("horizontalSliderRes"));
        horizontalSliderRes->setInputMethodHints(Qt::ImhDigitsOnly);
        horizontalSliderRes->setMinimum(2);
        horizontalSliderRes->setMaximum(16);
        horizontalSliderRes->setValue(16);
        horizontalSliderRes->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRes, 5, 0, 1, 2);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 180, 239, 231));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pB_4 = new QPushButton(gridLayoutWidget_2);
        pB_4->setObjectName(QStringLiteral("pB_4"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_4->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pB_4->setFont(font);

        gridLayout_2->addWidget(pB_4, 1, 0, 1, 1);

        pB_6 = new QPushButton(gridLayoutWidget_2);
        pB_6->setObjectName(QStringLiteral("pB_6"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_6->setPalette(palette1);
        pB_6->setFont(font);

        gridLayout_2->addWidget(pB_6, 1, 2, 1, 1);

        pB_C = new QPushButton(gridLayoutWidget_2);
        pB_C->setObjectName(QStringLiteral("pB_C"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_C->setPalette(palette2);
        pB_C->setFont(font);

        gridLayout_2->addWidget(pB_C, 4, 1, 1, 1);

        pB_2 = new QPushButton(gridLayoutWidget_2);
        pB_2->setObjectName(QStringLiteral("pB_2"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_2->setPalette(palette3);
        pB_2->setFont(font);

        gridLayout_2->addWidget(pB_2, 0, 1, 1, 1);

        pB_7 = new QPushButton(gridLayoutWidget_2);
        pB_7->setObjectName(QStringLiteral("pB_7"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_7->setPalette(palette4);
        pB_7->setFont(font);

        gridLayout_2->addWidget(pB_7, 2, 0, 1, 1);

        pB_3 = new QPushButton(gridLayoutWidget_2);
        pB_3->setObjectName(QStringLiteral("pB_3"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_3->setPalette(palette5);
        pB_3->setFont(font);

        gridLayout_2->addWidget(pB_3, 0, 2, 1, 1);

        pB_A = new QPushButton(gridLayoutWidget_2);
        pB_A->setObjectName(QStringLiteral("pB_A"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_A->setPalette(palette6);
        pB_A->setFont(font);

        gridLayout_2->addWidget(pB_A, 3, 2, 1, 1);

        pB_E = new QPushButton(gridLayoutWidget_2);
        pB_E->setObjectName(QStringLiteral("pB_E"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_E->setPalette(palette7);
        pB_E->setFont(font);

        gridLayout_2->addWidget(pB_E, 5, 0, 1, 1);

        pB_D = new QPushButton(gridLayoutWidget_2);
        pB_D->setObjectName(QStringLiteral("pB_D"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_D->setPalette(palette8);
        pB_D->setFont(font);

        gridLayout_2->addWidget(pB_D, 4, 2, 1, 1);

        pB_1 = new QPushButton(gridLayoutWidget_2);
        pB_1->setObjectName(QStringLiteral("pB_1"));
        QPalette palette9;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
        //palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
       // palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
       // palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
        pB_1->setPalette(palette9);
        pB_1->setFont(font);

        gridLayout_2->addWidget(pB_1, 0, 0, 1, 1);

        pB_9 = new QPushButton(gridLayoutWidget_2);
        pB_9->setObjectName(QStringLiteral("pB_9"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_9->setPalette(palette10);
        pB_9->setFont(font);

        gridLayout_2->addWidget(pB_9, 2, 2, 1, 1);

        pB_dot = new QPushButton(gridLayoutWidget_2);
        pB_dot->setObjectName(QStringLiteral("pB_dot"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_dot->setPalette(palette11);
        pB_dot->setFont(font);

        gridLayout_2->addWidget(pB_dot, 3, 0, 1, 1);

        pB_B = new QPushButton(gridLayoutWidget_2);
        pB_B->setObjectName(QStringLiteral("pB_B"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_B->setPalette(palette12);
        pB_B->setFont(font);

        gridLayout_2->addWidget(pB_B, 4, 0, 1, 1);

        pB_0 = new QPushButton(gridLayoutWidget_2);
        pB_0->setObjectName(QStringLiteral("pB_0"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_0->setPalette(palette13);
        pB_0->setFont(font);

        gridLayout_2->addWidget(pB_0, 3, 1, 1, 1);

        pB_F = new QPushButton(gridLayoutWidget_2);
        pB_F->setObjectName(QStringLiteral("pB_F"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_F->setPalette(palette14);
        pB_F->setFont(font);

        gridLayout_2->addWidget(pB_F, 5, 1, 1, 1);

        pB_5 = new QPushButton(gridLayoutWidget_2);
        pB_5->setObjectName(QStringLiteral("pB_5"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_5->setPalette(palette15);
        pB_5->setFont(font);

        gridLayout_2->addWidget(pB_5, 1, 1, 1, 1);

        pB_8 = new QPushButton(gridLayoutWidget_2);
        pB_8->setObjectName(QStringLiteral("pB_8"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_8->setPalette(palette16);
        pB_8->setFont(font);

        gridLayout_2->addWidget(pB_8, 2, 1, 1, 1);

        pB_BS = new QPushButton(gridLayoutWidget_2);
        pB_BS->setObjectName(QStringLiteral("pB_BS"));
        QPalette palette17;
        QBrush brush4(QColor(170, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_BS->setPalette(palette17);

        gridLayout_2->addWidget(pB_BS, 6, 0, 1, 1);

        pB_CE = new QPushButton(gridLayoutWidget_2);
        pB_CE->setObjectName(QStringLiteral("pB_CE"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB_CE->setPalette(palette18);

        gridLayout_2->addWidget(pB_CE, 6, 1, 1, 1);

        pB_Exec = new QPushButton(gridLayoutWidget_2);
        pB_Exec->setObjectName(QStringLiteral("pB_Exec"));
        pB_Exec->setFont(font);

        gridLayout_2->addWidget(pB_Exec, 6, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 253, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(History);
        menu_2->addAction(About);

        retranslateUi(MainWindow);
        QObject::connect(spinBoxBase, SIGNAL(valueChanged(int)), horizontalSliderFrom, SLOT(setValue(int)));
        QObject::connect(spinBoxResBase, SIGNAL(valueChanged(int)), horizontalSliderRes, SLOT(setValue(int)));
        QObject::connect(horizontalSliderFrom, SIGNAL(valueChanged(int)), spinBoxBase, SLOT(setValue(int)));
        QObject::connect(horizontalSliderRes, SIGNAL(valueChanged(int)), spinBoxResBase, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Converter", 0));
        About->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        History->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217", 0));
        lineEditRes->setPlaceholderText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", 0));
        label->setText(QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\201 \321\201\321\207. \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\260      ", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\201 \321\201\321\207. \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\260", 0));
        pB_4->setText(QApplication::translate("MainWindow", "4", 0));
        pB_6->setText(QApplication::translate("MainWindow", "6", 0));
        pB_C->setText(QApplication::translate("MainWindow", "C", 0));
        pB_2->setText(QApplication::translate("MainWindow", "2", 0));
        pB_7->setText(QApplication::translate("MainWindow", "7", 0));
        pB_3->setText(QApplication::translate("MainWindow", "3", 0));
        pB_A->setText(QApplication::translate("MainWindow", "A", 0));
        pB_E->setText(QApplication::translate("MainWindow", "E", 0));
        pB_D->setText(QApplication::translate("MainWindow", "D", 0));
        pB_1->setText(QApplication::translate("MainWindow", "1", 0));
        pB_9->setText(QApplication::translate("MainWindow", "9", 0));
        pB_dot->setText(QApplication::translate("MainWindow", ".", 0));
        pB_B->setText(QApplication::translate("MainWindow", "B", 0));
        pB_0->setText(QApplication::translate("MainWindow", "0", 0));
        pB_F->setText(QApplication::translate("MainWindow", "F", 0));
        pB_5->setText(QApplication::translate("MainWindow", "5", 0));
        pB_8->setText(QApplication::translate("MainWindow", "8", 0));
        pB_BS->setText(QApplication::translate("MainWindow", "BackSpace", 0));
        pB_CE->setText(QApplication::translate("MainWindow", "CE", 0));
        pB_Exec->setText(QApplication::translate("MainWindow", "Execute", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
