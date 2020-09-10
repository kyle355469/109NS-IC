#include <iostream>
//#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int times, h_times;
	cin >> times;
	h_times = times / 2;
	for(int i = 0; i < pow(10, times); i++){
		int f = i / pow(10, h_times);
		int s = i - f * pow(10, h_times);
		//cout << f << " " << s << "\n";
		if(pow(f + s, 2) == i) cout << setw(times) << setfill('0') << i << "\n"; 
	}
	return 0;
} 
