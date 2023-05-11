#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back
#define YES 1
#define NO 0

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void print(bool f) {
	if(f) cout << "YES" << endl;
	else cout << "NO" << endl;
}

void solve() {

	ll n, m;
	cin >> n >> m;

	if(n == 1 or m == 1) print(YES);
	else if(m >= n) print(NO);
	else {
		ll x = n;
		for(ll i = 2; i*i <= n; i++) {
			if(n % i == 0) {
				x = i; 
				break;
			}
		}
		if(m >= x) print(NO);
		else print(YES);
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
