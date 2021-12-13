#include <bits/stdc++.h>

using namespace std;

int main(){

int n, x, a, b;
vector<int> numbers;
cin >>n;


while (n){
	int i; cin >> i;
	numbers.push_back(i);
	n--;
}

cin >> x;
numbers.erase(numbers.begin()+(x-1));
cin >> a >> b;
numbers.erase(numbers.begin()+(a-1),numbers.begin()+(b-1));
cout << numbers.size() << endl;
for(int i: numbers){
	cout << i << " ";
}
    return 0;
}