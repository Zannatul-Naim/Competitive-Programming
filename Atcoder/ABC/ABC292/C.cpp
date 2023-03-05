#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back
#define sortAll sort(v.begin(), v.end());


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n;
	cin >> n;

	ll a[n+1];
	memset(a, 0, sizeof(a));

	for(int i = 1; i <= n; i++) {
		for(int j = 1; i*j <= n; j++) {
			a[i*j]++;
		}
	}

	ll ans = 0;

	for(int i = 1; i < n; i++) {
		ans += a[i]*a[n-i];
	}

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

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}
