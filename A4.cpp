#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std ;

int main()
{
    srand(time(NULL)) ;
    int arr[30] ;
    for (int i = 0 ; i < 30 ; i ++)
    {
        arr[i] = rand() % (100-1+1)+1 ;
    }
    for (int i = 0 ;i < 30 ; i++)
        cout << arr[i]<< ' ' ;
    sort(arr,arr+30);
    cout << endl ;
    for (int i = 0 ; i < 30  ; i++)
        cout << arr[i]<< ' ' ;
}
