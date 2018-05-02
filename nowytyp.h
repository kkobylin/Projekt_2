#ifndef nowytyp_definition
#define nowytyp_definition

#include <iostream>
using namespace std;

class Type
{

char znak;
double indeks;

public:
    Type(char z='a', double i=0);
    bool operator==(Type const &v);
    void operator=(Type const &v);
     bool operator!=(Type const &v);  //Porownywanie wektorow

    //Funkcja zaprzyjazniona drukujaca wektor
    friend
    ostream& operator<< (ostream &os, const Type &v);
};


#endif // nowytyp_definition
