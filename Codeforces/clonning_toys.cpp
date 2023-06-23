#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define INF INT_MAX


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {

	int x, y;
	cin >> x >> y;

	if(y > 0) {

		if(y == 1) {
			if(x == 0) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
			return;
		}

		if( (x-y+1) >= 0 and (x-y+1)%2 == 0) {
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;

}	

int main() {

	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
