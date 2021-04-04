#include <iostream>
using namespace std ;
int main()
{
    int n, d = 0,sum = 0 ;
    cin >> n ;
    int a[n] ;
    for (int  i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        if (a[i] % 2 == 0) sum +=a[i] ;
        else d++ ;
    }
    cout << "tong so cac chan : "  << sum << endl ;
    cout << "so cac so le " << d   << '\n' ;
    cout << "mang so chan   "<< endl;
    for (int i = 0 ; i < n ; i++){
        if (a[i] % 2 == 0)
        cout << a[i] << ' ' ;
    }
    cout << "\nmang so le\n" ;
    for (int i = 0 ; i < n ; i++)
    {
        if (a[i] % 2 != 0)
            cout << a[i] << ' ' ;
    }
}
