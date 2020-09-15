#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long long dp[30001] = {1}, add[11] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
	for(int i = 0; i < 11; i++){
		for(int j = add[i]; j <= 30001; j++){
			dp[j] += dp[j - add[i]];
		}
	}
	float ans;
	while(cin >> ans){
		if(ans == 0.00){
			break;
		}
		int ans_int;
		//cout << fixed << setprecision(2) << ans << endl;
		ans_int = ans * 100;
		if(ans_int % 5 != 0){
			ans_int += 1;
		}
		
		cout << setw(3) << fixed << setprecision(2) << ans << setw(17) << dp[ans_int] << endl;
		
		
	}
	return 0;
}
