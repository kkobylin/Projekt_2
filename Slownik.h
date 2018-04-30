/*Krzysztof Kobyliñski
Projekt 2 na PROI*/

#ifndef multidictionary_definition
#define multidictionary_definition

#include <iostream>

using namespace std;

/* Szablon klasy reprezentujący multisłownik.*/

template <typename key_type, typename type_value>
class Multidict
{
    key_type key; //Klucz danej pary
    type_value value; //Wartosc danej pary
    int size; //rozmiar slownika

    public:

    Vec(int =5); //Konstruktor
    ~Vec(); //Destruktor
    void push


    //Funkcja zaprzyjazniona drukujaca wektor
    friend
    ostream& operator<< (ostream &os, const Vec &v);

    //Funkcja zaprzyjazniona wczytujaca wektor
    friend
    istream& operator>>(istream &is, Vec &v);


};
#endif
