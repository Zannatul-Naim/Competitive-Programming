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

	ll x, y;
	cin >> x >> y;

	if(x < y) {

		if(y&1) {
			ll k = y*y;
			cout << k-x+1 << endl;
		} else {
			ll k = (y-1)*(y-1);
			cout << k+x << endl;
		}
		
	} else {

		if(!(x&1)) {
			ll k = x*x;
			cout << k-y+1 << endl;
		} else {
			ll k = (x-1)*(x-1);
			cout << k+y << endl;
		}
	}
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
