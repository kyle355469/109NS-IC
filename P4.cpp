#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	int count = 0;
	int total = 0;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == 'O'){
			count += 1;
			total += count;
		}else if(str[i] == 'X'){
			count = 0;
		}
	}
	cout << total;
	return 0;
} 
