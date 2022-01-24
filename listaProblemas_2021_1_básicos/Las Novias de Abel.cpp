#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int arr[1000010];
long long a,entrada,entradav,r,b;
int main () {
cin >>a;
for (int i=0;i<a;i++){
	cin >>entrada;
	if (entrada==entradav){
		arr[i]=r+1;						//si la entrada se repite una vez, mandará un 1 al arreglo, si consecutivamente se repite otra, mandará un 2, después un 3 y así
		r++;
	}
	else{
		r=0;
		arr[i]=r;							//si la cadena se rompe, manda un 0 y vuelta a empezar
	}
	entradav=entrada;
}
for (int k=0;k<a;k++){
		if(arr[k]==1){					//Con esto escaneo el arreglo en busca de un 3, si por lo menos uno se encuentra, gana David
			b++;
		}
}

if (b>=1){
	cout <<endl<<"LO SIENTO ABEL... DAVID SE QUEDA CON TODAS"<<endl;
}
else{
	cout <<endl<<"ABEL ERES UN GRANDE"<<endl;
}
return 0;
}