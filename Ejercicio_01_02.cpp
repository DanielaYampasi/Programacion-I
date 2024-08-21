
/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 19/08/2024
Número de ejercicio: 2
Problema planteado: Volumen de una esfera.
*/

#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159

int main(){
    double r,f;

    cout << "Ingrese el radio de la esfera : ";
    cin >> r;
    f =(4 * PI * (r*r*r))/3;
    cout << "El volumen de la esfera es: " <<  f;

    return 0;
}