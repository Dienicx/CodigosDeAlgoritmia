#include <iostream>
using namespace std;

int main()
{

int n;
int k;
 cin >> n;
 int arr[n];
 for (int i=0;i<n;i++)
    {
    cin >>arr[i];

    }
    cin >> k;
 for (int i=0;i<n;i++)
    {
        if (arr[i]%k==0)
            {
            cout << arr[i] <<" ";
            }
        else
            {
            cout <<"X ";
            }
    }
  return 0;
}
