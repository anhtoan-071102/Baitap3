#include <iostream>
using namespace std ;

int main()
{
    int x , y ;
    cin >> x  >> y ;
    int a[x][y] ;
    int max_sum = x*y ;
    int max_x = x -1, max_y = y -1;
    int min_x = 0, min_y = 0;
    int i = 0 , j =0;
    int so = 0;
    do{
        cin >> a[i][j]  ;
        //cout <<"a["<<i<<"]["<<j<<"]"<<a[i][j];
        so = a[i][j];
        if ( i == min_x && j < max_y){
            j++ ;
            if (j == max_y) min_x++ ;
        }
        else if (j == max_y && i < max_x){
            i++;
            if (i == max_x) max_y-- ;
        }
        else if (i == max_x && j > min_y){
            j-- ;
            if (j == min_y) max_x-- ;
        }
        else if (j == min_y && i > min_x){
            i-- ;
            if (i == min_x) min_y++ ;
        }

    }while(so < max_sum);
    for (i = 0 ; i <x; i++){
        for (j = 0 ; j < y ; j++)
            cout << a[i][j] << ' ' ;
        cout << endl ;
    }
}

