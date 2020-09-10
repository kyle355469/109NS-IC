#include <iostream>
using namespace std;

int main(){
	long long dp[51] = {1, 1, 2, 3};
	int ans;
	for(int i = 4; i < 51; i++){
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	while(cin >> ans){
		if(ans == 0){
			break;
		}
		cout << dp[ans] << endl;
	}
	return 0;
} 
