#include <iostream>
using namespace std;

int temp[100];
int bucket[10];

//jin qiu zui goa wei shu 
int maxBit(int data[], int n){
//qiu zui da zhi
	int maxData = data[0];
	for(int i = 0; i < n; i++){
		if(maxData < data[i]){
			maxData = data[i];
		}
	}
//qiu zui da zhi de wei shu
	int d = 1;
	while(maxData >= 10){
		maxData /= 10;
		d++;
	}
	return d;
}

void radixsort(int data[], int n){
	int d = maxBit(data, n);
	int i, j, k;
	int radix = 1;
	for(i = 1; i <= d; i++){
		//chu shi hua 
		for(j = 0; j < 10; j++){
			bucket[j] = 0;
		}
		//ji lu ge wei shu 
		for(j = 0; j < n; j++){
			k = (data[j] / radix) % 10;
			bucket[k]++;
		}
		for(j = 1; j < 10; j++){
			bucket[j] = bucket[j - 1] + bucket[j];
		}
		for(j = n - 1; j >= 0; j--){
			k = (data[j] / radix) % 10;
			temp[bucket[k] - 1] = data[j];
			bucket[k]--;
		}
		for(j = 0; j < n; j++){
			data[j] = temp[j];
		}
		radix = radix * 10;
	}
}

int main(){
	int a[4] = {2, 1, 34, 4};
	radixsort(a, 4);
	for(int i = 0; i <4; i++){
		cout << temp[i] << " ";
	}
}
