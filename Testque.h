/*Krzysztof Kobyliñski
Projekt 2 na PROI*/

#ifndef multidictionarytest_definition
#define multidictionarytest_definition

#include <iostream>
#include "Queue.h"
#include "vector.h"
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
using namespace std;

/*Szablon Klasy testującej klasę Multisłownika*/

template <typename ktype, typename vtype>
class Testque
{
    //Dwa obiekty reprezentujące multisłowniki
    Que <ktype, vtype> dictionary1, dictionary2;

    public:
        int testadd  (); //metoda testująca dodawanie elementów
        int testprint (); //metoda testująca drukowanie słownika
        int testdelete(); // metoda testująca usuwanie elemntów
        int testchange (); //metoda testująca podmianę wartości
        int testfind (); // metoda testująca wyszukiwanie wartości
        int testhowmany (); //metoda testujaca zliczanie elementow o podanym kluczu
        int testsize (); //metoda testujaca podawanie rozmiaru slownika
        int testcom(); //metoda testujaca porownywanie slownikow
        void cleaning(); //metoda czyszczaca po ostatnim tescie

};

    template <typename ktype, typename vtype>
    int Testque <ktype, vtype>:: testadd  ()
    {
        ktype k;
        vtype v;
        for(;;)
        {
            char wybor;
            cout << "1.Wstawienie nowej pary do slownika 1." << endl;
            cout << "2.Wstawienie nowej pary do slownika 2." << endl;
            cout << "3.Zakonczenie testu wstawiania" << endl;
            wybor=getch();

            switch(wybor)
            {
            case '1':
                cout<<"Podaj pare (klucz, wartosc)"<<endl;
                cin>>k>>v;
                dictionary1.add_front(k,v);
                cout<<"Gotowe"<<endl;
                break;
            case '2':
                cout<<"Podaj pare (klucz, wartosc)"<<endl;
                cin>>k>>v;
                dictionary2.add_front(k,v);
                cout<<"Gotowe"<<endl;
                break;
            case '3':
                return 1;
                break;

            default: cout<<"Nie ma takiej opcji w menu"<<endl;
            }
        }
    }

    template <typename ktype, typename vtype>
    int Testque <ktype, vtype>:: testprint  ()
    {
        for(;;)
        {
            char wybor;
            cout << "1.Drukowanie słownika 1." << endl;
            cout << "2.Drukowanie słownika 2." << endl;
            cout << "3.Zakonczenie testu drukowania" << endl;
            wybor=getch();

            switch(wybor)
            {
            case '1':
                dictionary1.print();
                cout<<"Gotowe"<<endl;
                break;
            case '2':
                dictionary2.print();
                cout<<"Gotowe"<<endl;
                break;
            case '3':
                return 1;
                break;
            default: cout<<"Nie ma takiej opcji w menu"<<endl;
            }
        }
    }

     template <typename ktype, typename vtype>
    int Testque <ktype, vtype>:: testdelete()
    {
        ktype k;
        vtype v;
        for(;;)
        {
            char wybor;
            cout << "1.Usuniecie elementu ze słownika 1." << endl;
            cout << "2.Usuniecie elementu ze słownika 2." << endl;
            cout << "3.Zakonczenie testu usuwania" << endl;
            wybor=getch();

            switch(wybor)
            {
            case '1':
                cout<<"Podaj klucz oraz wartość pary która chcesz usunąć"<<endl;
                cin>>k>>v;
                dictionary1.delet(k,v);
                cout<<"Gotowe"<<endl;
                break;
            case '2':
                cout<<"Podaj klucz oraz wartość pary która chcesz usunąć"<<endl;
                cin>>k>>v;
                dictionary2.delet(k,v);
                cout<<"Gotowe"<<endl;
                break;
            case '3':
                return 1;
                break;
            default: cout<<"Nie ma takiej opcji w menu"<<endl;
            }
        }
    }

    template <typename ktype, typename vtype>
    int Testque <ktype, vtype>:: testchange()
    {
        ktype k;
        vtype v;
        for(;;)
        {
            char wybor;
            cout << "1.Zmiana wartosci ze slownika 1." << endl;
            cout << "2.Zmiana wartosci ze slownika 2." << endl;
            cout << "3.Zakonczenie testu zmiany wartosci" << endl;
            wybor=getch();

            switch(wybor)
            {
            case '1':
                cout<<"Podaj klucz elementu ktory chcesz zmienic oraz nowa wartosc"<<endl;
                cin>>k>>v;
                dictionary1.change(k,v);
                cout<<"Gotowe"<<endl;
                break;
            case '2':
                cout<<"Podaj klucz elementu ktory chcesz zmienic oraz nowa wartosc"<<endl;
                cin>>k>>v;
                dictionary2.change(k,v);
                cout<<"Gotowe"<<endl;
                break;
            case '3':
                return 1;
                break;
            default: cout<<"Nie ma takiej opcji w menu"<<endl;
            }
        }
    }

    template <typename ktype, typename vtype>
    int Testque <ktype, vtype>:: testfind()
    {
        ktype k;
        for(;;)
        {
            char wybor;
            cout << "1.Zmiana wartosci ze słownika 1." << endl;
            cout << "2.Zmiana wartosci ze słownika 2." << endl;
            cout << "3.Zakonczenie testu wyszukiwania wartosci" << endl;
            wybor=getch();

            switch(wybor)
            {
            case '1':
                cout<<"Podaj klucz elementu ktorego wartosc chcesz odczytac"<<endl;
                cin>>k;
                dictionary1.findvalue(k);
                cout<<"Gotowe"<<endl;
                break;
            case '2':
                cout<<"Podaj klucz elementu ktorego wartosc chcesz odczytac"<<endl;
                cin>>k;
                dictionary2.findvalue(k);
                cout<<"Gotowe"<<endl;
                break;
            case '3':
                return 1;
                break;
            default: cout<<"Nie ma takiej opcji w menu"<<endl;
            }
        }
    }

    template <typename ktype, typename vtype>
    int Testque <ktype, vtype>:: testhowmany()
    {
        ktype k;
        for(;;)
        {
            char wybor;
            cout << "1.Podanie liczby elementow o zadanym kluczu ze słownika 1." << endl;
            cout << "2.Podanie liczby elementow o zadanym kluczu ze słownika 2." << endl;
            cout << "3.Zakonczenie testu zliczania elementow" << endl;
            wybor=getch();

            switch(wybor)
            {
            case '1':
                cout<<"Podaj klucz"<<endl;
                cin>>k;
                dictionary1.howmany(k);
                cout<<"Gotowe"<<endl;
                break;
            case '2':
                cout<<"Podaj klucz"<<endl;
                cin>>k;
                dictionary2.howmany(k);
                cout<<"Gotowe"<<endl;
                break;
            case '3':
                return 1;
                break;
            default: cout<<"Nie ma takiej opcji w menu"<<endl;
            }
        }
    }

    template <typename ktype, typename vtype>
    int Testque <ktype, vtype>:: testsize()
    {
        for(;;)
        {
            char wybor;
            cout << "1.Podanie rozmiaru słownika 1." << endl;
            cout << "2.Podanie rozmiaru słownika 2." << endl;
            cout << "3.Zakonczenie testu podawania rozmiaru slownika" << endl;
            wybor=getch();

            switch(wybor)
            {
            case '1':
                dictionary1.Size();
                cout<<"Gotowe"<<endl;
                break;
            case '2':
                dictionary2.Size();
                cout<<"Gotowe"<<endl;
                break;
            case '3':
                return 1;
                break;
            default: cout<<"Nie ma takiej opcji w menu"<<endl;
            }
        }
    }

    template <typename ktype, typename vtype>
    int Testque <ktype, vtype>:: testcom()
    {
        for(;;)
        {
            char wybor;
            cout << "1.Porownanie slownika 1 i 2" << endl;
            cout << "2.Zakonczenie testu porownywania" << endl;
            wybor=getch();

            switch(wybor)
            {
            case '1':
                if(comparison(dictionary1, dictionary2))
                    cout<<"Slowniki sa takie same"<<endl;
                else
                    cout<<"Slowniki sa rozne"<<endl;

                break;
            case '2':
                return 1;
            default: cout<<"Nie ma takiej opcji w menu"<<endl;
            }
        }
    }

    template <typename ktype, typename vtype>
    void Testque <ktype, vtype>:: cleaning()
    {
        dictionary1.~Que();
        dictionary2.~Que();
    }
#endif
