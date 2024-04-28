#include <bits/stdc++.h>
using namespace std ; 


class Animal {
public:
    virtual void parler() const = 0;
    virtual void manger() const = 0;
};

class Chien : public Animal {
public:
    void parler() const override {
        cout << "Le chien aboie." << endl;
    }

    void manger() const override {
        cout << "Le chien mange de la nourriture pour chien." << endl;
    }
};

class Chat : public Animal {
public:
    void parler() const override {
        cout << "Le chat miaule." << endl;
    }

    void manger() const override {
        cout << "Le chat mange de la nourriture pour chat." << endl;
    }
};

class Oiseau : public Animal {
public:
    void parler() const override {
        cout << "L'oiseau chante." << endl;
    }

    void manger() const override {
        cout << "L'oiseau picore des graines." << endl;
    }
};

class Serpent : public Animal {
public:
    void parler() const override {
        cout << "Le serpent siffle." << endl;
    }

    void manger() const override {
        cout << "Le serpent avale sa proie." << endl;
    }
};

int main() {
    Chien chien;
    cout << "Comportement du chien :" << endl;
    chien.parler();
    chien.manger();
    cout << endl;

    Chat chat;
    cout << "Comportement du chat :" << endl;
    chat.parler();
    chat.manger();
    cout << endl;

    Oiseau oiseau;
    cout << "Comportement de l'oiseau :" << endl;
    oiseau.parler();
    oiseau.manger();
    cout << endl;

    Serpent serpent;
    cout << "Comportement du serpent :" << endl;
    serpent.parler();
    serpent.manger();
    cout << endl;

    return 0;
}
