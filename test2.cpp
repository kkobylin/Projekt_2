#include <iostream>
#include "test1.h"
#include "test2.h"

using namespace std;

bool Testit:: testadd  ()
    {
        dictionary1.add_front(5, ('a',1));
        dictionary1.add_front(7, ('b',2));
        dictionary1.add_front(9, ('c',3));

        if(dictionary1.findvalue(7)==('b',2))
            return 1;
        else
            return 0;
    }
/*
bool Testis:: testprint  ()
    {
        dictionary1.add_front(5, "Wydrukowana tresc");

        ostream os;
        dictionary1.print();
        os<<"5 Wydrukowana tresc";

        if(os==cout)
            return 1;
        else
            return 0;
    }
*/

bool Testit:: testdelete()
{
    dictionary1.delet(7, ('b',2));
    if(dictionary1.Size()==2)
        return 1;
    else
        return 0;
}
/*
bool Testit:: testchange()
{
    dictionary1.change(5, "Czwarty");
    if(dictionary1.findvalue(5)=="Czwarty")
        return 1;
    else
        return 0;
}

bool Testit:: testfind()
{
    if(dictionary1.findvalue(9)=="Trzeci")
        return 1;
    else
        return 0;
}

bool Testit:: testhowmany()
{
    dictionary1.add_front(5, "Piaty");
    if(dictionary1.howmany(5)==2)
        return 1;
    else
        return 0;
}

bool Testit:: testsize()
{
    if(dictionary1.Size()==3)
        return 1;
    else
        return 0;
}
/*
bool Testit:: testcom()
{
    dictionary2.add_front(5, "Czwarty");
    dictionary2.add_front(9, "Trzeci");
    dictionary2.add_front(5, "Piaty");
    bool a;
    a=comparison(dictionary1, dictionary2);
   if(a==1)
    return 1;
   else
    return 0;

}*/


