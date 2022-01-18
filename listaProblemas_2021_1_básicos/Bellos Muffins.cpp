#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main () {
						//Este problema se subio primero a 2021_2_nivel 1, lo vuelvo a subir porque aparece en esta otra lista nuevamente
int N,M,a,b,r;
cin >>N;
cin >>M;
	a= N/M;
	b= N%M;
	r=a+b;
cout << r ;

return 0;
}