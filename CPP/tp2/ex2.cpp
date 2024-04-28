#include <bits/stdc++.h>
#include <string.h>
using namespace std ;

class Personne {
protected:
    string nom;
    string prenom;
    string telephone;
    string email;

public:
    Personne(const string& nom, const string& prenom, const string& telephone, const string& email)
        : nom(nom), prenom(prenom), telephone(telephone), email(email) {}

    void affiche() const {
        cout << "Nom: " << nom << endl;
        cout << "Prenom: " << prenom << endl;
        cout << "Telephone: " << telephone << endl;
        cout << "Email: " << email << endl;
    }
};

class Travailleur : public Personne {
private:
    string nomEntreprise;
    string adresseEntreprise;

public:
    Travailleur(const string& nom, const string& prenom, const string& telephone, const string& email,
                const string& nomEntreprise, const string& adresseEntreprise)
        : Personne(nom, prenom, telephone, email), nomEntreprise(nomEntreprise), adresseEntreprise(adresseEntreprise) {}

    void affiche() const {
        Personne::affiche();
        cout << "Nom de l'entreprise: " << nomEntreprise << endl;
        cout << "Adresse de l'entreprise: " << adresseEntreprise << endl;
    }
};

class Scientifique : public Travailleur {
private:
    string discipline;
    string type;

public:
    Scientifique(const string& nom, const string& prenom, const string& telephone, const string& email,
                 const string& nomEntreprise, const string& adresseEntreprise,
                 const string& discipline, const string& type)
        : Travailleur(nom, prenom, telephone, email, nomEntreprise, adresseEntreprise), discipline(discipline), type(type) {}

    void affiche() const {
        Travailleur::affiche();
        cout << "Discipline: " << discipline << endl;
        cout << "Type: " << type << endl;
    }
};

int main() {
    cout << "---- Personne ----" << endl;
    Personne personne("Doe", "John", "123456789", "john.doe@example.com");
    personne.affiche();
    cout << endl;

    cout << "---- Travailleur ----" << endl;
    Travailleur travailleur("Smith", "Alice", "987654321", "alice.smith@example.com", "ACME Corp", "123 Main St");
    travailleur.affiche();
    cout << endl;

    cout << "---- Scientifique ----" << endl;
    Scientifique scientifique("Johnson", "Bob", "555555555", "bob.johnson@example.com", "Science Inc", "456 Elm St", "Physique", "Theorique, Experimentale, Informatique");
    scientifique.affiche();
    cout << endl;

    return 0;
}
