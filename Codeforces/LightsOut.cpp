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

	int a[5][5];
	// for(int i = 0; i < 5; i++) a[0][i] = 0;
	// for(int i = 0; i < 5; i++) a[4][i] = 0;
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= 3; i++) {
		for(int j = 1; j <= 3; j++) cin >> a[i][j];
	}

	for(int i = 1; i <= 3; i++) {
		for(int j = 1; j <= 3; j++) {
			cout << 1 - (a[i][j] + a[i+1][j] + a[i-1][j] + a[i][j-1] + a[i][j+1])%2;
		} cout << endl;
	}

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
