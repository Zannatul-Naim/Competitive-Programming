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

	int n, m;
	cin >> n;

	map <int, int> mp;

	for(int i = 1; i <= n; i++) {

		cin >> m;

		for(int j = 1; j <= m; j++) {

			int x;
			cin >> x;

			mp[x] = i;
		}
	}


	map <int, int> ans;

	for(auto i : mp) {
		ans[i.second] = i.first;
	}

	if(ans.size() != n) {
		cout << -1 << endl;
		return;
	}

	for(auto i : ans) {
		cout << i.second << ' ';
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

	return 0;
}
