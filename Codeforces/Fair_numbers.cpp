#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5+1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool isFair(ll n) {

	ll m = n;

	while(m) {
		int d = m%10;
		if(d != 0 and n%d != 0) return false;
		m /= 10;
	}

	return true;
}

void solve() {
	
	ll n;
	cin >> n;

	for(ll i = n; i <= n+10000; i++) {
		if(isFair(i)) {
			cout << i << endl;
			break;
		}
	}

	return;

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) solve();

	return 0;
}
