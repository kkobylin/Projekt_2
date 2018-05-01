#include "nowytyp.h"
#include <iostream>
using namespace std;

Type::Type(char z,double i)
{
    znak=z;
    indeks=i;
}

bool Type::operator==(Type const &v)
{

    if(v.znak==znak && v.indeks==indeks)
        return 1;
    else
        return 0;
}
