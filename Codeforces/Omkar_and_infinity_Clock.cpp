#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back
#define sortAll sort(v.begin(), v.end());

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {

	ll n, k;
	cin >> n >> k;

	vector < int > v(n);

	for(auto &i : v) cin >> i;

	k = k > 1? 2+k%2 : k;

	while(k--) {

		ll d = *max_element(v.begin(), v.end());
		for(int i = 0; i < n; i++) {
			v[i] = d - v[i];
		}
	}

	for(auto i : v) cout << i << " ";
	cout << endl;

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
