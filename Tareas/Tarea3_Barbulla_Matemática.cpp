#include <iostream>
using namespace std;

int main(){
int i;
int fact=1;
int numero;

cout<< "ingresa un numero: " <<endl; cin>> numero;

if (numero<0) {fact =0;}
else if (numero==0) {fact=1;}
else {
for (i = 1; i <= numero; i++){
fact = fact*i;
}
}
cout<<" El Factorial de "<< numero<< " es: " << fact << endl;

return 0;
}
