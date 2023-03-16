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

	ll l, r, x, a, b;
	cin >> l >> r >> x;
	cin >> a >> b;

	if(a > b) swap(a, b);

	if(a == b) {
		cout << 0 << endl;
		return;
	}

	if(abs(a-b) >= x) {
		cout << 1 << endl;
		return;
	}

	if(a >= l+x or b <= r-x) {
		cout << 2 << endl;
		return;
	}

	if(b >= l+x and a <= r-x) {
		cout << 3 << endl;
		return;
	}

	cout << -1 << endl;
	
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
