#include "converter.h"

Converter::Converter()
{
}

Pnumber Converter::convert(Pnumber p, int to)
{
    p.setB(to);
    return p;
}
