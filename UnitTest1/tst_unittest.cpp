#include <QtTest>
#include <QString>

// add necessary includes here

class UnitTest : public QObject
{
    Q_OBJECT

public:
    UnitTest();
    ~UnitTest();

private slots:
    void test_Do();
    void test_Do_data();
    void test_intToChar();
    void test_intToChar_data();
    void test_intToP();
    void test_intToP_data();
    void test_fltToP();
    void test_fltToP_data();
};

UnitTest::UnitTest()
{



}

UnitTest::~UnitTest()
{

}
void UnitTest::test_Do_data()
{
    QTest::addColumn<double>("n");
    QTest::addColumn<int>("p");
    QTest::addColumn<int>("c");
    QTest::addColumn<QString>("expected"); \

    QTest::newRow("compare01") << -17.875 << 16 << 3 << "-A1.E";
}


void UnitTest::test_Do()
{
    //Class c;
    QFETCH(int, p);
    QFETCH(int,c);
    QFETCH(QString, expected);

    QString actual = ""; //c.nameclass(n,p,c)
    QCOMPARE(actual, expected);


}
void UnitTest::test_intToChar_data()
{

    QTest::addColumn<int>("d");
    QTest::addColumn<char>("expected"); \

    QTest::newRow("compare01") << 14 << "E";
    QTest::newRow("compare02") << 15 << "F";
    QTest::newRow("compare03") << 13 << "D";
    QTest::newRow("compare04") << 12 << "C";
    QTest::newRow("compare05") << 11 << "B";
    QTest::newRow("compare06") << 10 << "A";
}


void UnitTest::test_intToChar()
{
    //Class c;
    QFETCH(int,d);
    QFETCH(char, expected);

    char actual = 'a'; //c.nameclass(d)
    QCOMPARE(actual, expected);


}

void UnitTest::test_intToP_data()
{

    QTest::addColumn<int>("n");
    QTest::addColumn<int>("p");
    QTest::addColumn<QString>("expected"); \

    QTest::newRow("compare01") << 161 << 16 << "A1";

}


void UnitTest::test_intToP()
{
    //Class c;
    QFETCH(int,n);
    QFETCH(int,p);
    QFETCH(QString, expected);

    QString actual = "a"; //c.nameclass(n,p);
    QCOMPARE(actual, expected);


}

void UnitTest::test_fltToP_data()
{

    QTest::addColumn<double>("n");
    QTest::addColumn<int>("p");
    QTest::addColumn<int>("c");
    QTest::addColumn<QString>("expected"); \

    QTest::newRow("compare01") << 0.9375 << 2 << 4 << "1111";

}


void UnitTest::test_fltToP()
{
    //Class c;
    QFETCH(double,n);
    QFETCH(int,p);
    QFETCH(int,c);
    QFETCH(QString, expected);

    QString actual = "a"; //c.nameclass(n,p,c);
    QCOMPARE(actual, expected);


}




QTEST_APPLESS_MAIN(UnitTest)

#include "tst_unittest.moc"
