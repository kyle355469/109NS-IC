#include <iostream>

using namespace std;

int main(){
	int dis;
	long long dp[101] = {0, 1, 2};
	for(int i = 3; i < 100; i++){
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	while(cin >> dis){
		cout << dp[dis] << endl;
	}
	
	return 0;
}
