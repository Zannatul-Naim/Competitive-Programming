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

	ll n;
	cin >> n;

	string s;
	cin >> s;

	vector < ll > v;
	ll ans = 0;

	for(ll i = 0; i < n; i++) {
		ll x = n-i-1;

		if(s[i] == 'L') {
			v.push_back(x-i);
			ans += i;
		} else {
			v.push_back(i-x);
			ans += x;
		}
	}

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	for(auto i : v) {
		if(i > 0) ans += i;
		cout << ans << " ";
	} cout << endl;

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}
