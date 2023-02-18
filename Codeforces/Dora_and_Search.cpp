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
 
	int mn = 1;
	int mx = n;

	int l = 0, r = n-1;

	int cnt = 0;
	while(l < r) {
		if(v[l] == mx) {
			mx--;
			l++;
			cnt++;
		}
		if(v[l] == mn) {
			mn++;
			l++;
			cnt++;
		}
		if(v[r] == mx) {
			mx--;
			r--;
			cnt++;
		}
		if(v[r] == mn) {
			mn++;
			r--;
			cnt++;
		}

		if(!cnt) break;
		else cnt = 0;
	}

	if(l >= r) cout << -1 << endl;
	else cout << l+1 << " " << r+1 << endl;

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
