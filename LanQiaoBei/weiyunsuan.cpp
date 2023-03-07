#include <iostream>
using namespace std;

int main(){
	int arr[105];
	int count= 0;
	for(int j = 0; j < 32; j++){
		for(int i = 31; i >= 0; i--){
			arr[i] = j & (1 << i) ? 1 : 0;
		}
		for(int i = 4; i >= 0; i--){
			cout << arr[i];
		}
		count++;
		cout << endl;
	}	
	cout << count << endl;
	return 0;
}
