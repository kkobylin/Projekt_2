/*Krzysztof Kobyliñski
Projekt 2 na PROI*/

#ifndef element_definition
#define element_definition

#include <iostream>

using namespace std;

/* Szablon klasy reprezentującej element kolejki*/

template <typename key_type, typename type_value>
class Element
{
public:
    Element *next, *prev;
    key_type key;
    type_value value;

Element(key_type ekey=0, type_value eval=0)
{
    key=ekey;
    value=eval;
    next=nullptr;
    prev=nullptr;
}

~Element()
{
    next=nullptr;
    prev=nullptr;
}

};
#endif
