#include <iostream>
#include "Queue.h"
#include "test1.h"
#include "test2.h"
#include "nowytyp.h"
using namespace std;

int main()
{

    Testit test2;

   // test2.cleaning();
    cout<<test2.testadd()<<endl;
  //  test2.testprint();
    cout<<test2.testchange()<<endl;
    //test2.testprint();
    cout<<test2.testfind()<<endl;
    //test2.testprint();
    cout<<test2.testhowmany()<<endl;
    //test2.testprint();
    cout<<test2.testsize()<<endl;
   // test2.testprint();
    cout<<test2.testcom()<<endl;
    // test2.testprint();
    cout<<test2.testdelete()<<endl;
    test2.testprint();
    test2.cleaning();
    cout<<"czyszczenie"<<endl;
    test2.testprint();

    /*
    Testis test1;
    cout<<test1.testadd()<<endl;
    cout<<test1.testdelete()<<endl;
    cout<<test1.testchange()<<endl;
    cout<<test1.testfind()<<endl;
    cout<<test1.testhowmany()<<endl;
    cout<<test1.testsize()<<endl;
    //test1.testprint();
    cout<<test1.testcom()<<endl;
    */
    return 0;
}
