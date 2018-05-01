/*Krzysztof Kobyliñski
Projekt 2 na PROI*/

#ifndef multidictionarytest_definition
#define multidictionarytest_definition

#include <iostream>
#include "Queue.h"
#include "vector.h"
using namespace std;

class Testque
{
    public:
    template <typename ktype, typename vtype>
        int testadd  (Que <ktype, vtype> dictionary1, Que <ktype, vtype> dictionary2);

    template <typename ktype, typename vtype>
        int testprint  (Que <ktype, vtype> dictionary1, Que <ktype, vtype> dictionary2);


};






#endif
