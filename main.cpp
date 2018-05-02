#include <iostream>
#include "Queue.h"
#include "test1.h"
#include "test2.h"
#include "vector.h"
#include "nowytyp.h"
using namespace std;

int main()
{
    Que <int, int> a,b;
    a.add_front(3,1);
    b.add_front(4,2);
    cout<<comparison(a,b);
    /*
    Testit test2;
    cout<<test2.testadd()<<endl;
    test2.testprint();
    //cout<<test2.testdelete()<<endl;
    cout<<test2.testchange()<<endl;
    cout<<test2.testfind()<<endl;
    cout<<test2.testhowmany()<<endl;
    cout<<test2.testsize()<<endl;
    cout<<"przed";
    cout<<test2.testcom()<<endl;
    cout<<"po";*/

    /*Testis test;

    cout<<test.testadd()<<endl;
    cout<<test.testdelete()<<endl;
    cout<<test.testchange()<<endl;
    cout<<test.testfind()<<endl;
    cout<<test.testhowmany()<<endl;
    cout<<test.testsize()<<endl;*/


   // cout<<test.testcom()<<endl;
    //test.dictionary1.print();
 /*   test.testprint();
    test.testchange();
    test.testprint();

    test.testhowmany();
    test.testsize();
    test.testsize();
    test.testdelete();
    test.testprint();
    test.testcom();
    test.cleaning();*/
    return 0;
}
