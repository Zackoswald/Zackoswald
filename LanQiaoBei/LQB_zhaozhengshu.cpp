#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
	int n, target;
	int a1[1000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a1[i];
	}
	cin >> target;
	for(int i = 0; i < n; i++){
		if(a1[i] == target){
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
	
}
