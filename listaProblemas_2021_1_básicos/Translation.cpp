#include <iostream>
#include <stdio.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
string a,b;
int main() {
	cin >>a;
  	cin >>b;
  	reverse(a.begin(), a.end());
  	if (a==b){
  		cout <<"YES";
	  }
	else {
		cout <<"NO";
	}
}