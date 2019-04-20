#include <QtTest>
#include "../Converter/pnumber.h"
#include "../Converter/pnumber.cpp"
#include "string"

class Test_PNumber : public QObject
{
    Q_OBJECT

public:
    Test_PNumber();
    ~Test_PNumber();



private slots:

    void getA();
    void getA_data();
    void getAstring();
    void getB();
    void getB_data();
    void getBstring();
    void setB();
    void setB_data();
    void setBstring();

};

Test_PNumber::Test_PNumber()
{

}

Test_PNumber::~Test_PNumber()
{

}


void Test_PNumber::getA_data(){
      QTest::addColumn<double>("arg1");
      QTest::addColumn<int>("arg2");
      QTest::addColumn<double>("result");
      QTest::newRow("getA_test1") << 6.0 << 2 << 6.0;
      QTest::newRow("getA_test2") << -12.2 << 3 << -12.2;
      QTest::newRow("getA_test3") << 7.8 << 10 << 7.8;
      QTest::newRow("getA_test4") << 3.5 << 2 << 3.5;

}

void Test_PNumber::getA(){
    QFETCH(double, arg1);
    QFETCH(int, arg2);
    QFETCH(double, result);
   Pnumber p(arg1,arg2);
    QCOMPARE(p.getA(),result);
   // Pnumber pnum(6,10);
    //QCOMPARE(pnum.getA(),6.0);

}


void Test_PNumber::getAstring(){

    Pnumber pnum(9.5,10);
    string a("9.5");
    QCOMPARE(pnum.getAstring(),a);
}

void Test_PNumber::getB_data(){
      QTest::addColumn<double>("a");
      QTest::addColumn<int>("b");
      QTest::addColumn<int>("res");
      QTest::newRow("getB_test1") << 6.0 << 2 << 2;
      QTest::newRow("getB_test2") << -12.0 << 3 << 3;
      QTest::newRow("getB_test3") << 7.0 << 10 << 10;
      QTest::newRow("getB_test4") << 3.0 << 2 << 2;
}
void Test_PNumber::getB(){
    QFETCH(double, a);
    QFETCH(int,b);
    QFETCH(int,res);
    Pnumber p(a,b);
    QCOMPARE(p.getB(),res);
}

void Test_PNumber::getBstring(){

    Pnumber pnum(8.5,10);
    string b("10");
    QCOMPARE(pnum.getBstring(),b);
}
void Test_PNumber::setB_data(){
    QTest::addColumn<int>("b");
    QTest::addColumn<int>("res");
    QTest::newRow("setB_test1") <<  2 << 2;
    QTest::newRow("setB_test2") <<  3 << 3;
    QTest::newRow("setB_test3") <<  10 << 10;
    QTest::newRow("setB_test4") <<  16 << 16;

}

void Test_PNumber::setB(){
    Pnumber p;
    QFETCH(int,b);
    QFETCH(int,res);
    p.setB(b);
    QCOMPARE(p.getB(),res);

}
void Test_PNumber::setBstring(){

    Pnumber pnum;
    string b("10");
    pnum.setBstring(b);
    QCOMPARE(pnum.getBstring(),b);
}



QTEST_APPLESS_MAIN(Test_PNumber)

#include "tst_test_pnumber.moc"
