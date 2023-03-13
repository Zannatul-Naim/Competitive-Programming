#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n, k, d, w;
	cin >> n >> k >> d >> w;

	int t[n];
	for(int i = 0; i < n; i++) {
		cin >> t[i];
	}

	int ans = 0, wt = 1, rm = 0;

	for(int i = 0; i < n; i++) {

		if(rm == 0 or wt < t[i]) {
			ans++;
			rm = k-1;
			wt = t[i] + w + d;
		} else rm--;
	}

	cout << ans << endl;

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
