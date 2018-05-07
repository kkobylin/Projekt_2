/*Krzysztof Kobyliñski
Projekt 2 na PROI*/
#include <iostream>
#include "test1.h"

using namespace std;

bool Testis:: testadd  ()
    {
        dictionary1.add_front(5, "Pierwszy");
        dictionary1.add_front(7, "Drugi");
        dictionary1.add_front(9, "Trzeci");

        if(dictionary1.findvalue(7)=="Drugi")
            return 1;
        else
            return 0;
    }

void Testis:: testprint  ()
    {
        dictionary1.print();
        dictionary2.print();
    }

bool Testis:: testdelete()
{
    dictionary1.delet(7, "Drugi");
    if(dictionary1.Size()==2)
        return 1;
    else
        return 0;
}

bool Testis:: testchange()
{
    dictionary1.change(5, "Czwarty");
    if(dictionary1.findvalue(5)=="Czwarty")
        return 1;
    else
        return 0;
}

bool Testis:: testfind()
{
    if(dictionary1.findvalue(9)=="Trzeci")
        return 1;
    else
        return 0;
}

bool Testis:: testhowmany()
{
    dictionary1.add_front(5, "Piaty");
    if(dictionary1.howmany(5)==2)
        return 1;
    else
        return 0;
}

bool Testis:: testsize()
{
    if(dictionary1.Size()==3)
        return 1;
    else
        return 0;
}

bool Testis:: testcom()
{
    dictionary2.add_front(5, "Czwarty");
    dictionary2.add_front(9, "Trzeci");
    dictionary2.add_front(5, "Piaty");
    return comparison(dictionary1, dictionary2);

}
