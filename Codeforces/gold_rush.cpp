#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool gold(ll n, ll m) {
	if(m == n) return 1;
	if(n%3 != 0 or m > n) {
		return 0;
	}
	return gold(n/3, m) or gold((2*n)/3, m);
}

void solve() {
	
	ll n, m;
	cin >> n >> m;
	
	if(gold(n, m)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
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
