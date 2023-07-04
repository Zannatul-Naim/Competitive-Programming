#include <iostream>

using namespace std;

void solve() {
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(i == 1 and j == 1) cout << "W";
			else cout << "B";
		} cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
	
	return 0;
}
