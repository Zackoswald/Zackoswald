#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
	char arr[100];
	stack<char> buffer;
	queue<int> q1;
	int n, m;
	cin >> n >> m;
	if(n < 1)return 0;
	if(m > 26)return 0;
	char inner = 'A' + m - 1;
	for(int i = 0; i < m; i++){
		buffer.push(inner);
		inner--;
	}
/*
for(int i = 0; i < m; i++){
		char buf = buffer.top();
		buffer.pop();
		cout << buf << " ";
	}

*/
	inner = 'B';
	for(int i = 0; i < n - 1; i++){
		buffer.push(inner);
		inner++;
	}
	for(int i = 0; i < m + n - 1; i++){
		arr[i] = buffer.top();
		buffer.pop();
	}
	char *p1 = arr + m + n - 2;
	for(; p1 != arr + m - 2; p1--){
		for(char *p2 = p1 - m + 1; p2 != p1 + 1; p2++){
			cout << *p2;	
		}
		cout << endl;
	}
	return 0;
}
