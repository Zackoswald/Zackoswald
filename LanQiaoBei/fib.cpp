#include <iostream>
using namespace std;

int Fib(int n){
	if(n <= 0){
		return 0;
	}
	if(n ==1 || n == 2){
		return 1;
	}
	int a, b;
	a = 1, b = 1;
	for(int i = 3; i <= n; i++){
		int c = (a + b) % 10007;
		a = b;
		b = c;
	}
	return b;
}

int main(){
	int a =0;
	cin >> a;
	cout << Fib(a) << " ";
	return 0;
}
