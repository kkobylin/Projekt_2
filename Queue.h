/*Krzysztof Kobyliñski
Projekt 2 na PROI*/

#ifndef que_definition
#define que_definition

#include <iostream>
#include "element.h"
using namespace std;

/* Szablon klasy reprezentujacą kolejkę*/

template <typename key_type, typename type_value>
class Que
{
public:


    Element <key_type,type_value> *qfirst, *qlast;
    int size;


    Que();  //konstruktor
    ~Que(); //destruktor
    int Size(); //rozmiar listy
    Element <key_type,type_value>* add_front(key_type, type_value); //dodawanie na poczatek
    Element <key_type,type_value>* add_back(key_type, type_value); //dodawanie na koniec
    Element <key_type,type_value>* erase(Element *); //usuwanie danego elementu

};
#endif
