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

	vector < string > ans;

	for(int i = 0; i < 2*n - 2; i++) {

		string t;
		cin >> t;

		if(t.size() == n-1) ans.push_back(t);
	}

	reverse(ans[1].begin(), ans[1].end());

	if(ans[0] == ans[1]) cout << "YES" << endl;
	else cout << "NO" << endl;

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
