/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 21/08/2024
Número de ejercicio: 9
Problema planteado: 100 primos.
*/

#include <iostream>

using namespace std;

int main() {
    int n= 2; 
    int c= 0;

    while (c < 100) {
        int d=0;

        for (int i= 2; i<n; i++) {
            if (n%i == 0) {
                d++;
                break; }
        }

        if (d==0) { 
            cout<< n << " ";
            c++;
        }
        n++;
    }

    return 0;
}