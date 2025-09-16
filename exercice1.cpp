#include <iostream>
using namespace std; 

int main() {
    int nb1;
    int nb2;
    int nb3;

    cout << "Entrez le premier nombre: ";
    cin  >> nb1;
     cout << "Entrez le deuxième nombre: " ;
    cin  >> nb2;
     cout << "Entrez le trosième nombre: ";
    cin  >> nb3;

    if (nb1 > nb2 && nb1 > nb3) {
        cout << nb1  << " est le plus grand" << endl;
    } else  if (nb2 > nb1 && nb2 > nb3) {
         cout << nb2 << " est le plus grand" << endl;
    } else {
        cout << nb3  << " est le plus grand" << endl;
    }


}
