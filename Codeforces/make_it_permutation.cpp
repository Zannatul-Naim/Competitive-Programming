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
	
	ll n, c, d;
	cin >> n >> c >> d;

	ll a[n], b[n];
	for(ll i = 1; i <= n; i++) {
		cin >> a[i];
	}

	sort(a+1, a+n+1);

	unordered_map < ll, bool > vis;  // visit more than one occurence of an element.

	ll j = 0, rm = 0;
	for(ll i = 1; i <= n; i++) {
		if(!vis[a[i]]) {
			b[++j] = a[i];  // array b with only single elements
			vis[a[i]] = true;
		} else {
			rm += c; // remove duplicates
		}
	}

	ll ans = 1e18+10;

	for(ll i = 1; i <= j; i++) {
		ll x = (b[i] - i) * d + (j - i) * c;
		ans = min(x, ans);
	}

	if(b[1] != 1) {
		ll x = j*c + d;

		ans = min(x, ans);
	}

	cout << ans+rm << endl;

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
