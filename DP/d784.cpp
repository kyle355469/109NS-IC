#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	int now = 0;
	int ans[t];
	while(now < t){
		int num;
		cin >> num;
		int test[num];
		for(int i = 0; i < num; i++){
			cin >> test[i];
		}
		int max = -8999;
		int now_num = 0;
		for(int i = 0; i < num; i++) {
			now_num += test[i];
			//cout << now_num << " ";
			if(now_num > max){
				//cout << max << " " << now_num << endl;
				max = now_num;
				//cout << max << " " << now_num << endl << endl;
			}
			if(now_num < 0){
				now_num = 0;
			}
			//cout << now_num << endl;
		}
		ans[now] = max;
		//cout << ans[now];
		now++;
		//cout << endl;
	}
	for(int i = 0; i < t ; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
