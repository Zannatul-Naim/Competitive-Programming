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

ll p(ll n) {

	ll x = 1;
	ll mod = 1e9 + 7;
	for(ll i = 1; i <= n; i++) {
		x = (x*2) % mod;
	}

	return x;

}

void solve() {

	int n;
	cin >> n;

	int z = 0, o = 0;

	for(int i = 0; i < n; i++) {

		int x;
		cin >> x;

		if(x == 0) z++;
		else if(x == 1) o++;
	}	

	if(z <= (n+1)/2) {
		cout << 0 << endl;
		return;
	}
	if(z+o < n or o == 0) {
		cout << 1 << endl;
		return;
	}

	cout << 2 << endl;

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
