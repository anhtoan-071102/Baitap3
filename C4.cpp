#include <iostream>
using namespace std ;

int main()
{
    int m , n;
    cin >> m >> n ;
    char a[m][n] ;
    for (int i = 0 ; i< m ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j] ;
        }
    }
    for (int i =0 ; i < m ; i++)
    {
        for (int j = 0 ;j < n ; j++)
        {
            if (a[i][j] == 42)
                continue ;
            if (a[i][j] == 46 && i > 0 && i < m-1 && j > 0 && j < n-1)
            {
                if (a[i][j+1] == 42)   a[i][j] ++ ;
                if (a[i][j-1] == 42)   a[i][j] ++ ;
                if (a[i+1][j] == 42)   a[i][j] ++ ;
                if (a[i-1][j] == 42)   a[i][j] ++ ;
                if (a[i+1][j+1] == 42) a[i][j] ++ ;
                if (a[i-1][j+1] == 42) a[i][j] ++ ;
                if (a[i+1][j-1] == 42) a[i][j] ++ ;
                if (a[i-1][j-1] == 42) a[i][j] ++ ;
            }
            else if (a[i][j] == 46 && i == 0 && j == 0)
            {
                if (a[i][j+1] == 42)   a[i][j] ++ ;
                if (a[i+1][j] == 42)   a[i][j] ++ ;
                if (a[i+1][j+1] == 42) a[i][j] ++ ;
                if (a[i+1][j-1] == 42) a[i][j] ++ ;
            }
            else if(a[i][j] == 46 && i == m-1 && j == n-1){
                if (a[i][j-1] == 42)   a[i][j] ++ ;
                if (a[i-1][j] == 42)   a[i][j] ++ ;
                if (a[i-1][j+1] == 42) a[i][j] ++ ;
                if (a[i-1][j-1] == 42) a[i][j] ++ ;
            }
            else if(a[i][j] == 46 && i == m-1 && j == 0){
                if (a[i][j+1] == 42)   a[i][j] ++ ;
                if (a[i-1][j] == 42)   a[i][j] ++ ;
                if (a[i-1][j+1] == 42) a[i][j] ++ ;
            }
            else if(a[i][j] == 46 && i == 0 && j == n-1){

                if (a[i][j-1] == 42)   a[i][j] ++ ;
                if (a[i+1][j] == 42)   a[i][j] ++ ;
                if (a[i+1][j-1] == 42) a[i][j] ++ ;
            }
            else if (a[i][j] == 46 && i == 0 && 0 < j && j < n-1)
            {
                if (a[i+1][j]== 42) a[i][j] ++ ;
                if (a[i+1][j+1]== 42) a[i][j] ++ ;
                if (a[i+1][j-1]== 42) a[i][j] ++ ;
                if (a[i][j+1]== 42) a[i][j] ++ ;
                if (a[i][j-1]== 42) a[i][j] ++ ;
            }
            else if (a[i][j] == 46 && j == 0 && 0 < i && i < m-1)
            {
                if (a[i+1][j]== 42) a[i][j] ++ ;
                if (a[i-1][j]== 42) a[i][j] ++ ;
                if (a[i+1][j+1]== 42) a[i][j] ++ ;
                if (a[i][j+1]== 42) a[i][j] ++ ;
                if (a[i-1][j+1]== 42) a[i][j] ++ ;
            }
            else if (a[i][j] == 46 && j == n-1 && 0 < i && i < m-1)
            {
                if (a[i+1][j]== 42) a[i][j] ++ ;
                if (a[i-1][j]== 42) a[i][j] ++ ;
                if (a[i+1][j-1]== 42) a[i][j] ++ ;
                if (a[i][j-1]== 42) a[i][j] ++ ;
                if (a[i-1][j-1]== 42) a[i][j] ++ ;
            }
            else if (a[i][j] == 46 && i == m-1 && 0 < j && j < n-1)
            {
                if (a[i-1][j]== 42) a[i][j] ++ ;
                if (a[i-1][j+1]== 42) a[i][j] ++ ;
                if (a[i-1][j-1]== 42) a[i][j] ++ ;
                if (a[i][j+1]== 42) a[i][j] ++ ;
                if (a[i][j-1]== 42) a[i][j] ++ ;
            }
        }
    }
    for (int i = 0 ; i < m  ; i++)
    {
        for (int j = 0 ; j  < n ; j++)
        {
            if (a[i][j] == '*') cout << a[i][j] << ' ' ;
            else cout << int (a[i][j]) - 46 << ' ' ;
        }
        cout << endl ;
    }

}

