#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back
#define YES 1
#define NO 0

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void print(bool f) {
	if(f) cout << "YES" << endl;
	else cout << "NO" << endl;
}

void solve() {

	ll n, k;
	cin >> n >> k;

	ll a[n];

	for(ll i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a+n);

	ll pre[n+1];
	pre[0] = 0;
	for(int i = 1; i <= n; i++) {
		pre[i] = pre[i-1] + a[i-1];
	}
	ll ans = 0;
	for(int i = 0; i <= k; i++) {
		ans = max(ans, (pre[n-(k-i)] - pre[2*i]));
	}

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
