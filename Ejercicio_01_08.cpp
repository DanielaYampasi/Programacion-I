/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 21/08/2024
Número de ejercicio: 1
Problema planteado: Vocal o consonante.
*/

#include <iostream>
using namespace std;

int main(){
char letra;
    
    cout << "Ingrese una letra: ";
    cin >> letra;
if (letra>=97 && letra<=122 || letra>=65 && letra<=90)
    if (letra == 97 or letra == 101 || letra == 105 || letra == 111 || letra == 117 || letra == 65 || letra == 69 || letra == 73 || letra == 79 || letra == 85)
        cout << "Es vocal";
    else
        cout << "Es consonante";
else
    cout << "Es un caracter especial";
return 0;
}