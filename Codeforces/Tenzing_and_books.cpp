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

	int n, x;
	cin >> n >> x;

	int a[n];

	for(auto &i : a) cin >> i;

	int ans = 0;

	for(auto i : a) {
		if((x|i) == x) ans |= i;
		else break;
	}

	for(auto &i : a) cin >> i;

	for(auto i : a) {
		if((x|i) == x) ans |= i;
		else break;
	}

	for(auto &i : a) cin >> i;

	for(auto i : a) {
		if((x|i) == x) ans |= i;
		else break;
	}

	if(ans == x) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
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
