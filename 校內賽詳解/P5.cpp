#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	int arr[100000] = {};
	for(int i = 0; i < str.size(); i++){
		switch(str[i]){
			case 'I':
				arr[i] = 1;
				break;
			case 'V':
				arr[i] = 5;
				break;
			case 'X':
				arr[i] = 10;
				break;
			case 'L':
				arr[i] = 50;
				break;
			case 'C':
				arr[i] = 100;
				break;
			case 'D':
				arr[i] = 500;
				break;			
			case 'M':
				arr[i] = 1000;
				break;
		}
	}
	/*for(int i = 0; i < str.size(); i++){
		cout << arr[i] << " ";
	}*/
	int total = 0;
	int base = 0;
	for(int i = str.size(); i >= 0; i--){
		if(base <= arr[i]){
			base = arr[i];
			total += arr[i];
		}else{
			total -= arr[i];
		}
	}
	cout << total;
	return 0;
} 
