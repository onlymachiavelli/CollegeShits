#include <bits/stdc++.h>
using namespace std; 
class Yello {

    private : 
        float price ; 
        string brand;

    public :
        Yello() {
            cout << "Sbah l khyr The constructor has been called " <<endl;
            price = 120.369; 
            brand= "sidi ali azzouz" ; 
        }

        ~Yello() {
            cout << "Deconstructor has been called " <<endl;
        }


        void show() {
            cout << "the price is  :  " << price << " and the brand is " << brand << endl;   
        }




    
};


int main () {


    Yello *nothing;
    nothing = new Yello();
    nothing->show();

    delete nothing;
    return 0 ; 
}