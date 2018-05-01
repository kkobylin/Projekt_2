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

template <typename ktype, typename vtype>
class Testque
{
    //Que <ktype, vtype> dictionary1, dictionary2;

    public:
       // void testadd  ();

        void testprint  (Que <ktype, vtype> dictionary1, Que <ktype, vtype> dictionary2);

         void testadd  (Que <ktype, vtype> dictionary1, Que <ktype, vtype> dictionary2);
};

template <typename ktype, typename vtype>
    void Testque <ktype, vtype>:: testadd  (Que <ktype, vtype> dictionary1, Que <ktype, vtype> dictionary2)
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
            //cout<<k<<v;
            if(wybor=='1')
                    dictionary1.add_front(k,v);
            else
                dictionary2.add_front(k, v);
        }

        cout<<"Gotowe"<<endl;
        //return 1;
    }

template <typename ktype, typename vtype>
    void Testque <ktype, vtype>:: testprint  (Que <ktype, vtype> dictionary1, Que <ktype, vtype> dictionary2)
    {
        cout<<"Ktory slownik wydrukowac"<<endl;
        int wybor;
        wybor=getch();

        if(wybor=='1')
            dictionary1.print();
        else
            dictionary2.print();

        cout<<"Gotowe"<<endl;

        //return 1;
    }


#endif
