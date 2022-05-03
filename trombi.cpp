#include"trombi.h"
#include <fstream>
Trombi::Trombi()
{
    cout << " Date du jour : " << endl;
    cin>> date_;
}

// Creation du fichier.txt
void Trombi::editFeuilleAppel(Groupe groupe)
{

    ofstream appel("Appel.txt");
    for (unsigned int i = 0; i < 5; i++)
    {
        appel << "--- ";
    }
    appel << "Feuille d'appel de la seance du " << getDate();
    for (unsigned int i = 0; i < 5; i++)
    {
        appel << " ---";
    }
    appel << endl;
    for (unsigned int i = 0; i < 8; i++)
    {
        appel << "--- ";
    }
    appel << "Groupe " << groupe.getLettre();
    for (unsigned int i = 0; i < 8; i++)
    {
        appel << " ---";
    }
    appel << endl << endl;
    appel << "---- Eleves Absents : ---- " << endl;
    for (unsigned int i = 0; i < groupe.eleveAbsent_.size(); i++)
    {
        appel << groupe.eleveAbsent_[i].getNom() << "  ";
        appel << groupe.eleveAbsent_[i].getPrenom() << endl;
    }

    appel << endl << "---- Eleves Presents : ---- " << endl;
    for (unsigned int i = 0; i < groupe.elevePresent_.size(); i++)
    {
        appel << groupe.elevePresent_[i].getNom() << "  ";
        appel << groupe.elevePresent_[i].getPrenom() << endl;
    }
    appel.close();


}


void Trombi::menu()
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
        string s(1, choix);
        switch (choix)
        {
        case 'A':
        {
            Groupe gr(s);
            gr.afficheGroupe();
            editFeuilleAppel(gr);
            break;
        }
        case 'B': {

            Groupe gr(s);
            gr.afficheGroupe();
            editFeuilleAppel(gr);
            break; }

        case 'C': {

            Groupe gr(s);
            gr.afficheGroupe();
            editFeuilleAppel(gr);
            break;
        }

        case 'D': {
            Groupe gr(s);
            gr.afficheGroupe();
            editFeuilleAppel(gr);
            break;
        }

        case 'E': {
            Groupe gr(s);
            gr.afficheGroupe();
            editFeuilleAppel(gr);
            break;
        }


        }

        if ((choix != 'A') && (choix != 'B') && (choix != 'C') && (choix != 'D') && (choix != 'E') && (choix != 'Q'))
        {
            cout << "Erreur de saisie. La lettre doit etre en MAJUSCULE." << endl;

        }

    } while ((choix != 'A') && (choix != 'B') && (choix != 'C') && (choix != 'D') && (choix != 'E') && (choix != 'Q'));


 }