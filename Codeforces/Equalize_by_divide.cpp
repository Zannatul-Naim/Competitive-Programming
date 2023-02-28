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
	int a[n];

	for(int i = 1; i <= n; i++) cin >> a[i];

	vector < pair < int, int > > ans;

	int mx = *max_element(a+1, a+n+1);
	int mn = *min_element(a+1, a+n+1);

	if(mx == mn) {
		cout << "0" << endl;
		return;
	}

	if(mn == 1) {
		cout << -1 << endl;
		return;
	}

	while(*min_element(a + 1, a + n + 1) != *max_element(a + 1, a + n + 1)) {
		
			int ind = min_element(a + 1, a + n + 1) - a;
			int x = a[ind];

			for(int i = 1; i <= n; i++)
				if((a[i] - 1) / x + 1 > 1)
					a[i] = (a[i] - 1) / x + 1, ans.push_back({i, ind});
		}

	cout << ans.size() << endl;
	for(auto i : ans) {
		cout << i.first << " " << i.second << endl;
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

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}
