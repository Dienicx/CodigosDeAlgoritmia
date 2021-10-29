#include <bits/stdc++.h>
using namespace std;

unsigned long long int arr[100];
unsigned long long int f(int a);
int main()
{
	int n;
    cin >> n;

    cout <<f(n);

return 0;

}

unsigned long long int f(int n)
{
		if (n<4)
		{
			return 10;
		}
		if (arr[n]!=0)
			return arr[n];
		else 
		{
			arr[n]=(f(n-2)+f(n-4)+30);
		}
		return arr[n];
}
