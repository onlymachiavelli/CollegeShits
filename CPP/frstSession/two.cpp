#include <bits/stdc++.h>


using namespace std; 


class Car {
    private :
        string name ; 

    public :
        Car(string n ) {
            cout << "Constructor has been called " << endl ; 
            name = n;  
        }

        void get () {
            cout << name << endl ; 
        }
}
;

int main () {
    Car *car; 
    car = new Car("BMW") ; 
    car->get();

    return 0 ; 
}   