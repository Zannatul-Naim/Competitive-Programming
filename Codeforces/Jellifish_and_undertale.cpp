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

	ll a, b, n;
	cin >> a >> b >> n;

	ll ans = b;

	for(int i = 0; i < n; i++) {
		ll x;
		cin >> x;

		ans += min(a-1, x);
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
