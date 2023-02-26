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

	vector < int > v(n);

	for(auto &i : v) cin >> i;
	
	for(int i = 0; i < n-1; i++) {

		for(int j = i+1; j < n; j++) {

			if(gcd(v[i], v[j]) < 3) {
				cout << "YES" << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;

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
