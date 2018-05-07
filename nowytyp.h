#ifndef nowytyp_definition
#define nowytyp_definition

#include <iostream>
using namespace std;

//Nowy zdefiniowany typ

class Type
{
//Zawiera w sobie znak oraz zmienna typu double
char znak;
double indeks;

public:
    Type(char z='a', double i=0); //konstruktor
    bool operator==(Type const &v); //Przeciazenie operatora przyrownania
    void operator=(Type const &v);  //Przeciazenie operatora przypisania
     bool operator!=(Type const &v);  //Porownywanie wektorow


    //Funkcja zaprzyjazniona drukujaca wektor
    friend
    ostream& operator<< (ostream &os, const Type &v);
};


#endif // nowytyp_definition
