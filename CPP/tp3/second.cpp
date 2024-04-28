#include <iostream>
using namespace std;

class A {
public:
    virtual void afficher1() = 0;
    virtual void afficher2() = 0;
    void afficher3(){
    cout<<" cc : "<<endl;}
};

class B : public A {

public:
    void afficher1() override {
    cout<<" aa"<<endl;}


    void afficher2() override {
    cout<<" bb"<<endl;}
};

int main() {
    B b;
    b.afficher1();
    b.afficher2();
    b.afficher3();

    return 0;
}