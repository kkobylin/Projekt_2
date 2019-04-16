#include <iostream>
#include "Queue.h"
#include "test1.h"
#include "test2.h"
#include "nowytyp.h"
using namespace std;

int main()
{

    Testit test2;
    cout<<test2.testadd()<<endl;
    cout<<test2.testchange()<<endl;
    cout<<test2.testfind()<<endl;
    cout<<test2.testhowmany()<<endl;
    cout<<test2.testsize()<<endl;
    cout<<test2.testcom()<<endl;
    cout<<test2.testdelete()<<endl;
    test2.testprint();
    test2.cleaning();
    cout<<"After cleaning"<<endl;
    test2.testprint();
    return 0;
}
