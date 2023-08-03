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

bool check(int r, int g, int b, int w) {

	int s = r%2 + g%2 + b%2 + w%2;
	if(s > 1) return false;
	else return true;
}


void solve() {
	
	ll n, k;
	cin >> n >> k;

	if(k >= n) {
		ll ans = k / n;

		if(k%n) cout << ans+1 << endl;
		else cout << ans << endl;
	} else {
		ll ans = n / k;
		if(n%k) cout << 2 << endl;
		else cout << 1 << endl;
	}

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) solve();

	return 0;
}
