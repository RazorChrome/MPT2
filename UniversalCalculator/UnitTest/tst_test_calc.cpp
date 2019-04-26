#include <QtTest>
#include "../UniversalCalculator/proc.h"
#include "../UniversalCalculator/pnumber.cpp"
#include "../UniversalCalculator/pnumber.h"
#include "../UniversalCalculator/memory.h"
#include "string"
// add necessary includes here

class Test_Calc : public QObject
{
    Q_OBJECT

public:
    Test_Calc();
    ~Test_Calc();

private slots:
    void test_Memwrite();
    void test_Memadd();
    void test_Memclear();
    void test_MemgetState();
    void test_ProcReset();
    void test_OptnClear();
    void test_OptnRun();
    void test_OptnRun_data();
    void test_OperSquare();
    void test_OperRev();
    void test_OperPlus();
    void test_OperMinus();
    void test_OperMul();
    void test_OperDiv();
    void test_Test();
    void test_Test1();
    void test_Test2();

};

Test_Calc::Test_Calc()
{

}

Test_Calc::~Test_Calc()
{

}

void Test_Calc::test_Memwrite()
{
    Memory<int> m;
    m.write(12);
    QCOMPARE(12,m.get());

}
void Test_Calc::test_Memadd(){
    Memory<int> a;
    a.write(20);
    a.add(30);
    QCOMPARE(50,a.get());
}
void Test_Calc::test_Memclear(){
    Memory<double> d;
    d.write(1.44);
    d.clear();
    bool state = false;
    QCOMPARE(state,d.getState());

}
void Test_Calc::test_MemgetState(){
    Memory<int> i;
    Memory <double> od;
    i.write(220);
    bool on = true;
    bool off = false;
    QCOMPARE(on,i.getState());
    QCOMPARE(off,od.getState());
}
void Test_Calc::test_ProcReset(){
    Proc<int> i;
    i.setLeft(10);
    i.setRight(20);
    QCOMPARE(100,i.getOptn());
}
void Test_Calc::test_OptnClear(){
 Proc <double> d;
 d.setOptn(Mul);
 d.OptnClear();
 QCOMPARE(100,d.getOptn());
}
void Test_Calc::test_OptnRun_data(){
   QTest::addColumn<int>("left");
   QTest::addColumn<int>("right");
   QTest::addColumn<int>("optn");
   QTest::addColumn<int>("res");
  int add = Add;
  int mul = Mul;
  int sub = Sub;
  int dvd = Dvd;
   QTest::newRow("OpntRun_test1") << 220 << 80 << add << 300;
   QTest::newRow("OpntRun_test2") << 12 << 12 << mul << 144;
   QTest::newRow("OpntRun_test3") << 300 << 220 << sub << 80;
   QTest::newRow("OpntRun_test4") << 88 << 4 << dvd << 22;

}
void Test_Calc::test_OptnRun(){
    QFETCH(int,left);
    QFETCH(int,right);
    QFETCH(int,optn);
    QFETCH(int,res);
    Proc<int> p;
    p.setLeft(left);
    p.setRight(right);
    p.setOptn(optn);
    p.OptnRun();
    QCOMPARE(res,p.getLeft());
    Proc <int> t;
    t.setLeft(5);
    t.setRight(5);
    t.setOptn(Add);
    t.OptnRun();
    QCOMPARE(10,t.getLeft());
}
void Test_Calc::test_OperSquare(){
    Pnumber p(5.0,10);
    Pnumber sp = p.square();
    QCOMPARE(25.0,sp.getA());
}

void Test_Calc::test_OperPlus(){
    Pnumber a(5.0,10);
    Pnumber b(2.0,10);
    Pnumber sp = a + b;
    QCOMPARE(7.0,sp.getA());
}
void Test_Calc::test_OperMinus(){
    Pnumber a(300.0,10);
    Pnumber b(100.0,10);
    Pnumber minp = a - b;
    QCOMPARE(200.0,minp.getA());
}
void Test_Calc::test_OperMul(){
    Pnumber a(10.0,10);
    Pnumber b(220.0,10);
    Pnumber mp = a * b;
    QCOMPARE(2200.0, mp.getA());
}
void Test_Calc::test_OperDiv(){
    Pnumber a(99.0,10);
    Pnumber b(4.0,10);
    Pnumber dp = a / b;
    QCOMPARE(24.75,dp.getA());
}
void Test_Calc::test_OperRev(){
    Pnumber p(0.5,10);
    Pnumber rp = p.reverse();
    QCOMPARE(2.0,rp.getA());
}
void Test_Calc::test_Test(){
    Pnumber p(6.0,10);
    QCOMPARE(6.0,p.getA());
    Pnumber q = p.square();
    QCOMPARE(36.0,q.getA());
    Pnumber s(2.0,10);
    QCOMPARE(2.0,s.getA());
    Pnumber u = s.square();
    QCOMPARE(4.0,u.getA());
    Pnumber t = q + u;
    QCOMPARE(40.0,t.getA());
    Pnumber w(10,10);
    QCOMPARE(10.0,w.getA());
    Pnumber e = t / w;
    QCOMPARE(4.0,e.getA());
    Pnumber r(6.0,10);
    QCOMPARE(6.0, r.getA());
    Pnumber y = e + r;
    QCOMPARE(10.0, y.getA());

}
void Test_Calc::test_Test1(){
    string cs = "-2";
    string  ds = "-3";
    string sb = "10";
    string res = "1";
    Pnumber c(cs,sb);
    Pnumber d(ds,sb);
    Pnumber val = c - d;
    QCOMPARE(1.0,val.getA());
}
void Test_Calc::test_Test2(){
    string cs = "-2";
    string sb = "10";
    Pnumber p(cs,sb);
    QCOMPARE(-2.0,p.getA());
}




QTEST_APPLESS_MAIN(Test_Calc)

#include "tst_test_calc.moc"
