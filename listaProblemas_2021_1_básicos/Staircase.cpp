#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int n;
int main(){
cin>>n;
for(int i=0;i<n;i++){
	
	for(int k=n-i;k>1;k--){
	cout<<" ";

	}
	
	for (int k=i;k>=0;k--){
		cout<<"#";
	}
	cout<<endl;
}
return 0;
}