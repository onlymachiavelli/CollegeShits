#include <bits/stdc++.h>

#include <string>

using namespace std ; 


class Conversion {
public:
    virtual string convertir_en_chaine() const = 0; 
};

class Entier : public Conversion {
private:
    int valeur;

public:
    Entier(int valeur) : valeur(valeur) {}

    string convertir_en_chaine() const override {
        return to_string(valeur);
    }

    friend float operator+(const Entier& entier, const float& flottant);
};

class Flottant : public Conversion {
private:
    float valeur;

public:
    Flottant(float valeur) : valeur(valeur) {}

    string convertir_en_chaine() const override {
        ostringstream oss;
        oss << valeur; 
        return oss.str();
    }
};

class Complexe : public Conversion {
private:
    float reel;
    float imaginaire;

public:
    Complexe(float reel, float imaginaire) : reel(reel), imaginaire(imaginaire) {}

    string convertir_en_chaine() const override {
        ostringstream oss;
        oss << reel << " + " << imaginaire << "i";
        return oss.str();
    }
};

float operator+(const Entier& entier, const float& flottant) {
    return entier.valeur + flottant;
}

int main() {
    Entier entier(42);
    Flottant flottant(3.14);
    Complexe complexe(2.5, 1.5);

    cout << "Entier : " << entier.convertir_en_chaine() << endl;
    cout << "Flottant : " << flottant.convertir_en_chaine() << endl;
    cout << "Complexe : " << complexe.convertir_en_chaine() << endl;

    Entier entier2(10);
    float resultat = entier2 + 5.5; 
    cout << "Resultat de l'addition d'un entier et d'un flottant : " << resultat << endl;

    return 0;
}
