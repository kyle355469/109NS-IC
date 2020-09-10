#include <iostream>
using namespace std;

int main(){
	long long dp[77] = {1, 1, 2};
	int ans;
	for(int i = 3; i < 77; i++){
		dp[i] = dp[i - 2] + dp[i - 3];
	}
	while(cin >> ans){
		cout << dp[ans] << endl;
	}
	return 0;
} 
