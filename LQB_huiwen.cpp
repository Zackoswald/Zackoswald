#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n = 0;
	int cache[6];
	cin >> n;
	if(n > 54 || n < 0)cout << "Invalid symbol";
	for(int i = 10000; i <= 99999; i++){
		int buffer = i;
		for(int j = 0; j < 5; j++){
			cache[j] = buffer % 10;
			buffer /= 10;
		}
		if(cache[0] + cache[1] + cache[2] + cache[3] + cache[4] == n && cache[0] == cache[4] && cache[1] == cache[3])
			cout << i << endl;
	}
	
	for(int i = 100000; i <= 999999; i++){
		int buffer = i;
		for(int j = 0; j < 6; j++){
			cache[j] = buffer % 10;
			buffer /= 10;
		}
		if(cache[0] + cache[1] + cache[2] + cache[3] + cache[4]  + cache[5] == n && cache[0] == cache[5] && cache[1] == cache[4] && cache[2] == cache[3])
			cout << i << endl;
	}
	return 0;
}
