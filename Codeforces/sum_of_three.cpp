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

	if(n%3 == 0 and n <= 9) cout << "NO" << endl;
	else if(n <= 5) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		if(n%3) cout << 1 << " " << 2 << " " << n-3 << endl;
		else cout << 1 << " " << 4 << " " << n-5 << endl;
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
