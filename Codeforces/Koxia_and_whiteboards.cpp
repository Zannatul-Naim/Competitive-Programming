#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5+1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {
	
	ll n, m;
	cin >> n >> m;

	ll a[n], b[m];

	for(auto &i : a) cin >> i;
	for(auto &i : b) cin >> i;

	ll ans = 0;

	sort(a, a+n);

	for(int i = 0; i < m; i++) {
		int x = min_element(a, a+n) - a;
		// cout << x << " ";
		a[x] = b[i];
	} // cout << endl;

	for(int i = 0; i < n; i++) ans += a[i];
	
	cout << ans << endl;

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) solve();

	return 0;
}
