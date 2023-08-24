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

	int n;
	cin >> n;

	vector < int > v(n);
	for(auto &i : v) cin >> i;

	vector < int > ans;
	ans.push_back(v[0]);
	for(int i = 1; i < n; i++) {
		if(v[i] < v[i-1]) {
			if(v[i] == 1) ans.push_back(1);
			else ans.push_back(v[i]-1);
		}
		ans.push_back(v[i]);
	}

	cout << ans.size() << endl;

	for(auto i : ans) cout << i << " ";
	cout << endl; 
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
