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

	ll n;
	cin >> n;
	vector < int > v;

	for(int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.push_back(abs(x));
	}
	sort(v.begin(), v.end());
	cout << v[0] << endl;

}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while (t--) {
        solve();
    }

	return 0;
}
