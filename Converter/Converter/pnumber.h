#ifndef PNUMBER_H
#define PNUMBER_H
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>

enum{
    c0 = '0',
    c1,
    c2,
    c3,
    c4,
    c5,
    c6,
    c7,
    c8,
    c9,
    cA = 'A',
    cB,
    cC,
    cD,
    cE,
    cF,
    cDot = '.',
    cMinus = '-'
};

enum{
    A = 10,
    B,
    C,
    D,
    E,
    F,
    Dot
};

enum{
    b10 = 10,
    b11,
    b12,
    b13,
    b14,
    b15,
    b16
};

using namespace std;

class Pnumber {
private:
    double a;
    int b;
    const int maxPrecision = 18;
public:
    Pnumber();
    Pnumber(double x, int y);
    Pnumber(string sa, string sb);
    double getA();
    string getAstring();
    int getB();
    string getBstring();
    void setB(int x);
    void setBstring(string str);

};

#endif // PNUMBER_H
