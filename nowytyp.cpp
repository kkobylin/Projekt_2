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

void Type::operator=(Type const &v)
{
    znak=v.znak;

    indeks=v.indeks;

}

ostream& operator<< (ostream &os, const Type &v)
{

    os<<v.znak<<" "<<v.indeks;
    os<<endl;

    return os;
}

bool Type::operator!=(Type const &v)
{


    if(znak==v.znak && indeks==v.indeks)

    return 0;
    else return 1;

}

