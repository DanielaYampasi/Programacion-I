/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 19/08/2024
Número de ejercicio: 6
Problema planteado: Número amigo.
*/

#include <iostream>
using namespace std;

int main(){

int d1,d2;
int sum1=0;
int sum2=0;
cout << "Ingrese un numero : ";
    cin >> d1 ;
cout << "Ingrese otro numero : ";
    cin >> d2 ;

for (int c=1; c<=d1; c++){
    if(d1%c==0){
        sum1 = sum1 + c;
    }
}
cout << endl ;
for (int r=1; r<=d2; r++){
    if(d2%r==0){
        sum2 = sum2 + r;
    }
}
if (sum2==sum1)
    cout << d1 << " y " << d2 << " Son amigos";
else
    cout << d1 << " y " << d2 << " No son amigos";
 return 0;
}
