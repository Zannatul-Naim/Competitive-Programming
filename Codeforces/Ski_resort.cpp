#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back
#define YES 1
#define NO 0

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	ll n, k, q;
	cin >> n >> k >> q;

	vector < int > v(n), c;
	for(auto &i : v) cin >> i;

	ll ans = 0, cnt = 0;

	for(int i = 0; i < n; i++) {
		if(v[i] <= q) cnt++;
		else {
			c.push_back(cnt);
			cnt = 0;
		}
	}
	if(cnt != 0) c.push_back(cnt);

	for(int i = 0; i < c.size(); i++) {

		if(c[i] >= k) {
			ll m = c[i]-k+1;
			ans += m*(m+1)/2;
		}
	}

	cout << ans << endl;

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
