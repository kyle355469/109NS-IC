#include <iostream>
using namespace std;

int main(){
	int d0[31] = {1, 0};
	int d1[31] = {0, 2};
	int ans;
	for(int i = 2; i < 31; i++){
		d0[i] = d0[i - 2] + d1[i - 1];
		d1[i] = 2 * d0[i - 1] + d1[i - 2];
	}
	while(cin >> ans){
		if(ans == -1){
			break;
		}
		cout << d0[ans] << endl;
	}
	return 0;
} 
