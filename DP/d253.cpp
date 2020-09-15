#include <iostream>

using namespace std;

int main(){
	int ans;
	long long dp[7490] = {1}, add[5] = {1, 5, 10, 25, 50};
	for(int i = 0; i < 5; i++) {
		for(int j = add[i]; j < 7490; j++) {
			dp[j] += dp[j - add[i]];
		}
	}
	while(cin >> ans)
		cout << dp[ans] << endl; 
	return 0;
}
