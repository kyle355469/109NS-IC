#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string str;
	getline(cin ,str);
	int now = 0, total = 0;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == 's' || str[i] == 'S'){
			now = 1;
		}
		if(str[i] == ' ' || str[i] == ',' ||
		   str[i] == ';' || str[i] == '!' || str[i] == '.' || i == str.size() - 1){
		   	total += now;
		   	now = 0;
		}
	}
	cout << total;
	return 0;
} 
