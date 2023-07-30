#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {
	
	ll n;
	cin >> n;
	ll mx = 1;
	ll cnt = 0;
	for(ll i = 1; i <= 10000; i++) {
		if(n % i == 0) {
			cnt++;
		} else {
			mx = max(mx, cnt);
			cnt = 0;
		}
	}
	mx = max(cnt, mx);

	cout << mx << endl;


}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) solve();

	return 0;
}
