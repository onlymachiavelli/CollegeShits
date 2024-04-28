#include <bits/stdc++.h>

using namespace std; 

struct Person {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    Person personne1, personne2;

    cout << "Entrez le nom de la premiere personne : ";
    cin >> personne1.nom;
    cout << "Entrez le prenom de la premiere personne : ";
    cin >> personne1.prenom;
    cout << "Entrez l'age de la premiere personne : ";
    cin >> personne1.age;

    cout << "Entrez le nom de la deuxieme personne : ";
    cin >> personne2.nom;
    cout << "Entrez le prenom de la deuxieme personne : "; 
    cin >> personne2.prenom;
    cout << "Entrez l'age de la deuxieme personne : ";
    cin >> personne2.age;

    Person moins_agee = (personne1.age < personne2.age) ? personne1 : personne2;

    printf("La personne la moins agee est : %s %s\n", moins_agee.prenom, moins_agee.nom);

    return 0;
}
