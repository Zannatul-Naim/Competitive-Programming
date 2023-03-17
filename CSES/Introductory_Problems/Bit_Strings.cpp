#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

ll p(ll n) {

	ll x = 1;
	ll mod = 1e9 + 7;
	for(ll i = 1; i <= n; i++) {
		x = (x*2) % mod;
	}

	return x;

}

void solve() {

	ll n;
	cin >> n;

	ll mod = 1e9 + 7;

	ll ans = p(n) % mod;

	cout << ans << endl;
}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
