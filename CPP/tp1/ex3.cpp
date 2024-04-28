#include <bits/stdc++.h>

using namespace std ; 



int main () {
    int tab[6] ={1,2,3,4,5,6};
    int *tabP = tab ;
    int sum = 0; 
    for (int i = 0 ; i < 6 ; i++){

        sum += *tabP ; 
        tabP++ ;
    }
    cout << "The sum of the array is : " << sum << endl ;
    return 0 ; 
}