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

	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	int ans = 0;
	for(int i = 0; i < m; i++) {
		if(a[i] < 0) ans += a[i];	
		else break;
	}
	cout << abs(ans) << endl;
}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while (t--) {
        solve();
    }

	return 0;
}
