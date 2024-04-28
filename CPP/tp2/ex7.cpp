#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std ; 

class Batiment {
public:
    string adresse;
    double surface;

public:
    Batiment(const string& adresse, double surface) : adresse(adresse), surface(surface) {}

    virtual double calculer_prix() const = 0;

    virtual void afficher_details() const {
        cout << "Adresse : " << getAdresse() << endl;
        cout << "Surface : " << surface << " m²" << endl;
    }

    string getAdresse() const {
        return adresse;
    }
};


class Maison : public Batiment {
private:
    int nombre_chambres;
    double superficie_jardin;

public:
    Maison(const string& adresse, double surface, int nombre_chambres, double superficie_jardin)
        : Batiment(adresse, surface), nombre_chambres(nombre_chambres), superficie_jardin(superficie_jardin) {}

    double calculer_prix() const override {
        return surface * 1000 + nombre_chambres * 5000 + superficie_jardin * 200;
    }

    void afficher_details() const override {
        cout << "Type de batiment : Maison" << endl;
        Batiment::afficher_details();
        cout << "Nombre de chambres : " << nombre_chambres << endl;
        cout << "Superficie du jardin : " << superficie_jardin << " m²" << endl;
    }
};

class Immeuble : public Batiment {
private:
    int nombre_etages;
    int nombre_appartements;

public:
    Immeuble(const string& adresse, double surface, int nombre_etages, int nombre_appartements)
        : Batiment(adresse, surface), nombre_etages(nombre_etages), nombre_appartements(nombre_appartements) {}

    double calculer_prix() const override {
        return surface * 1500 + nombre_etages * 10000 + nombre_appartements * 5000;
    }

    void afficher_details() const override {
        cout << "Type de batiment : Immeuble" << endl;
        Batiment::afficher_details();
        cout << "Nombre d'etages : " << nombre_etages << endl;
        cout << "Nombre d'appartements : " << nombre_appartements << endl;
    }
};

class Magasin : public Batiment {
private:
    string type_commerce;
    double superficie_vitrine;

public:
    Magasin(const string& adresse, double surface, const string& type_commerce, double superficie_vitrine)
        : Batiment(adresse, surface), type_commerce(type_commerce), superficie_vitrine(superficie_vitrine) {}

    double calculer_prix() const override {
        return surface * 2000 + superficie_vitrine * 100;
    }

    void afficher_details() const override {
        cout << "Type de batiment : Magasin" << endl;
        Batiment::afficher_details();
        cout << "Type de commerce : " << type_commerce << endl;
        cout << "Superficie de vitrine : " << superficie_vitrine << " m²" << endl;
    }
};

class Usine : public Batiment {
private:
    int nombre_employes;
    double capacite_production;

public:
    Usine(const string& adresse, double surface, int nombre_employes, double capacite_production)
        : Batiment(adresse, surface), nombre_employes(nombre_employes), capacite_production(capacite_production) {}

    double calculer_prix() const override {
        return surface * 1000 + nombre_employes * 2000 + capacite_production * 500;
    }

    void afficher_details() const override {
        cout << "Type de batiment : Usine" << endl;
        Batiment::afficher_details();
        cout << "Nombre d'employes : " << nombre_employes << endl;
        cout << "Capacite de production : " << capacite_production << endl;
    }
};

int main() {
    vector<Batiment*> batiments;
    batiments.push_back(new Maison("1 rue de la Maison", 150.5, 4, 200.0));
    batiments.push_back(new Immeuble("2 rue de l'Immeuble", 500.0, 5, 20));
    batiments.push_back(new Magasin("3 rue du Magasin", 100.0, "Epicerie", 50.0));
    batiments.push_back(new Usine("4 rue de l'Usine", 1000.0, 50, 1000.0));

    for (const auto& batiment : batiments) {
        cout << "Adresse : " << batiment->adresse << endl;
        cout << "Prix : " << batiment->calculer_prix() << " euros" << endl;
        batiment->afficher_details();
        cout << endl;
    }

    // Freeing memory by deleting dynamically allocated objects
    for (const auto& batiment : batiments) {
        delete batiment;
    }

    return 0;
}
