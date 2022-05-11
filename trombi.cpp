#include"trombi.h"
#include <fstream>
#include <SFML/Graphics.hpp>
#include <iostream>
#include<vector>
using namespace std;
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
           afficheTrombi(gr);
            editFeuilleAppel(gr);
            break;
        }
        case 'B': {

            Groupe gr(s);
            afficheTrombi(gr);
            editFeuilleAppel(gr);
            break; }

        case 'C': {

            Groupe gr(s);
            afficheTrombi(gr);
            editFeuilleAppel(gr);
            break;
        }

        case 'D': {
            Groupe gr(s);
            afficheTrombi(gr);
            editFeuilleAppel(gr);
            break;
        }

        case 'E': {
            Groupe gr(s);
            afficheTrombi(gr);
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

void Trombi::afficheTrombi(Groupe groupe)
{
        int len,compteur;
        sf::RenderWindow window(sf::VideoMode(1600, 1000), "SFML works!");
        sf::CircleShape shape(100.f);
        sf::Texture image;
        sf::Sprite s_image;
        vector <sf::Sprite> tab_img;

        string image_coord;
        
        // Image de la premiere ligne
        for (int i = 0; i < 5; i++)
        {
            image_coord = groupe.tabMembre_[i].getCoordonnee();
            if (!image.loadFromFile(image_coord)){ cout << " Erreur" << endl; }
            else
            { 
                image.setSmooth(true);
                s_image.setTexture(image);
                s_image.setScale(0.4, 0.4);
                s_image.setPosition(250 +i*250, 0);
                tab_img.push_back(s_image);
            }
        //image de la deuxieme ligne
            compteur = 0;
            for (int i = 5; i < 10; i++)
            {
                image_coord = groupe.tabMembre_[i].getCoordonnee();
                if (!image.loadFromFile(image_coord)) { cout << " Erreur" << endl; }
                else
                {
                    
                    image.setSmooth(true);
                    s_image.setTexture(image);
                    s_image.setScale(0.4, 0.4);
                    s_image.setPosition(250 + compteur * 250, 200);
                    tab_img.push_back(s_image);
                    compteur++;
                }
            }

            compteur = 0;
        // Image de la troisieme ligne
            for (int i = 10; i < 15; i++)
            {
                image_coord = groupe.tabMembre_[i].getCoordonnee();
                if (!image.loadFromFile(image_coord)) { cout << " Erreur" << endl; }
                else
                {
                    image.setSmooth(true);
                    s_image.setTexture(image);
                    s_image.setScale(0.4, 0.4);
                    s_image.setPosition(250 +compteur * 250, 400);
                    tab_img.push_back(s_image);
                    compteur++;
                }
            }
        // Image de la quatrieme ligne
            compteur = 0;
            for (int i = 15; i < 20; i++)
            {
                image_coord = groupe.tabMembre_[i].getCoordonnee();
                if (!image.loadFromFile(image_coord)) { cout << " Erreur" << endl; }
                else
                {
                    image.setSmooth(true);
                    s_image.setTexture(image);
                    s_image.setScale(0.4, 0.4);
                    s_image.setPosition(250+compteur * 250, 600);
                    tab_img.push_back(s_image);
                    compteur++;
                }
            }
        //Image de la cinquieme ligne
            compteur = 0;
            for (int i = 20; i < groupe.tabMembre_.size(); i++)
            {
                image_coord = groupe.tabMembre_[i].getCoordonnee();
                if (!image.loadFromFile(image_coord)) { cout << " Erreur" << endl; }
                else
                {
                    image.setSmooth(true);
                    s_image.setTexture(image);
                    s_image.setScale(0.4, 0.4);
                    s_image.setPosition(250 +compteur * 250, 800);
                    tab_img.push_back(s_image);
                    compteur++;
                }
            }

        }



        

        len = size(tab_img);

        shape.setFillColor(sf::Color::Green);
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            for (int i = 0; i < len; i++)
            {
                window.draw(tab_img[i]);
            }
            window.display();
        }
}