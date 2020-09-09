#include <iostream>
#include <string>
using namespace std;
int main(){
	int a, b, n;
	cin >> a >> b >> n;
	int count = 0;
	for(int i = a; i <= b; i++){
		if(to_string(i).find(to_string(n)) != string::npos) count++;
	}
	cout << count; 
	return 0;
} 
