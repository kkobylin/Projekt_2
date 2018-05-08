/*Krzysztof Kobyliñski
Projekt 2 na PROI*/
#include "nowytyp.h"
#include <iostream>
using namespace std;

//Konstruktor klasy
Type::Type(char z,double i)
{
    znak=z;
    indeks=i;
}

//Przeciazenie operatora == dla klasy
bool Type::operator==(Type const &v)
{

    if(v.znak==znak && v.indeks==indeks)
        return true;
    else
        return false;
}

//Przeciazenie operatora = dla klasy
void Type::operator=(Type const &v)
{
    znak=v.znak;

    indeks=v.indeks;

}

//Przeciazenie operatora << dla klasy
ostream& operator<< (ostream &os, const Type &v)
{

    os<<v.znak<<" "<<v.indeks;
    os<<endl;

    return os;
}

//Przeciazenie operatora != dla klasy
bool Type::operator!=(Type const &v)
{


    if(znak==v.znak && indeks==v.indeks)

    return false;
    else return true;

}

