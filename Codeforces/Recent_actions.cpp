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

	int n, m;
	cin >> n >> m;

	vector < int > v(m);
	for(auto &i : v) cin >> i;

	vector < int > ans(n, -1);

	 int x = n-1;

	 set < int > s;

    for (int i = 0; i < m; i++) {
        if (s.count(v[i])) {
            continue;
        }
        s.insert(v[i]);
        if(x > -1) {
            ans[x] = i+1;
            x--;
        }
    }

	for(int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	} cout << endl;
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
