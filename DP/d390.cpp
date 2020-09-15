#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int type;
		cin >> type;
		int num[type];
		int dis = 0;
		for(int i = 0; i < type; i++){
			cin >> num[i];
			dis += num[i];
		}
		int dp[dis / 2 + 1] = {1};
		for(int i = 0; i < type; i++){
			for(int j = (dis / 2); j >= num[i]; j--){
				dp[j] += dp[j - num[i]];
			}
		}
		int max;
		for(int k = 0; k <= (dis/2); k++){
			if(dp[k] != 0){
				max = k;
			}
		}
		int ans = dis - max - max;
		cout << ans << endl;
		t--;	
	}
	return 0;
}
