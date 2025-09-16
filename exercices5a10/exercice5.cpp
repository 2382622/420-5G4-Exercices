#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4}; 

    int nbElementsArr1 = sizeof(arr1) / sizeof(arr1[0]);
    int nbElementsArr2 = sizeof(arr2) / sizeof(arr2[0]);

    if (nbElementsArr1 != nbElementsArr2) {
        cout << "Arr1 et Arr2 n'ont pas la même taille" << endl;
    } else {
        cout << "Arr1 et Arr2 ont la même taille" << endl;
        bool identiques = true;
        for (int i = 0; i < nbElementsArr1; ++i) {
            if (arr1[i] != arr2[i]) {
                identiques = false;
                break;
            }
        }
        if (identiques) {
            cout << "Arr1 et Arr2 ont le même contenu" << endl;
        } else {
            cout << "Arr1 et Arr2 n'ont pas le même contenu" << endl;
        }
    }
}