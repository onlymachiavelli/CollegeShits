#include <bits/stdc++.h>


using namespace std ; 
int main() {
    const int MAX_LENGTH = 100;
    char chaine[MAX_LENGTH]; 
    char caractere;

    cout << "Entrez une chaine de caracteres : ";
    cin.getline(chaine, MAX_LENGTH);

    cout << "Entrez le caractere a partir duquel afficher la chaine : ";
    cin >> caractere;

    char *ptr = strchr(chaine, caractere);

    if (ptr != nullptr) {
        cout << "Chaine a partir de la premiere occurrence de '" << caractere << "' : " << ptr << endl;
    } else {
        cout << "Le caractere '" << caractere << "' n'a pas ete trouve dans la chaine." << endl;
    }

    return 0;
}
