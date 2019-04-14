/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
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
    QPushButton *pBE;
    QPushButton *DotpushButton;
    QPushButton *pB4;
    QPushButton *PlusMinuspushButton;
    QPushButton *BSpushButton;
    QPushButton *pB8;
    QPushButton *pB0;
    QPushButton *pBC;
    QPushButton *pBB;
    QPushButton *pB1;
    QPushButton *pB1divx;
    QSpacerItem *verticalSpacer;
    QPushButton *pBD;
    QPushButton *PluspushButton;
    QPushButton *MpluspushButton;
    QPushButton *CpushButton;
    QPushButton *pB7;
    QLineEdit *MemStatus;
    QPushButton *SqrtpushButton;
    QPushButton *pB3;
    QPushButton *DividepushButton;
    QLineEdit *Result;
    QPushButton *pB2;
    QPushButton *pBA;
    QPushButton *MCpushButton;
    QPushButton *MinuspushButton;
    QPushButton *ResultpushButton;
    QPushButton *CEpushButton;
    QPushButton *MSpushButton;
    QPushButton *MulpushButton;
    QPushButton *pB6;
    QPushButton *pBF;
    QPushButton *pB5;
    QPushButton *pB9;
    QPushButton *MRpushButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QSpinBox *BasespinBox;
    QSlider *BasehorizontalSlider;
    QLabel *label;
    QLineEdit *Input;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 360);
        MainWindow->setMinimumSize(QSize(500, 360));
        MainWindow->setMaximumSize(QSize(500, 360));
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
        gridLayoutWidget->setGeometry(QRect(10, 30, 482, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pBE = new QPushButton(gridLayoutWidget);
        pBE->setObjectName(QStringLiteral("pBE"));
        pBE->setEnabled(false);
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBE->setPalette(palette);

        gridLayout->addWidget(pBE, 7, 4, 1, 1);

        DotpushButton = new QPushButton(gridLayoutWidget);
        DotpushButton->setObjectName(QStringLiteral("DotpushButton"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        DotpushButton->setPalette(palette1);

        gridLayout->addWidget(DotpushButton, 6, 3, 1, 1);

        pB4 = new QPushButton(gridLayoutWidget);
        pB4->setObjectName(QStringLiteral("pB4"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB4->setPalette(palette2);

        gridLayout->addWidget(pB4, 4, 1, 1, 1);

        PlusMinuspushButton = new QPushButton(gridLayoutWidget);
        PlusMinuspushButton->setObjectName(QStringLiteral("PlusMinuspushButton"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        PlusMinuspushButton->setPalette(palette3);

        gridLayout->addWidget(PlusMinuspushButton, 6, 2, 1, 1);

        BSpushButton = new QPushButton(gridLayoutWidget);
        BSpushButton->setObjectName(QStringLiteral("BSpushButton"));
        QPalette palette4;
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        BSpushButton->setPalette(palette4);

        gridLayout->addWidget(BSpushButton, 2, 1, 1, 2);

        pB8 = new QPushButton(gridLayoutWidget);
        pB8->setObjectName(QStringLiteral("pB8"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB8->setPalette(palette5);

        gridLayout->addWidget(pB8, 3, 2, 1, 1);

        pB0 = new QPushButton(gridLayoutWidget);
        pB0->setObjectName(QStringLiteral("pB0"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB0->setPalette(palette6);

        gridLayout->addWidget(pB0, 6, 1, 1, 1);

        pBC = new QPushButton(gridLayoutWidget);
        pBC->setObjectName(QStringLiteral("pBC"));
        pBC->setEnabled(false);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBC->setPalette(palette7);

        gridLayout->addWidget(pBC, 7, 2, 1, 1);

        pBB = new QPushButton(gridLayoutWidget);
        pBB->setObjectName(QStringLiteral("pBB"));
        pBB->setEnabled(false);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBB->setPalette(palette8);

        gridLayout->addWidget(pBB, 7, 1, 1, 1);

        pB1 = new QPushButton(gridLayoutWidget);
        pB1->setObjectName(QStringLiteral("pB1"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB1->setPalette(palette9);

        gridLayout->addWidget(pB1, 5, 1, 1, 1);

        pB1divx = new QPushButton(gridLayoutWidget);
        pB1divx->setObjectName(QStringLiteral("pB1divx"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB1divx->setPalette(palette10);

        gridLayout->addWidget(pB1divx, 4, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 2, 1, 1);

        pBD = new QPushButton(gridLayoutWidget);
        pBD->setObjectName(QStringLiteral("pBD"));
        pBD->setEnabled(false);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBD->setPalette(palette11);

        gridLayout->addWidget(pBD, 7, 3, 1, 1);

        PluspushButton = new QPushButton(gridLayoutWidget);
        PluspushButton->setObjectName(QStringLiteral("PluspushButton"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        PluspushButton->setPalette(palette12);

        gridLayout->addWidget(PluspushButton, 6, 4, 1, 1);

        MpluspushButton = new QPushButton(gridLayoutWidget);
        MpluspushButton->setObjectName(QStringLiteral("MpluspushButton"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MpluspushButton->setPalette(palette13);

        gridLayout->addWidget(MpluspushButton, 6, 0, 1, 1);

        CpushButton = new QPushButton(gridLayoutWidget);
        CpushButton->setObjectName(QStringLiteral("CpushButton"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        CpushButton->setPalette(palette14);

        gridLayout->addWidget(CpushButton, 2, 4, 1, 2);

        pB7 = new QPushButton(gridLayoutWidget);
        pB7->setObjectName(QStringLiteral("pB7"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB7->setPalette(palette15);

        gridLayout->addWidget(pB7, 3, 1, 1, 1);

        MemStatus = new QLineEdit(gridLayoutWidget);
        MemStatus->setObjectName(QStringLiteral("MemStatus"));
        MemStatus->setEnabled(false);
        MemStatus->setReadOnly(true);

        gridLayout->addWidget(MemStatus, 2, 0, 1, 1);

        SqrtpushButton = new QPushButton(gridLayoutWidget);
        SqrtpushButton->setObjectName(QStringLiteral("SqrtpushButton"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        SqrtpushButton->setPalette(palette16);

        gridLayout->addWidget(SqrtpushButton, 3, 5, 1, 1);

        pB3 = new QPushButton(gridLayoutWidget);
        pB3->setObjectName(QStringLiteral("pB3"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB3->setPalette(palette17);

        gridLayout->addWidget(pB3, 5, 3, 1, 1);

        DividepushButton = new QPushButton(gridLayoutWidget);
        DividepushButton->setObjectName(QStringLiteral("DividepushButton"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        DividepushButton->setPalette(palette18);

        gridLayout->addWidget(DividepushButton, 3, 4, 1, 1);

        Result = new QLineEdit(gridLayoutWidget);
        Result->setObjectName(QStringLiteral("Result"));
        Result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Result->setReadOnly(false);

        gridLayout->addWidget(Result, 0, 0, 1, 6);

        pB2 = new QPushButton(gridLayoutWidget);
        pB2->setObjectName(QStringLiteral("pB2"));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB2->setPalette(palette19);

        gridLayout->addWidget(pB2, 5, 2, 1, 1);

        pBA = new QPushButton(gridLayoutWidget);
        pBA->setObjectName(QStringLiteral("pBA"));
        pBA->setEnabled(false);
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBA->setPalette(palette20);

        gridLayout->addWidget(pBA, 7, 0, 1, 1);

        MCpushButton = new QPushButton(gridLayoutWidget);
        MCpushButton->setObjectName(QStringLiteral("MCpushButton"));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MCpushButton->setPalette(palette21);

        gridLayout->addWidget(MCpushButton, 3, 0, 1, 1);

        MinuspushButton = new QPushButton(gridLayoutWidget);
        MinuspushButton->setObjectName(QStringLiteral("MinuspushButton"));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MinuspushButton->setPalette(palette22);

        gridLayout->addWidget(MinuspushButton, 5, 4, 1, 1);

        ResultpushButton = new QPushButton(gridLayoutWidget);
        ResultpushButton->setObjectName(QStringLiteral("ResultpushButton"));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ResultpushButton->setPalette(palette23);

        gridLayout->addWidget(ResultpushButton, 6, 5, 1, 1);

        CEpushButton = new QPushButton(gridLayoutWidget);
        CEpushButton->setObjectName(QStringLiteral("CEpushButton"));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        CEpushButton->setPalette(palette24);

        gridLayout->addWidget(CEpushButton, 2, 3, 1, 1);

        MSpushButton = new QPushButton(gridLayoutWidget);
        MSpushButton->setObjectName(QStringLiteral("MSpushButton"));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MSpushButton->setPalette(palette25);

        gridLayout->addWidget(MSpushButton, 5, 0, 1, 1);

        MulpushButton = new QPushButton(gridLayoutWidget);
        MulpushButton->setObjectName(QStringLiteral("MulpushButton"));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MulpushButton->setPalette(palette26);

        gridLayout->addWidget(MulpushButton, 4, 4, 1, 1);

        pB6 = new QPushButton(gridLayoutWidget);
        pB6->setObjectName(QStringLiteral("pB6"));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB6->setPalette(palette27);

        gridLayout->addWidget(pB6, 4, 3, 1, 1);

        pBF = new QPushButton(gridLayoutWidget);
        pBF->setObjectName(QStringLiteral("pBF"));
        pBF->setEnabled(false);
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pBF->setPalette(palette28);

        gridLayout->addWidget(pBF, 7, 5, 1, 1);

        pB5 = new QPushButton(gridLayoutWidget);
        pB5->setObjectName(QStringLiteral("pB5"));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB5->setPalette(palette29);

        gridLayout->addWidget(pB5, 4, 2, 1, 1);

        pB9 = new QPushButton(gridLayoutWidget);
        pB9->setObjectName(QStringLiteral("pB9"));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pB9->setPalette(palette30);

        gridLayout->addWidget(pB9, 3, 3, 1, 1);

        MRpushButton = new QPushButton(gridLayoutWidget);
        MRpushButton->setObjectName(QStringLiteral("MRpushButton"));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MRpushButton->setPalette(palette31);

        gridLayout->addWidget(MRpushButton, 4, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 250, 481, 51));
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

        Input = new QLineEdit(centralWidget);
        Input->setObjectName(QStringLiteral("Input"));
        Input->setGeometry(QRect(10, 10, 481, 20));
        Input->setMaximumSize(QSize(486, 21));
        Input->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Input->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 21));
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
        pBE->setText(QApplication::translate("MainWindow", "E", 0));
        DotpushButton->setText(QApplication::translate("MainWindow", ",", 0));
        pB4->setText(QApplication::translate("MainWindow", "4", 0));
        PlusMinuspushButton->setText(QApplication::translate("MainWindow", "+/-", 0));
#ifndef QT_NO_TOOLTIP
        BSpushButton->setToolTip(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214  \320\272\321\200\320\260\320\271\320\275\320\270\320\271 \321\201\320\270\320\274\320\262\320\276\320\273 \321\201\320\277\321\200\320\260\320\262\320\260 \320\276\321\202 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\260\320\265\320\274\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\260", 0));
#endif // QT_NO_TOOLTIP
        BSpushButton->setText(QApplication::translate("MainWindow", "BackSpace", 0));
        pB8->setText(QApplication::translate("MainWindow", "8", 0));
        pB0->setText(QApplication::translate("MainWindow", "0", 0));
        pBC->setText(QApplication::translate("MainWindow", "C", 0));
        pBB->setText(QApplication::translate("MainWindow", "B", 0));
        pB1->setText(QApplication::translate("MainWindow", "1", 0));
        pB1divx->setText(QApplication::translate("MainWindow", "1/x", 0));
        pBD->setText(QApplication::translate("MainWindow", "D", 0));
        PluspushButton->setText(QApplication::translate("MainWindow", "+", 0));
#ifndef QT_NO_TOOLTIP
        MpluspushButton->setToolTip(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\274\321\203 \320\277\320\260\320\274\321\217\321\202\320\270", 0));
#endif // QT_NO_TOOLTIP
        MpluspushButton->setText(QApplication::translate("MainWindow", "M+", 0));
        CpushButton->setText(QApplication::translate("MainWindow", "C", 0));
        pB7->setText(QApplication::translate("MainWindow", "7", 0));
#ifndef QT_NO_TOOLTIP
        MemStatus->setToolTip(QApplication::translate("MainWindow", "\320\225\321\201\320\273\320\270 \320\277\320\260\320\274\321\217\321\202\321\214 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\320\260 \320\262\321\213\320\262\320\276\320\264\320\270\321\202\321\201\321\217 \"M\"", 0));
#endif // QT_NO_TOOLTIP
        SqrtpushButton->setText(QApplication::translate("MainWindow", "\342\210\232", 0));
        pB3->setText(QApplication::translate("MainWindow", "3", 0));
        DividepushButton->setText(QApplication::translate("MainWindow", "/", 0));
        Result->setPlaceholderText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\270 \320\262\320\262\320\276\320\264", 0));
        pB2->setText(QApplication::translate("MainWindow", "2", 0));
        pBA->setText(QApplication::translate("MainWindow", "A", 0));
#ifndef QT_NO_TOOLTIP
        MCpushButton->setToolTip(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\277\320\260\320\274\321\217\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        MCpushButton->setText(QApplication::translate("MainWindow", "MC", 0));
        MinuspushButton->setText(QApplication::translate("MainWindow", "-", 0));
        ResultpushButton->setText(QApplication::translate("MainWindow", "=", 0));
        CEpushButton->setText(QApplication::translate("MainWindow", "CE", 0));
#ifndef QT_NO_TOOLTIP
        MSpushButton->setToolTip(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        MSpushButton->setText(QApplication::translate("MainWindow", "MS", 0));
        MulpushButton->setText(QApplication::translate("MainWindow", "*", 0));
        pB6->setText(QApplication::translate("MainWindow", "6", 0));
        pBF->setText(QApplication::translate("MainWindow", "F", 0));
        pB5->setText(QApplication::translate("MainWindow", "5", 0));
        pB9->setText(QApplication::translate("MainWindow", "9", 0));
#ifndef QT_NO_TOOLTIP
        MRpushButton->setToolTip(QApplication::translate("MainWindow", "\320\232\320\276\320\277\321\200\320\276\320\262\320\260\321\202\321\214 (\320\262\321\213\320\262\320\276\320\264 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\260 \321\201 \320\277\320\260\320\274\321\217\321\202\320\270)", 0));
#endif // QT_NO_TOOLTIP
        MRpushButton->setText(QApplication::translate("MainWindow", "MR", 0));
#ifndef QT_NO_TOOLTIP
        BasespinBox->setToolTip(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\207\320\270\321\201\320\273\320\260 \320\276\321\202 2 \320\264\320\276 16", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BasehorizontalSlider->setToolTip(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\207\320\270\321\201\320\273\320\260", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        Input->setText(QString());
        Input->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
