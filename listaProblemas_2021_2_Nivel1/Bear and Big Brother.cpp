#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main () {

int a,b,r;
cin >>a;
cin >>b;
r=0;
do{
	a=a*3;
	b=b*2;
	r=r+1;
} while (a<=b);

	cout <<r<<endl;
	return 0;
}
