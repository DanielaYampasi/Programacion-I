/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 19/08/2024
Número de ejercicio: 5
Problema planteado: Número primo.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Ingrese un numero: ";
    cin>>n;
  
        for (int i=2; i*i<=n; i++){
            if (n%i==0){
                cout<< "no es primo";
                return 0;
            }
            else 
                cout<<"es primo";
                    return 0;
        }  
    return 0; 
}