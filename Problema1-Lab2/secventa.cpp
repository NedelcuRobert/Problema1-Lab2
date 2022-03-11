#include "secventa.h"
#include <string>

using namespace std;

void citire_secventa_siruri(string secventa[],int dim) {
	for (int i = 0;i < dim;i++) {
		cin >> secventa[i];
	}
}

void apartenenta_sir_secventa(string secventa[], string sir,int dim) {
    bool cautare = false;
    int numar_aparitii = 0;
    for (int i = 0;i < dim;i++) {
        if (sir == secventa[i]) {
            cautare =  true;  
            numar_aparitii++;
        }
    }
    if (cautare == true) {
        cout << "Sirul apartine secventei" << "," << "numar aparitii: " << numar_aparitii;
    }
    else {
        cout << "Sirul nu apartine secventei.";
    }
}