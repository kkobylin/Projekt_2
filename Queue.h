/*Krzysztof Kobyliñski
Projekt 2 na PROI*/

#ifndef que_definition
#define que_definition

#include <iostream>
using namespace std;

/* Szablon klasy reprezentujacą kolejkę*/

template <typename ktype, typename vtype>
class Que
{
public:
    struct Element
    {
        Element *next, *prev;
        ktype key;
        vtype value;
        Element(ktype k,vtype v):key(k), value(v), next(nullptr), prev(nullptr){}
    };

    Element *qfirst, *qlast;
    int size;


    Que();  //konstruktor
    ~Que(); //destruktor
    int Size(); //rozmiar listy
    void add_front(ktype, vtype); //dodawanie na poczatek
    void add_back(ktype, vtype); //dodawanie na koniec
    void erase(Element *); //usuwanie danego elementu

};
#endif

template <typename ktype, typename vtype>
Que<ktype, vtype>::Que()
{
    qfirst = qlast = nullptr;
    size=0;
}

template <typename ktype, typename vtype>
Que<ktype, vtype>::~Que()
{
    Element * p;
    while(qfirst)
    {
        p=qfirst->next;
        delete qfirst;
        qfirst = p;
    }
}

template <typename ktype, typename vtype>
int Que<ktype, vtype>::Size()
{
    return size;
}


template <typename ktype, typename vtype>
void Que<ktype, vtype>::add_front(ktype k, vtype v)
{
    Element* newElement = new Element(k, v); //alokowanie pamieci na nowy element
    if(this->qfirst == nullptr) this->qfirst = newElement; //Jesli kolejka pusta
    else
    {
        newElement->next = this->qfirst;
        this->qfirst->prev = newElement;
        this->qfirst = newElement;
    }
}


