#include <iostream>

using namespace std;

void solve() {
	
	int n, a, b;
	cin >> n >> a >> b;
	
	if(a > b) {
		cout << 1 << endl;
	} else {
		int ans = n/a;
		if(n%a != 0) ans++;
		cout << ans << endl;
	}
}

int main() {
	
	int t;
	cin >> t;
	
	while(t--) solve();
}
