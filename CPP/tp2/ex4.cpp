#include <bits/stdc++.h>
using namespace std;

class Article {
public:
    virtual double calculer_prix() const = 0;
};

class Livre : public Article {
public:
    double calculer_prix() const override {
        return 10.0; 
    }
};

class Vetement : public Article {
private:
    int taille; 

public:
    Vetement(int taille) : taille(taille) {}

    double calculer_prix() const override {
        return 20.0 + 2.0 * taille; 
    }
};

class Jouet : public Article {
private:
    int age_recommande;

public:
    Jouet(int age_recommande) : age_recommande(age_recommande) {}

    double calculer_prix() const override {
        return 5.0 + 1.0 * age_recommande; 
    }
};

int main() {
    Livre livre;
    Vetement vetement(3); 
    Jouet jouet(5); 

    cout << "Prix du livre : " << livre.calculer_prix() << " euros" << endl;
    cout << "Prix du vetement : " << vetement.calculer_prix() << " euros" << endl;
    cout << "Prix du jouet : " << jouet.calculer_prix() << " euros" << endl;
    

    return 0;
}
