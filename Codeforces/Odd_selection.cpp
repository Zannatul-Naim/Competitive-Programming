#include<bits/stdc++.h>

using namespace std;

void solve() {

	int n, x;
	cin >> n >> x;

	int odd = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;

		if(x%2) odd++;
	}
	bool flag = false;
	if(odd == 0) {
		flag = false;
	} else if(x <= odd) {
		if(x%2 == 0 and odd == n) flag = false;
		else flag = true;
	} else if(x > odd) {
		if(odd%2) flag = true;
		else {
			if(x <= n-1) flag = true;
			else flag = false;
		}
	}

	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;

}	

int main() {
  
	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
