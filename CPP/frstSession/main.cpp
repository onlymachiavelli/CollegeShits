#include <bits/stdc++.h>
using namespace std; 
class Yello {

    private : 
        float price ; 
        char  *brand;

    public :
        Yello() {
            cout << "Sbah l khyr " <<endl;
            price = 120.369; 
            brand= "sidi ali azzouz" ; 
        }

        ~Yello() {
            cout << "Deconstructor has been called " <<endl;
        }


        void show() {
            cout << "the price is  :  " << price << " and the brand is " << brand ;   
        }





};


int main () {


    Yello nothing;
    nothing.show();

}