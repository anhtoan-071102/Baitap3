#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int d = 1 ;
    int a[n][n] ;
     int i = 1;
    int j = n / 2+1 ;
    int k = 1;
    int n2 = n*n;
    while (k <= n2)
    {
        a[i][j] = k;

        if (k % n == 0)
        {
            i = i + 1;
            if ( i > n ) i = i - n;
        }
        else
        {
            if (i == 1)
                i = n;
            else
                i--;
            if (j == n)
                j = 1;
            else
                j++;
        }
        k++;
    }
    for (int i  = 1 ; i <= n ; i++){
    for (int j = 1 ;j <= n ; j++){
        cout << a[i][j] << ' ' ;}
        cout << endl ;
    }
}
