#include <QtTest>

// add necessary includes here

class Test_Calc : public QObject
{
    Q_OBJECT

public:
    Test_Calc();
    ~Test_Calc();

private slots:
    void test_case1();

};

Test_Calc::Test_Calc()
{

}

Test_Calc::~Test_Calc()
{

}

void Test_Calc::test_case1()
{

}

QTEST_APPLESS_MAIN(Test_Calc)

#include "tst_test_calc.moc"
