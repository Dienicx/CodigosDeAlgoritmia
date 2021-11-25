#include <bits/stdc++.h>

using namespace std;

int main(){

    int n=0;

    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin >> arr[i];

    }
        for(int i=0; i<n; i++){

        cout <<arr[i]<<" ";
    

    }
    cout <<endl;
    sort(arr, arr+n);
        for(int i=0; i<n; i++){

        cout << arr[i] << " ";
        

    }
cout <<endl;
    sort(arr, arr+n, greater<int>());

    for(int i=0; i<n; i++){

        cout << arr[i] << " ";
        

    }
cout <<endl;
    return 0;
}