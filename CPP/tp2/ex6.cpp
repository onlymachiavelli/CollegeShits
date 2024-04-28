#include <bits/stdc++.h>
#include <string>
using namespace std; 
class Batiment {
protected:
    string adresse;
    double surface;

public:
    Batiment(const string& adresse, double surface) : adresse(adresse), surface(surface) {}

    virtual void afficher_details() const = 0;
};

class Maison : public Batiment {
private:
    int nombre_chambres;
    double superficie_jardin;

public:
    Maison(const string& adresse, double surface, int nombre_chambres, double superficie_jardin)
        : Batiment(adresse, surface), nombre_chambres(nombre_chambres), superficie_jardin(superficie_jardin) {}

    void afficher_details() const override {
        cout << "Type de batiment : Maison" << endl;
        cout << "Adresse : " << adresse << endl;
        cout << "Surface : " << surface << " m²" << endl;
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

    void afficher_details() const override {
        cout << "Type de batiment : Immeuble" << endl;
        cout << "Adresse : " << adresse << endl;
        cout << "Surface : " << surface << " m²" << endl;
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

    void afficher_details() const override {
        cout << "Type de batiment : Magasin" << endl;
        cout << "Adresse : " << adresse << endl;
        cout << "Surface : " << surface << " m²" << endl;
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

    void afficher_details() const override {
        cout << "Type de batiment : Usine" << endl;
        cout << "Adresse : " << adresse << endl;
        cout << "Surface : " << surface << " m²" << endl;
        cout << "Nombre d'employes : " << nombre_employes << endl;
        cout << "Capacite de production : " << capacite_production << endl;
    }
};

int main() {
    Maison maison("1 rue de la Maison", 150.5, 4, 200.0);
    Immeuble immeuble("2 rue de l'Immeuble", 500.0, 5, 20);
    Magasin magasin("3 rue du Magasin", 100.0, "Epicerie", 50.0);
    Usine usine("4 rue de l'Usine", 1000.0, 50, 1000.0);

    maison.afficher_details();
    cout << endl;

    immeuble.afficher_details();
    cout << endl;

    magasin.afficher_details();
    cout << endl;

    usine.afficher_details();
    cout << endl;

    return 0;
}
