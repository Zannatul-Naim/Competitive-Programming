#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	ll n;
	cin >> n;

	vector < ll > v(n);

	for(auto &i : v) cin >> i;

	sort(v.begin(), v.end());
	if(v[0] == v[n-1]) {
		cout << 0 << endl;
		return;
	}

	ll x = v[0], y = v[0];

	for(ll i = 1; i < n; i++) x &= v[i];
	for(ll i = 1; i < n; i++) y |= v[i];

	cout << y - x << endl;
	
}	

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
