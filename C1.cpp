#include <iostream>
using namespace std ;

int main()
{
    bool check = true ;
    int N ;
    cin >> N ;
    int arr[N] ;
    int b [N] ;
    for (int i = 0 ; i < N ; i ++)
        cin >> arr[i] ;
    b[0] = arr[0] ;
    int sb = 1 ;
    for ( int i = 1 ; i < N ; i++)
    {
         for (int j = 0 ; j < sb ; j++ )
         {
             if (arr[i] == b[j]){
                check = false ;
                break ;
             }
         }
         b[i] = arr[i] ;
         sb++ ;
    }
    if (check == true) cout << "No" ;
    else cout << "Yes" ;
}
