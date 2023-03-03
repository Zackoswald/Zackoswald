#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int array[3];
	for(int i = 100; i <=999; i++){
		int buffer = i;
		for(int j = 0; j < 3; j++){
			array[j] = buffer % 10;
			buffer /= 10; 
		}
		if(pow(array[0], 3) + pow(array[1], 3) + pow(array[2], 3) == i){
			cout << i << endl;
		}
	}
	return 0;
}
