#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	long long dp[41] = {0 ,1, 5, 11};
	int ans = 0;
	for(int i = 4; i < 41; i++){
		dp[i] = dp[i - 1] + 4 * dp[i - 2] + 2 * dp[i - 3];
		//cout << dp[i] << endl;
	}
	while(t > 0){
		cin >> ans;
		cout << dp[ans] << endl;
		t--;
	}
	return 0;
}
