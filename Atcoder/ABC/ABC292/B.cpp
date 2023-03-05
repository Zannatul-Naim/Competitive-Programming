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

	int n, k;
	cin >> n >> k;

	map < int, int > mp;

	for(int i = 1; i <= k; i++) {
		mp[i] = 0;
	}

	for(int i = 1; i <= k; i++) {

		int x, y;
		cin >> x >> y;

		if(x == 3) {
			if(mp[y] >= 2) cout << "Yes" << endl;
			else cout << "No" << endl;
		} else if(x == 2){
			mp[y] += 2;
		} else {
			mp[y]  += 1;
		}
	}

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
