/*Krzysztof Kobyliñski
Projekt 2 na PROI*/

#ifndef multidictionarytestintvector_definition
#define multidictionarytestintvector_definition

#include <iostream>
#include "Queue.h"
#include "vector.h"
#include "nowytyp.h"
using namespace std;

/*Szablon Klasy testującej klasę Multisłownika <int, string>*/

class Testit
{
    //Dwa obiekty reprezentujące multisłowniki
    Que <int, Type> dictionary1, dictionary2;

    public:
        bool testadd  (); //metoda testująca dodawanie elementów
        bool testprint (); //metoda testująca drukowanie słownika
        bool testdelete(); // metoda testująca usuwanie elemntów
        bool testchange (); //metoda testująca podmianę wartości
        bool testfind (); // metoda testująca wyszukiwanie wartości
        bool testhowmany (); //metoda testujaca zliczanie elementow o podanym kluczu
        bool testsize (); //metoda testujaca podawanie rozmiaru slownika
       // bool testcom(); //metoda testujaca porownywanie slownikow
        void cleaning(); //metoda czyszczaca po ostatnim tescie

};

#endif
