// tab_intervalle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"TableauBorne.h"
using namespace Inter;
int main()
{
    Tableau t1(5);
    t1.affiche();
    t1[0] = 9;
    t1.affiche();
    TableauBorne t(5, 3, 10.8);
    t.affiche();
    float x=t[2];
    t(2, 5);
    t.affiche();
    TableauBorne t2(5, 7, 18);
    t2.affiche();
    t(2, 8);
    t.affiche();
    Tableau t3(t1);
    t3.affiche();
    t3[3] = 10;
    t1 = t3;
    t1.affiche();


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
