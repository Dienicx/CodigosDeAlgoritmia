#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main () {
					//admito que no es mi solucion mas ortodoxa, y no funciona para todos los casos. Sencillamente no se me ocurrio que hacer. :c
float a,b,c,n,r;
cin >> n >> a >> b;

if (a+b>n){	
	r=(((4*a)+(2*b))/n)+((a+b)/n);
cout <<ceil(r);
		  }
if (a+b<=n)
{
r=(((4*a)+(2*b))/n)+((a+b)/n);
cout <<floor(r);
}

return 0;
}