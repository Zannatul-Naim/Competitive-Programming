#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back
#define YES 1
#define NO 0

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void print(bool f) {
	if(f) cout << "YES" << endl;
	else cout << "NO" << endl;
}

void solve() {

	int n, k;
	cin >> n >> k;

	vector < pair < int, int > > v;
	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;

		v.push_back({x, i});
	}

	int b[n+1];

	for(int i = 1; i <= n; i++) cin >> b[i];

	sort(v.begin(), v.end());
	sort(b+1, b+n+1);

	int ans[n+1];
	for(int i = 1; i <= n; i++) {
		ans[v[i-1].second] = b[i];
	}

	for(int i = 1; i <= n; i++) cout << ans[i] << " ";
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

	return 0;
}
