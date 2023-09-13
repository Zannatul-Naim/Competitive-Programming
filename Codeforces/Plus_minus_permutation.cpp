#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

ll lcm(ll x, ll y) {
	ll z = __gcd(x, y);
	return ((x*y) / z);
}

void solve() {
	
	ll n, x, y;
	cin >> n >> x >> y;

	ll l = (n / x) - (n / lcm(x, y));
	ll r = (n / y) - (n / lcm(x, y));

	ll ans1 = (n*(n+1)/2) - ((n-l)*(n-l+1)/2);   // sum of (1-n) subtract sum of (a-(n-l))
	ll ans2 = r * (r+1) / 2 ;

	cout << ans1 - ans2 << endl;

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
