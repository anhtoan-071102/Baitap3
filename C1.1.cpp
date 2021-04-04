#include <iostream>
using namespace std ;

int main()
{
    double TB = 0 ;
    double Ps = 0 ;
    int n ; cin >> n ;
    int a[n] ;
    int sum = 0 ;
    double TPS ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        sum += a[i] ;
    }
    TB = sum / n ;
    for (int i = 0 ; i < n ; i++)
    {
        TPS += (a[i] - TB)*(a[i] - TB) ;
    }
    cout << TPS/(n-1) << ' ' << TB ;

}
