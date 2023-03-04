#include <iostream>
using namespace std;
#define N 100

class SeqList{
public:
	int data[N];
	int length;

	SeqList(){
		this->length = N;
	}
	SeqList(SeqList *s){
		for(int i = 0; i < s->length; i++){
			this->data[i] = s->data[i];
		}
	}
	SeqList(int data[], int len){
		for(int i = 0; i < len; i++){
			this->data[i] = data[i];
		}
		this->length = len;
	}
};
//jiang liang ge you xu shun xu biao jin xing he bing

SeqList* MergeSeqList(SeqList s1, SeqList s2){
	int p1 = 0, p2 = 0, p3 = 0;
	int datas[100] = {0};
	SeqList *s3 = new SeqList(datas, 10);
	while(p1 < s1.length && p2 < s1.length){
		if(s1.data[p1] > s2.data[p2]){
			s3->data[p3++] = s2.data[p2++];
		}
		else if(s1.data[p1] < s2.data[p2]){
			s3->data[p3++] = s1.data[p1++];
		}
		else{
			s3->data[p3++] = s1.data[p1++];
			p2++;
		}
	}
	while(p1 < s1.length){
		s3->data[p3++] = s1.data[p1++];
	}
	while(p2 < s2.length){
		s3->data[p3++] = s2.data[p2++];
	}
	s3->length = p3;
	return s3;
}

int main(){
	SeqList* MergeSeqList(SeqList s1, SeqList s2);
	int data1[6] = {1, 2 ,3 ,4, 7, 9};
	int data2[4] = {4, 6, 8, 9};
		
	SeqList s1(data1, 6);
	SeqList s2(data2, 4);
	SeqList s3(MergeSeqList(s1,s2));
	for(int i = 0; i < 10; i++){
		cout << s3.data[i] << "	";
	}
	cout << endl;
	
	return 0;
}
