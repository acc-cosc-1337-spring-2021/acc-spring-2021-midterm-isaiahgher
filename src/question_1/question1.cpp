//c++ 
#include <cmath>
#include "question1.h"
#include<iostream>

#define uli unsigned long int

using std::cout;
//function to
//return binary
//equivalent of 
//decimal n
int decimal_to_binary(int n)
{
    uli b_number=0;
    int cnt=0;

    while (n!= 0)
    {
        //store my number
        int x=n%2;
        uli c = pow(10, cnt);
        b_number +=x*c;
        n/=2;

        //count stores exponent value
        cnt++;
    }
    return b_number;
}

bool test_config()
{
    return true;
}