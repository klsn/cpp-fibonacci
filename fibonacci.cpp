#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n, vector<int> &mem){
	if (mem.at(n)!=-1) return mem.at(n);
	int sum = fibonacci(n-1, mem) + fibonacci(n-2, mem);
	mem.at(n) = sum;
	return sum;
}
	
int main() {
	int inpt;
	cin >> inpt;
	vector<int> mem(inpt+1, -1);
	mem.at(0) = 1; 
	mem.at(1) = 1;
	fibonacci(inpt, mem); 
	for (int i=0;i<inpt;i++)
		cout << mem.at(i) << endl;
}
