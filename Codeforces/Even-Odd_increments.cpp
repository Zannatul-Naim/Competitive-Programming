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

	ll n, q;
	cin >> n >> q;

	ll ans = 0;
	ll a[2];
	a[0] = a[1] = 0;

	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;

		a[x&1]++;
		ans += x;
	}

	for(int i = 1; i <= q; i++) {
		int x, y;
		cin >> x >> y;

		ans += a[x]*y;
		if(y&1) {
			a[x^1] += a[x];
			a[x] = 0;
		}
		cout << ans << endl;
	}
	
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
