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

	int l, r, d;
	cin >> l >> r >> d;

	if(d < l or d > r) {
		cout << d << endl;
	} else {
		cout << d*((r/d)+1) << endl;
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
