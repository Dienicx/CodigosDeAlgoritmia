#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
 
 int n,w,k,pagar;
 
int main()
{
 cin >> k; 
 cin >> n; 
 cin >> w;
for(int i=1;i<=w;i++){
   pagar = pagar+(k*i);
 			}
if (pagar-n<0){
    cout << 0;
		}
else{
    cout << pagar-n;
}
 
return 0;
}