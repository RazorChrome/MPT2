#ifndef MEMORY_H
#define MEMORY_H

#pragma once

using namespace std;

template <class T>
class Memory
{
private:
    T Fnumber;
    bool Fstate;
public:
    Memory()
    {
        Fnumber = *(new T);
        Fstate = false;
    }

    void write(T n)
    {
        Fnumber = n;
        Fstate = true;
    }

    T get()
    {
        return Fnumber;
    }

    void add(T n)
    {
        Fnumber = Fnumber + n;
        Fstate = true;
    }

    void clear()
    {
        Fnumber = *(new T);
        Fstate = false;
    }

    bool getState()
    {
        return Fstate;
    }
};

#endif // MEMORY_H
