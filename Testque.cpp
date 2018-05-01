/*Krzysztof Kobyliñski
Projekt 1.10. na PROI*/

#include <iostream>
#include "Queue.h"
#include "Testque.h"
#include "vector.h"
#include <cstdlib>
#include <conio.h>
#include <stdio.h>

using namespace std;

    template <typename ktype, typename vtype>
    void testadd  (Que <ktype, vtype> dictionary1, Que <ktype, vtype> dictionary2)
    {

        int wybor;
        cout<<"Do ktorego slownika dodac pary (1 lub 2)"<<endl;
        wybor=getch();

        cout<<"Ile par dodac?"<<endl;
        int n;
        cin>>n;
        ktype k;
        vtype v;
        for(int i=0;i<n;i++)
        {
            cout<<"Podaj pare(klucz i wartosc)"<<endl;
            cin>>k>>v;
            if(wybor==1)
                dictionary1.add_front(k, v);
            else
                dictionary2.add_front(k, v);
        }

        cout<<"Gotowe"<<endl;
        //return 1;
    }

    template <typename ktype, typename vtype>
    int testprint  (Que <ktype, vtype> dictionary1, Que <ktype, vtype> dictionary2)
    {
        cout<<"Ktory slownik wydrukowac"<<endl;
        int wybor;
        wybor=getch();

        if(wybor==1)
            dictionary1.print();
        else
            dictionary2.print();

        return 1;
    }
