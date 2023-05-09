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


void solve() {

	ll n;
	cin >> n;
	
	ll a = 10000000, b = 10000000, c = 10000000;
	
	for(ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		
		string s;
		cin >> s;
		
		if(s == "01") {
			a = min(a, x);
		} else if(s == "10") {
			b = min(b, x);
		} else if(s == "11") {
			c = min(c, x);
		}
	}
	
	if(a == 10000000 or b == 10000000 ) {
		
		if(c == 10000000) {
			cout << -1 << endl;
		} else {
			cout << c << endl;
		}
	} else {
		if(c != 10000000) {
			cout << min(a+b, c) << endl;
		} else {
			cout << a+b << endl;
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
