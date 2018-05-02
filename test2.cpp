#include <iostream>
#include "test1.h"
#include "test2.h"

using namespace std;

bool Testit:: testadd  ()
    {
        Type a('a', 1.1), b('b', 2.2), c('c', 3.3);
        dictionary1.add_front(5, a);
        dictionary1.add_front(7, b);
        dictionary1.add_front(9, c);

        if(dictionary1.findvalue(7)== b)
            return 1;
        else
            return 0;
    }

void Testit:: testprint  ()
    {
        dictionary1.print();
    }


bool Testit:: testdelete()
{

   Type b('b',2.2);
    dictionary1.delet(7,b);
    if(dictionary1.Size()==2)
        return 1;
    else
        return 0;
}

bool Testit:: testchange()
{
    Type h('h', 0);
    dictionary1.change(5, h);
    if(dictionary1.findvalue(5)==h)
        return 1;
    else
        return 0;
}

bool Testit:: testfind()
{
    Type c('c', 3.3);
    if(dictionary1.findvalue(9)==c)
        return 1;
    else
        return 0;
}

bool Testit:: testhowmany()
{
    Type d('e', 2.12);
    dictionary1.add_front(5,d);
    if(dictionary1.howmany(5)==2)
        return 1;
    else
        return 0;
}

bool Testit:: testsize()
{
    dictionary1.print();
    if(dictionary1.Size()==4)
        return 1;
    else
        return 0;
}

bool Testit:: testcom()
{
    Type a('h', 0), b('b', 2.2), c('c', 3.3), d('e', 2.12);

    dictionary2.add_front(5, a);
    dictionary2.add_front(7, b);
    dictionary2.add_front(9, c);
    dictionary2.add_front(5, d);
   /* bool aa;
    aa=comparison(dictionary1, dictionary2);
   if(aa==1)
    return 1;
   else
    return 0;*/
    return comparison(dictionary1, dictionary2);

}


