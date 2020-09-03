#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	
	int now, input = 0;
	int num[1000000] = {};
	/*int aaa;
	cin >> aaa;
	int num[aaa] = {};
	for(int i = 0; i < aaa; i++){
		cin >> num[i];	
	}*/
	while(cin >> input){
		num[now++] = input;
		char end = getchar();
		if(end == '\n') break;
	}
	for(int i = now - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(num[j] > num[j + 1]){
				num[j + 1] += num[j];
				num[j] = num[j + 1] - num[j];
				num[j + 1] -= num[j];
			}
		}
	}
	cout << num[now / 2];
	return 0;
} 
