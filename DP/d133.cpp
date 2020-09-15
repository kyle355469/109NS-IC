#include <iostream>

using namespace std;

int main(){
	int ans;
	long long dp[30001] = {1}, add[5] = {1, 5, 10, 25, 50};
	for(int i = 0; i < 5; i++) {
		for(int j = add[i]; j < 30001; j++) {
			dp[j] += dp[j - add[i]];
			
		}
	}
	
	while(cin >> ans)
		if(dp[ans] == 1){
			cout << "There is only " << dp[ans] << " way to produce " << ans << " cents change." << endl; 
		}else{
			cout << "There are " << dp[ans] << " ways to produce " << ans << " cents change." << endl; 
		}
		
	return 0;
}
