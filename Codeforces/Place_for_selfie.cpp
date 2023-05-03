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

	ll n, m;
	cin >> n >> m;

	vector < ll > k(n);

	for(auto &i : k) cin >> i;

	sort(k.begin(), k.end());

	for(int i = 0; i < m; i++) {
		ll a, b, c;
		cin >> a >> b >> c;

		ll d = lower_bound(k.begin(), k.end(), b) - k.begin();

		if(d < n and ((k[d]-b)*(k[d]-b)) < 4*a*c) {
			cout << "YES" << endl;
			cout << k[d] << endl;
			continue;
		}
		if(d > 0 and ((k[d-1]-b)*(k[d-1]-b)) < 4*a*c) {
			cout << "YES" << endl;
			cout << k[d-1] << endl;
			continue;
		}

		cout << "NO" << endl;

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
