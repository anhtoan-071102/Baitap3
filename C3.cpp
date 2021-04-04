#include <iostream>
#include <cmath>
using namespace std ;

bool check(int a)
{
    int j =a ;
    int i = a ;
    if (0<a && a<10)
        return true ;
    else {
        int b = 0;
        int d = 0 ;
        while (a != 0)
        {
            a /= 10 ;
            d++ ;
        }
        while (i != 0)
        {
            int c = i%10 ;
            i /= 10 ;
            b += c*pow(10,d-1) ;
            d-- ;
        }
        if (b == j)
            return true ;
        else return false ;
    }
}
int  main()
{
    int A,B ;
    cin >> A  >> B ;
    int Count = 0;
    for (int N = A ; N <= B ; N++)
    {
        if (check(N) == true)
            Count ++ ;
    }
    cout << Count ;
}
