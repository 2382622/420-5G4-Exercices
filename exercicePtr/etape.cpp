
#include <iostream>
using namespace std;

// Étape #1
class Noeud {
	public:
	    int valeur;
	    Noeud* suivant;
   
	    
	    // Constructeur pour faciliter la création
	    Noeud(int val) : valeur(val), suivant(nullptr) {}
	    
	    // Destructeur (optionnel, mais bonne pratique)
	    ~Noeud() {}



  
};



// Étaper #2
// Ajoute un nouveau nœud au début de la liste
void ajouterDebut(Noeud*& tete, int valeur) {
    Noeud* nouveau = new Noeud(valeur);
    nouveau->suivant = tete;
    tete = nouveau;
}

// Affiche la liste
void afficherListe(Noeud* tete) {
    Noeud* courant = tete;
    while (courant != nullptr) {
        cout << courant->valeur << " -> ";
        courant = courant->suivant;
    }
    cout << "NULL" << endl;
}

int main() {
    // TODO: Créer 3 nœuds et les relier
    Noeud* tete = nullptr;
  
    /* 
    Noeud* n1 = new Noeud(10);
    n1->suivant = new Noeud(20);
    n1->suivant->suivant = new Noeud(30);
 
    cout << "Liste: ";
    // TODO: Parcourir et afficher la liste
    while (n1 != nullptr)
    {
        cout << n1->valeur << " -> ";
        Noeud* temp = n1;
        n1 = n1->suivant;
        delete temp; 
    }
    cout << "NULL" << endl; */
    
    ajouterDebut(tete, 30);
    cout << "Liste après ajout de 30: ";
    afficherListe(tete);

     ajouterDebut(tete, 20);
    cout << "Liste après ajout de 20 ";
    afficherListe(tete);

     ajouterDebut(tete, 10);
    cout << "Liste après ajout de 30: ";
    afficherListe(tete);

    return 0;
}  

// Étape #3
void ajouterFIn(Noeud*& tete, int valeur) {
    Noeud* nouveau = new Noeud(valeur);
    if (tete == nullptr) {
        tete = nouveau;
    } else {
        Noeud* courant = tete;
        while (courant->suivant != nullptr) {
            courant = courant->suivant;
        }
        courant->suivant = nouveau;
    }
}