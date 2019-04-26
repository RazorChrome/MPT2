#ifndef PROC_H
#define PROC_H
#include <cmath>

enum {
    None = 100,
    Add,
    Sub,
    Mul,
    Dvd,

};

template<class C>
class Proc
{
private:
    C Lop_Res, Rop;
    int Operation;
public:
    Proc()
    {
        Lop_Res = C();
        Rop = C();
        Operation = None;
    }


    void reset()
    {
        Lop_Res = C();
        Rop = C();
        Operation = None;
    }

    void OptnClear()
    {
        Operation = None;
    }

    void OptnRun()
    {
        switch (Operation)
        {
        case Add: {
            Lop_Res = Lop_Res + Rop;
            break;
        }
        case Sub: {
            Lop_Res = Lop_Res - Rop;
            break;
        }
        case Mul: {
            Lop_Res = Lop_Res * Rop;
            break;
        }
        case Dvd: {
            Lop_Res = Lop_Res / Rop;
            break;
        }
        default:
            break;
        }
    }
    C getLeft()
    {
        return Lop_Res;
    }

    void setLeft(C Operand)
    {
        Lop_Res = Operand;
    }

    C getRight()
    {
        return Rop;
    }
    void setRight(C Operand)
    {
        Rop = Operand;
    }

    int getOptn()
    {
        return Operation;
    }

    void setOptn(int Oprtn)
    {
        Operation = Oprtn;
    }
};

#endif // PROC_H
