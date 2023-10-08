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

	ll n;
	cin >> n;
	if(n == 0) cout << 0 << endl;
	else if((n+1)&1) cout << n+1 << endl;
	else cout << (n+1)/2 << endl;

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
