#include <iostream>
using namespace std;
#include "eleve.h";
#include "groupe.h";


int main()
{
    char choix; // groupe choisie
    do
    {
        cout << endl << " ----------------------- MENU GROUPES FISE1-----------------------" << endl << endl;
        cout << "A. FISE1-Groupe A" << endl;
        cout << "B. FISE1-Groupe B" << endl;
        cout << "C. FISE1-Groupe C" << endl;
        cout << "D. FISE1-Groupe D" << endl;
        cout << "E. FISE1-Groupe E" << endl;
        cout << "Q. Quitter" << endl << endl;
        cout << "Choix (lettre en majuscule) : ";
        cin >> choix;
        cout << endl;
        
        switch (choix)
        {
        case 'A':
        {Groupe gr(choix);
        break;
        }
        case 'B': {
            Groupe gr(choix);
            break; }

        case 'C': {
            Groupe gr(choix);
            break;
        }

        case 'D': {
                Groupe gr(choix);
                break;
        }

        case 'E': {
            Groupe gr(choix);
            break;
        }

        
        }

        if((choix != 'A') && (choix != 'B') && (choix != 'C') && (choix != 'D') && (choix != 'E') && (choix != 'Q'))
        {
            cout << "Erreur de saisie. La lettre doit etre en MAJUSCULE." << endl;
        
        }

    } while ((choix != 'A' ) &&( choix != 'B') && (choix != 'C') && (choix != 'D') && (choix != 'E') && (choix != 'Q'));

    return 0;
}