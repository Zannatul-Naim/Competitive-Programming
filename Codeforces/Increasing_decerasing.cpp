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

void solve() {

	ll x, y, n;
	cin >> x >> y >> n;

	vector < ll > v;
	bool f = false;
	ll i;
	for(i = 1; i < n; i++) {
		v.push_back(y);
		y -= i;
		if(y < x) {
			cout << -1 << endl;
			return;
		}
	}

	v.push_back(x);

	for(int i = v.size()-1; i >= 0; i--) cout << v[i] << " ";
	cout << endl;
	
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
