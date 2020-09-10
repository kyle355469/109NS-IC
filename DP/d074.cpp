#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	int num[t];
	for(int i = 0; i < t; i++){
		cin >> num[i];
	}
	int max = -9999;
	for(int i = 0; i < t; i++){
		if(num[i] > max){
			max = num[i];
		}
	}
	cout << max;
	return 0;
}
