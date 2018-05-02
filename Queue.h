/*Krzysztof Kobyliñski
Projekt 2 na PROI*/

#ifndef multidictionary_definition
#define multidictionary_definition

#include <iostream>
using namespace std;

/* Szablon klasy reprezentujacą listę - multisłownik*/

//ktype - parametr reprezentujacy typ klucza
//vtype - parametr reprezentujacy typ wartosci

/*template <typename ktype, typename vtype>
class Que;

template <typename ktype, typename vtype>
bool comparison(Que <ktype, vtype> a, Que <ktype, vtype> b);*/

template <typename ktype, typename vtype>
class Que
{

    /*Element kolejki zawierający klucz, wartość, wskazanie na kolejny element
    oraz wskazanie na poprzedni element*/

    struct Element
    {
        Element *next, *prev;
        ktype key;
        vtype value;
        Element(ktype k,vtype v):key(k), value(v), next(nullptr), prev(nullptr){}

    };

    //Pierwszy i ostatni element kolejki

    Element *qfirst, *qlast;
    //Rozmiar kolejki
    int size;

    public:

    Que();  //konstruktor
    ~Que(); //destruktor
    void add_front(ktype, vtype); //dodawanie na poczatek
    //void add_back(ktype, vtype); //dodawanie na koniec
    void delet(ktype, vtype); //usuwanie danego elementu
    void change(ktype, vtype); //Zmiana wartosci wskazywanej przez klucz
    vtype findvalue(ktype); //Wyszukanie wartosci dla danego klucza
    int howmany(ktype); //Podanie liczby elementow o zadanym kluczu
    void print(); //Drukowanie słownika
    int Size(); // metoda podajaca rozmiar slownika

    //Zaprzyjazniona funkcja porownujaca dwa slowniki

    friend
    bool comparison  (Que<ktype, vtype> a, Que<ktype, vtype> b )
   {

    if(a.Size()!=b.Size()) return false;


    Element  *p, *q;
    p=a.qfirst;

    q=b.qfirst;


    while(p)
    {
        if(p->key!=q->key || p->value!=q->value)
        {
            return false;
        }
        p=p->next;
        q=q->next;

    }

    return true;

    }

};


//Konstruktor
template <typename ktype, typename vtype>
Que<ktype, vtype>::Que()
{
    qfirst = qlast = nullptr;
    size=0;
}

//Destruktor
template <typename ktype, typename vtype>
Que<ktype, vtype>::~Que()
{
    Element <ktype, vtype> * p;

    while (qfirst)
    {
        p=qfirst;
        if(!qfirst->next)
            break;
        qfirst=qfirst->next;
        delete p;
    }
}


//Dodawanie elementu na poczatek slownika
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

    size++;
}

//Usuwanie elementu ze słownika
template <typename ktype, typename vtype>
void Que<ktype, vtype>::delet(ktype k, vtype v)
{
    Element *p;
    p=qfirst;
    bool found=0;

    while (p)
    {
        //Szukanie danej pary do usuniecia
        if(p->key==k && p->value==v)
        {
            if(p->prev)
            p->prev->next=p->next;
            else
            qfirst=p->next;
            if(p->next)
            p->next->prev=p->prev;
            else
            qlast=p->prev;
         //   delete p;
            size--;
            found=1;
        }

        p=p->next;
    }

    //Jesli nie znaleziono danej pary
    if(!found)
        cout<<"Nie znaleziono pary do usuniecia"<<endl;
}

//Zmienianie wartosci wszystkich elementow o podanym kluczu
template <typename ktype, typename vtype>
void Que<ktype, vtype>::change(ktype k, vtype v)
{
    Element *p;
    p=qfirst;
    bool hit=0;
    while(p)
    {
        if(p->key==k)
        {
            p->value=v;
            hit=1;
        }
        p=p->next;
    }
    if(!hit)
        cout<<"Nie znaleziono elementu o podanym kluczu"<<endl;
}


//Zliczanie ilosci elementow o podanym kluczu?
template <typename ktype, typename vtype>
int Que<ktype, vtype>::howmany(ktype k)
{
    Element *p;
    p=qfirst;
    int amount=0;
    while(p)
    {
        if(p->key==k)
        {
            amount++;
        }
        p=p->next;
    }
    return amount;
}

//Drukowanie slownika
template <typename ktype, typename vtype>
void Que<ktype, vtype>::print()
{
    Element *p;
    p=qfirst;
    while(p)
    {
        cout<<p->key<<" "<<p->value<<endl;
        p=p->next;
    }
}

//Zwracanie rozmiaru slownika
template <typename ktype, typename vtype>
int Que<ktype, vtype>::Size()
{
   return size;
}


//Wyszukiwanie wartosci pierwszego elementu o podanym kluczu
template <typename ktype, typename vtype>
vtype Que<ktype, vtype>::findvalue(ktype k)
{
    Element *p;
    p=qfirst;
    while(p)
    {
        if(p->key==k)
        {
           return p->value;
        }
        p=p->next;
    }

        cout<<"Nie znaleziono elementu o podanym kluczu"<<endl;
}

#endif // multidictionary_definition
