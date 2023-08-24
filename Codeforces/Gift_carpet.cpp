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

	int n, m;
	cin >> n >> m;

	char ch [n][m];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> ch[i][j];
		}
	}

	string s = "";
	string ans = "vika";
	int k = 0;
	for(int j = 0; j < m; j++) {
		for(int i = 0; i < n; i++) {
			if(k < m and ch[i][j] == ans[k]) {
				s += ans[k];
				k++;
				break;
			}
		}
		if(k >= m) break;
	}

	if(s == ans) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

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
