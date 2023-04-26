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

	ll a[n];

	for(ll i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a+n);

	ll ans = max(a[0]*a[1], a[n-1]*a[n-2]);

	cout << ans << endl;

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
