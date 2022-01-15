#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main () {

float r,x,y,z;
cin >>x;
cin >>y;
cin >>z;
r= (((2*x+y)/z)*(pow(y,3)-z))/((((x+(2*y)+(3*z))/(z-(2*y)-3*x))+pow(x,2)+pow(z,2)));

cout << r;

return 0;
}