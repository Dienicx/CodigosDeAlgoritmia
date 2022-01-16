#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main () {

int n,k,r;
cin >>n;
cin >>k;

for(int i=0;i<k;k--){
	
	if (n%10!=0)
	n=n-1;
	else
	n=n/10;
	}
	cout<<n;
	return 0;
}
