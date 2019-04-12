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
    QAction *lastactions;
    QAction *AboutAction;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *MulpushButton;
    QPushButton *DividepushButton;
    QPushButton *CEpushButton;
    QPushButton *pB4;
    QPushButton *pB1;
    QPushButton *pB0;
    QLineEdit *MemStatus;
    QPushButton *pB9;
    QPushButton *pB1divx;
    QPushButton *DotpushButton;
    QPushButton *PluspushButton;
    QPushButton *MpluspushButton;
    QPushButton *MRpushButton;
    QPushButton *MinuspushButton;
    QPushButton *MCpushButton;
    QPushButton *pB7;
    QLineEdit *Input;
    QPushButton *CpushButton;
    QPushButton *ResultpushButton;
    QPushButton *PlusMinuspushButton;
    QPushButton *pB2;
    QPushButton *pB5;
    QSpacerItem *verticalSpacer;
    QPushButton *SqrtpushButton;
    QPushButton *MSpushButton;
    QPushButton *pB3;
    QPushButton *BSpushButton;
    QPushButton *pB8;
    QPushButton *pB6;
    QPushButton *pBA;
    QPushButton *pBB;
    QPushButton *pBC;
    QPushButton *pBD;
    QPushButton *pBE;
    QPushButton *pBF;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QSpinBox *BasespinBox;
    QSlider *BasehorizontalSlider;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(349, 328);
        MainWindow->setMinimumSize(QSize(349, 328));
        MainWindow->setMaximumSize(QSize(349, 328));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../calculator-icon-png_131279.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        lastactions = new QAction(MainWindow);
        lastactions->setObjectName(QStringLiteral("lastactions"));
        AboutAction = new QAction(MainWindow);
        AboutAction->setObjectName(QStringLiteral("AboutAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 331, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        MulpushButton = new QPushButton(gridLayoutWidget);
        MulpushButton->setObjectName(QStringLiteral("MulpushButton"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MulpushButton->setPalette(palette);

        gridLayout->addWidget(MulpushButton, 3, 4, 1, 1);

        DividepushButton = new QPushButton(gridLayoutWidget);
        DividepushButton->setObjectName(QStringLiteral("DividepushButton"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        DividepushButton->setPalette(palette1);

        gridLayout->addWidget(DividepushButton, 2, 4, 1, 1);

        CEpushButton = new QPushButton(gridLayoutWidget);
        CEpushButton->setObjectName(QStringLiteral("CEpushButton"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        CEpushButton->setPalette(palette2);

        gridLayout->addWidget(CEpushButton, 1, 3, 1, 1);

        pB4 = new QPushButton(gridLayoutWidget);
        pB4->setObjectName(QStringLiteral("pB4"));
        QPalette palette3;
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB4->setPalette(palette3);

        gridLayout->addWidget(pB4, 3, 1, 1, 1);

        pB1 = new QPushButton(gridLayoutWidget);
        pB1->setObjectName(QStringLiteral("pB1"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB1->setPalette(palette4);

        gridLayout->addWidget(pB1, 4, 1, 1, 1);

        pB0 = new QPushButton(gridLayoutWidget);
        pB0->setObjectName(QStringLiteral("pB0"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB0->setPalette(palette5);

        gridLayout->addWidget(pB0, 5, 1, 1, 1);

        MemStatus = new QLineEdit(gridLayoutWidget);
        MemStatus->setObjectName(QStringLiteral("MemStatus"));
        MemStatus->setEnabled(false);

        gridLayout->addWidget(MemStatus, 1, 0, 1, 1);

        pB9 = new QPushButton(gridLayoutWidget);
        pB9->setObjectName(QStringLiteral("pB9"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB9->setPalette(palette6);

        gridLayout->addWidget(pB9, 2, 3, 1, 1);

        pB1divx = new QPushButton(gridLayoutWidget);
        pB1divx->setObjectName(QStringLiteral("pB1divx"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB1divx->setPalette(palette7);

        gridLayout->addWidget(pB1divx, 3, 5, 1, 1);

        DotpushButton = new QPushButton(gridLayoutWidget);
        DotpushButton->setObjectName(QStringLiteral("DotpushButton"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        DotpushButton->setPalette(palette8);

        gridLayout->addWidget(DotpushButton, 5, 3, 1, 1);

        PluspushButton = new QPushButton(gridLayoutWidget);
        PluspushButton->setObjectName(QStringLiteral("PluspushButton"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        PluspushButton->setPalette(palette9);

        gridLayout->addWidget(PluspushButton, 5, 4, 1, 1);

        MpluspushButton = new QPushButton(gridLayoutWidget);
        MpluspushButton->setObjectName(QStringLiteral("MpluspushButton"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MpluspushButton->setPalette(palette10);

        gridLayout->addWidget(MpluspushButton, 5, 0, 1, 1);

        MRpushButton = new QPushButton(gridLayoutWidget);
        MRpushButton->setObjectName(QStringLiteral("MRpushButton"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MRpushButton->setPalette(palette11);

        gridLayout->addWidget(MRpushButton, 3, 0, 1, 1);

        MinuspushButton = new QPushButton(gridLayoutWidget);
        MinuspushButton->setObjectName(QStringLiteral("MinuspushButton"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MinuspushButton->setPalette(palette12);

        gridLayout->addWidget(MinuspushButton, 4, 4, 1, 1);

        MCpushButton = new QPushButton(gridLayoutWidget);
        MCpushButton->setObjectName(QStringLiteral("MCpushButton"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MCpushButton->setPalette(palette13);

        gridLayout->addWidget(MCpushButton, 2, 0, 1, 1);

        pB7 = new QPushButton(gridLayoutWidget);
        pB7->setObjectName(QStringLiteral("pB7"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB7->setPalette(palette14);

        gridLayout->addWidget(pB7, 2, 1, 1, 1);

        Input = new QLineEdit(gridLayoutWidget);
        Input->setObjectName(QStringLiteral("Input"));

        gridLayout->addWidget(Input, 0, 0, 1, 7);

        CpushButton = new QPushButton(gridLayoutWidget);
        CpushButton->setObjectName(QStringLiteral("CpushButton"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        CpushButton->setPalette(palette15);

        gridLayout->addWidget(CpushButton, 1, 4, 1, 2);

        ResultpushButton = new QPushButton(gridLayoutWidget);
        ResultpushButton->setObjectName(QStringLiteral("ResultpushButton"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ResultpushButton->setPalette(palette16);

        gridLayout->addWidget(ResultpushButton, 5, 5, 1, 1);

        PlusMinuspushButton = new QPushButton(gridLayoutWidget);
        PlusMinuspushButton->setObjectName(QStringLiteral("PlusMinuspushButton"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        PlusMinuspushButton->setPalette(palette17);

        gridLayout->addWidget(PlusMinuspushButton, 5, 2, 1, 1);

        pB2 = new QPushButton(gridLayoutWidget);
        pB2->setObjectName(QStringLiteral("pB2"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB2->setPalette(palette18);

        gridLayout->addWidget(pB2, 4, 2, 1, 1);

        pB5 = new QPushButton(gridLayoutWidget);
        pB5->setObjectName(QStringLiteral("pB5"));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB5->setPalette(palette19);

        gridLayout->addWidget(pB5, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        SqrtpushButton = new QPushButton(gridLayoutWidget);
        SqrtpushButton->setObjectName(QStringLiteral("SqrtpushButton"));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        SqrtpushButton->setPalette(palette20);

        gridLayout->addWidget(SqrtpushButton, 2, 5, 1, 1);

        MSpushButton = new QPushButton(gridLayoutWidget);
        MSpushButton->setObjectName(QStringLiteral("MSpushButton"));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MSpushButton->setPalette(palette21);

        gridLayout->addWidget(MSpushButton, 4, 0, 1, 1);

        pB3 = new QPushButton(gridLayoutWidget);
        pB3->setObjectName(QStringLiteral("pB3"));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB3->setPalette(palette22);

        gridLayout->addWidget(pB3, 4, 3, 1, 1);

        BSpushButton = new QPushButton(gridLayoutWidget);
        BSpushButton->setObjectName(QStringLiteral("BSpushButton"));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        BSpushButton->setPalette(palette23);

        gridLayout->addWidget(BSpushButton, 1, 1, 1, 2);

        pB8 = new QPushButton(gridLayoutWidget);
        pB8->setObjectName(QStringLiteral("pB8"));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB8->setPalette(palette24);

        gridLayout->addWidget(pB8, 2, 2, 1, 1);

        pB6 = new QPushButton(gridLayoutWidget);
        pB6->setObjectName(QStringLiteral("pB6"));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB6->setPalette(palette25);

        gridLayout->addWidget(pB6, 3, 3, 1, 1);

        pBA = new QPushButton(gridLayoutWidget);
        pBA->setObjectName(QStringLiteral("pBA"));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBA->setPalette(palette26);

        gridLayout->addWidget(pBA, 6, 0, 1, 1);

        pBB = new QPushButton(gridLayoutWidget);
        pBB->setObjectName(QStringLiteral("pBB"));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBB->setPalette(palette27);

        gridLayout->addWidget(pBB, 6, 1, 1, 1);

        pBC = new QPushButton(gridLayoutWidget);
        pBC->setObjectName(QStringLiteral("pBC"));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBC->setPalette(palette28);

        gridLayout->addWidget(pBC, 6, 2, 1, 1);

        pBD = new QPushButton(gridLayoutWidget);
        pBD->setObjectName(QStringLiteral("pBD"));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBD->setPalette(palette29);

        gridLayout->addWidget(pBD, 6, 3, 1, 1);

        pBE = new QPushButton(gridLayoutWidget);
        pBE->setObjectName(QStringLiteral("pBE"));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBE->setPalette(palette30);

        gridLayout->addWidget(pBE, 6, 4, 1, 1);

        pBF = new QPushButton(gridLayoutWidget);
        pBF->setObjectName(QStringLiteral("pBF"));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBF->setPalette(palette31);

        gridLayout->addWidget(pBF, 6, 5, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 220, 331, 51));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        BasespinBox = new QSpinBox(gridLayoutWidget_2);
        BasespinBox->setObjectName(QStringLiteral("BasespinBox"));
        BasespinBox->setMinimum(2);
        BasespinBox->setMaximum(16);
        BasespinBox->setValue(10);

        gridLayout_2->addWidget(BasespinBox, 1, 0, 1, 1);

        BasehorizontalSlider = new QSlider(gridLayoutWidget_2);
        BasehorizontalSlider->setObjectName(QStringLiteral("BasehorizontalSlider"));
        BasehorizontalSlider->setMinimum(2);
        BasehorizontalSlider->setMaximum(16);
        BasehorizontalSlider->setValue(10);
        BasehorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(BasehorizontalSlider, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 349, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(lastactions);
        menu_2->addAction(AboutAction);

        retranslateUi(MainWindow);
        QObject::connect(BasespinBox, SIGNAL(valueChanged(int)), BasehorizontalSlider, SLOT(setValue(int)));
        QObject::connect(BasehorizontalSlider, SIGNAL(valueChanged(int)), BasespinBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 P \321\207\320\270\321\201\320\265\320\273", 0));
        lastactions->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270", 0));
#ifndef QT_NO_TOOLTIP
        lastactions->setToolTip(QApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\271", 0));
#endif // QT_NO_TOOLTIP
        AboutAction->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 ", 0));
        MulpushButton->setText(QApplication::translate("MainWindow", "X", 0));
        DividepushButton->setText(QApplication::translate("MainWindow", "\303\267", 0));
        CEpushButton->setText(QApplication::translate("MainWindow", "CE", 0));
        pB4->setText(QApplication::translate("MainWindow", "4", 0));
        pB1->setText(QApplication::translate("MainWindow", "1", 0));
        pB0->setText(QApplication::translate("MainWindow", "0", 0));
        pB9->setText(QApplication::translate("MainWindow", "9", 0));
        pB1divx->setText(QApplication::translate("MainWindow", "1/x", 0));
        DotpushButton->setText(QApplication::translate("MainWindow", ",", 0));
        PluspushButton->setText(QApplication::translate("MainWindow", "+", 0));
        MpluspushButton->setText(QApplication::translate("MainWindow", "M+", 0));
        MRpushButton->setText(QApplication::translate("MainWindow", "MR", 0));
        MinuspushButton->setText(QApplication::translate("MainWindow", "-", 0));
        MCpushButton->setText(QApplication::translate("MainWindow", "MC", 0));
        pB7->setText(QApplication::translate("MainWindow", "7", 0));
        CpushButton->setText(QApplication::translate("MainWindow", "C", 0));
        ResultpushButton->setText(QApplication::translate("MainWindow", "=", 0));
        PlusMinuspushButton->setText(QApplication::translate("MainWindow", "+/-", 0));
        pB2->setText(QApplication::translate("MainWindow", "2", 0));
        pB5->setText(QApplication::translate("MainWindow", "5", 0));
        SqrtpushButton->setText(QApplication::translate("MainWindow", "\342\210\232", 0));
        MSpushButton->setText(QApplication::translate("MainWindow", "MS", 0));
        pB3->setText(QApplication::translate("MainWindow", "3", 0));
        BSpushButton->setText(QApplication::translate("MainWindow", "BackSpace", 0));
        pB8->setText(QApplication::translate("MainWindow", "8", 0));
        pB6->setText(QApplication::translate("MainWindow", "6", 0));
        pBA->setText(QApplication::translate("MainWindow", "A", 0));
        pBB->setText(QApplication::translate("MainWindow", "B", 0));
        pBC->setText(QApplication::translate("MainWindow", "C", 0));
        pBD->setText(QApplication::translate("MainWindow", "D", 0));
        pBE->setText(QApplication::translate("MainWindow", "E", 0));
        pBF->setText(QApplication::translate("MainWindow", "F", 0));
        label->setText(QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
