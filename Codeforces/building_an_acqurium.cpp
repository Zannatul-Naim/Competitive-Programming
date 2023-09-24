#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	ll n, x;
	cin >> n >> x;

	vector < ll > v(n);
	for(auto &i : v) cin >> i;

	ll ans = INT_MAX, hi = INT_MAX, lo = 0;

	while(lo <= hi) {
		ll mid = (lo + hi)/2;
		ll tmp = 0;
		for(ll i = 0; i < n; i++) {
			tmp += max(mid-v[i], 0LL);
		}
		if(tmp <= x) {
			ans = mid;
			lo = mid+1;
		} else {
			hi = mid-1;
		}
	}

	cout << ans << endl;

}


int main()
{
	fastIO();

	int t = 1;
	cin >> t;
	while (t--) {
        solve();
    }

	return 0;
}
