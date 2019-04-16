#include "pnumber.h"

Pnumber::Pnumber() {
    a = 0;
    b = 10;
}

Pnumber::Pnumber(double x, int y) {
    b = y;
    if (b >= 2 && b <= b16) {
        a = x;
    }
    else {
        a = 0;
        b = b10;
    }
}

Pnumber::Pnumber(string sa, string sb) {
    istringstream(sb) >> b;
    a = 0;
    int sign = 1, top = 0, bot = 0;
    int pos =  sa.find('.');
    if(pos > 0 && pos < sa.size())
    {
        top = pos;
        bot = sa.size() - top;
    }
    else
    {
        top = sa.size();
    }

    for (int i = top; i > -bot; --i)
    {
        char tmp = sa.at(top - i);
        if(tmp == '-')
        {
            sign *= -1;
            continue;
        }
        if (b > b10)
        {
            if (tmp > c6 + b)
            {
                a = 0;
                b = b10;
                return;
            }
        }
        else
        {
            if (tmp > c0 - 1 + b)
            {
                a = 0;
                b = b10;
                return;
            }
        }
        if(tmp >= c0 && tmp <= c9)
        {
            if(i > 0) a += (tmp - c0) * pow(b, i - 1);
            else a += (tmp - c0) * pow(b, i);
        }
        else if (tmp >= cA && tmp <= cF)
        {
            if(i > 0) a += (tmp - cA + b10) * pow(b, i - 1);
            else a += (tmp - cA + b10) * pow(b, i);
        }
    }
    a *= sign;
};


double Pnumber::getA() {
    return a;
}

string Pnumber::getAstring() {
    stringstream ss;
    if (a == 0) ss << "0";
    else if (b == b10)
    {
        ss << a;
    }
    else
    {
        double top = 0, bot = 0;
        double ua = a;
        bool sign = false;
        if (a < 0)
        {
            sign = true;
            ua *= -1;
        }

        string res = "";
        bot = modf(ua, &top);
        int itop = top;
        do
        {
            int tmp = itop % b;
            itop /= b;
            if(tmp >= 0 && tmp < b10)
            {
                char c = c0 + tmp;
                string sc(1,c);
                res.insert(0,sc);
            }
            else if (tmp >= b10 && tmp <= F)
            {
                char c = cA - b10 + tmp;
                string sc(1,c);
                res.insert(0,sc);
                //res.insert(0,);
            }
        } while (itop > 0);
        if(bot > 0.0)
        {
            int counter = 0;
            res += '.';
            double tmp1 = 0;
            while(bot > 0.0 && counter < maxPrecision)
            {
                bot *= b;

                bot = modf(bot, &tmp1);
                int itmp = tmp1;
                if(itmp >= 0 && itmp < b10)
                {
                    char c = c0 + itmp;
                    res+= c;
                }
                else if (itmp >= b10 && itmp <= F)
                {
                    char c = cA - A + itmp;
                    res += c;
                }
                counter++;
            }
        }
        char s = cMinus;
        string sc(1,s);
        if (sign) res.insert(0, sc);
        ss << res;
    }
    return ss.str();
}

int Pnumber::getB() {
    return b;
}

string Pnumber::getBstring() {
    stringstream ss;
    ss << b;
    return ss.str();
}

void Pnumber::setB(int x) {
    if (x >= 2 && x <= b16)
        b = x;
}

void Pnumber::setBstring(string str) {
    stringstream ss( str );
    int b_tmp;
    ss >> b_tmp;
    if (b_tmp >= 2 && b_tmp <= b16) b = b_tmp;
}

Pnumber Pnumber::operator + (const Pnumber &p2) {
    if(a == 0 && b == 10)
        return Pnumber(p2.a, p2.b);
    else
        return Pnumber(a+p2.a,b);
};

Pnumber Pnumber::operator * (const Pnumber &p2) {
    return Pnumber(a * p2.a, b);
};

Pnumber Pnumber::operator - (const Pnumber &p2) {
    return Pnumber(a - p2.a, b);
};

Pnumber Pnumber::operator / (const Pnumber &p2) {
    return Pnumber(a / p2.a, b);
};

Pnumber Pnumber::reverse() {
    return Pnumber(1 / a, b);
};

Pnumber Pnumber::square() {
    return Pnumber(a * a, b);
};


Pnumber Pnumber::operator = (const Pnumber &p2) {
    a = p2.a;
    b = p2.b;
};

bool Pnumber::operator ==(const Pnumber &p2)
{
    if(a == p2.a && b == p2.b) return true;
    return false;
};
