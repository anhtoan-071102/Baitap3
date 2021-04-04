#include <iostream>
using namespace std ;

int main()
{
    int n ;
    cin >> n;
    int a[n] ;
    int b[10]  = {0};
    for (int i = 0 ; i < n ; i++)
        cin >> a[i] ;
    for (int i = 0 ; i < n ; i++)
    {
        if(a[i] == 0)  b[0]++ ;
        else if(a[i] == 1)  b[1] ++;
        else if (a[i] ==2)  b[2] ++;
        else if (a[i] ==3)  b[3] ++;
        else if (a[i] ==4)  b[4] ++;
        else if (a[i] ==5)  b[5] ++;
        else if (a[i] ==6)  b[6] ++;
        else if (a[i] ==7)  b[7] ++;
        else if (a[i] ==8)  b[8] ++;
        else if (a[i] ==9)  b[9] ++;
    }
    cout << "co " << b[0] << " so 0 "  << endl ;
    cout << "co " << b[1] << " so 1 "  << endl ;
    cout << "co " << b[2] << " so 2 "  << endl ;
    cout << "co " << b[3] << " so 3 "  << endl ;
    cout << "co " << b[4] << " so 4 "  << endl ;
    cout << "co " << b[5] << " so 5 "  << endl ;
    cout << "co " << b[6] << " so 6 "  << endl ;
    cout << "co " << b[7] << " so 7 "  << endl ;
    cout << "co " << b[8] << " so 8 "  << endl ;
    cout << "co " << b[9] << " so 9 "  << endl ;
}
