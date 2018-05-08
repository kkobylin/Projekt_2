/*Krzysztof Kobyliñski
Projekt 2 na PROI*/
#include <iostream>
#include "test2.h"

using namespace std;

bool Testit:: testadd  ()
    {
        Type a('a', 1.1), b('b', 2.2), c('c', 3.3);
        dictionary1.add_front(5, a);
        dictionary1.add_front(7, b);
        dictionary1.add_front(9, c);

        if(dictionary1.findvalue(7)== b)
            return true;
        else
            return false;
    }

void Testit:: testprint  ()
    {
        dictionary1.print();
        dictionary2.print();
    }


bool Testit:: testdelete()
{

   Type b('b',2.2);
    dictionary1.delet(7,b);
    if(dictionary1.Size()==3)
        return true;
    else
        return false;
}

bool Testit:: testchange()
{
    Type h('h', 0);
    dictionary1.change(5, h);
    if(dictionary1.findvalue(5)==h)
        return true;
    else
        return false;
}

bool Testit:: testfind()
{
    Type c('c', 3.3);
    if(dictionary1.findvalue(9)==c)
        return true;
    else
        return false;
}

bool Testit:: testhowmany()
{
    Type d('e', 2.12);
    dictionary1.add_front(5,d);
    if(dictionary1.howmany(5)==2)
        return true;
    else
        return false;
}

bool Testit:: testsize()
{
    if(dictionary1.Size()==4)
        return true;
    else
        return false;
}

bool Testit:: testcom()
{
    Type a('h', 0), b('b', 2.2), c('c', 3.3), d('e', 2.12);

    dictionary2.add_front(5, a);
    dictionary2.add_front(7, b);
    dictionary2.add_front(9, c);
    dictionary2.add_front(5, d);

    return comparison(dictionary1, dictionary2);

}

Testit:: ~Testit()
{
    dictionary1.~Que();
    dictionary2.~Que();
}
