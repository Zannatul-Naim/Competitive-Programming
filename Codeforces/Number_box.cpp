#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n, m;
	cin >> n >> m;

	int a[n][m];
	int neg = 0, sum = 0, mn = INT_MAX;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
			if(a[i][j] < 0) {	
				neg++;
				a[i][j] = -a[i][j];
			}
			sum += a[i][j];
			mn = min(mn, a[i][j]);
		}
	}

	if(neg % 2 == 0) {
		cout << sum << endl;
	} else {
		cout << sum - mn*2 << endl;
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
