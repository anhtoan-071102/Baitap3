#include <iostream>
#include <cstring>
using namespace std ;

int main()
{
    bool check = true ;
    string s ;
    cin >> s ;
    int j = s.length() -1 ;
    for (int i = 0 ; i < (s.length()/2) ; )
    {
            if (s[i] != s[j]){
                check = false;
                break ;
            }
            else {
                i++;
                j--;
            }
    }
    if (check == true) cout << "doi xung" ;
    else if (check == false)  cout << "ko doi xung" ;
}

