#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main () {
long long n,r;
cin >>n;

if(n%2==0)
	{
		r=n/2;
		cout <<r;
	}
else
	{
		r=-1 * ((n+1)/2);
		cout <<r;
	}
return 0;
}