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

	vector < ll > p(n);

	for(auto &i : p) cin >> i;

	ll sm = accumulate(p.begin(), p.end(), 0LL);

	ll pw = 1 << n;

	ll ans = INT_MAX;

	for(int i = 0; i < pw; i++) {

		ll s = 0;

		for(int j = 0; j < n; j++) {

			if(i & (1 << j)) {
				s += p[j];
			}
		}
		ll s1 = sm - s;
		ans = min(ans, abs(s1-s));
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

	return 0;
}
