#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {
		
	ll n, b;
	cin >> n >> b;

	ll a[n];

	for(ll i = 0; i < n; i++) cin >> a[i];

	int x = -1;
	for(int i = 0; i < n; i++) {

		if((a[i]&b) == b) {
			x = x&a[i];
		}
	}
	
	if(x == b) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}	

int main() {

	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
