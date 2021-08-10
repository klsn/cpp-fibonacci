#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
	if (n==0 || n==1) return 1;
	int sum = fibonacci(n-1) + fibonacci(n-2);
	return sum;
}
	
int main() {
	for (int i=0;i<10;i++)
		cout << fibonacci(i) << endl;
}
