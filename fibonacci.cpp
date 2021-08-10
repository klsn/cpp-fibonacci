#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
	if (n==0 || n==1) return 1;
	int sum = fibonacci(n-1) + fibonacci(n-2);
	return sum;
}
	
int main() {
	int inpt;
	cin >> inpt;
	for (int i=0;i<inpt;i++)
		cout << fibonacci(i) << endl;
}
