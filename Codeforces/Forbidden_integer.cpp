#include <iostream>

using namespace std;

void solve() {
	int n, k, x;
	cin >> n >> k >> x;
	
	if(x != 1) {
		cout << "YES" << endl;
		cout << n << endl;
		for(int i = 1; i <= n; i++) {
			cout << 1 << " ";
		} cout << endl;
	} else {
		if(n%2 == 0 and k >= 2) {
			cout << "YES" << endl;
			cout << n/2 << endl;
			for(int i = 1; i <= n/2; i++) {
				cout << 2 << " ";
			} cout << endl;
		} else if(k > 2) {
			cout << "YES" << endl;
			cout << n/2 << endl;
			cout << 3 << " ";
			for(int i = 1; i < n/2; i++) {
				cout << 2 << " ";
			} cout << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}

int main() {
	
	int t;
	cin >> t;
	
	while(t--) solve();
}
