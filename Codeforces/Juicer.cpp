#include <iostream>

using namespace std;


void solve() {
	
	int n, b, d;
	cin >> n >> b >> d;
	int ans = 0;
	int s = 0;
	while(n--) {
		int x;
		cin >> x;

		if (x <= b) {
			s += x;
			if(s > d) {
				s = 0;
				ans++;
			}
		}
	}
	cout << ans << endl;
}

int main() {
	int t = 1;
	// cin >> t;
	while(t--) solve();
	
	return 0;
}
