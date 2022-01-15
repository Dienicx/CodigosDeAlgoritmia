#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main () {

int N,M,a,b,r;
cin >>N;
cin >>M;
	a= N/M;
	b= N%M;
	r=a+b;
cout << r ;

return 0;
}