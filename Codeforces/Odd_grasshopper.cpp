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

	ll x, n;
	cin >> x >> n;

	if(n%4 == 0) {
		cout << x << endl;
		return;
	}

	if(n%4 == 1) {
		if(x&1) cout << x+n << endl;
		else cout << x-n << endl;
		return;
	}

	if(n%4 == 2) {
		if(x&1)	cout << x-1 << endl;
		else cout << x+1 << endl;
		return;
	}

	if(x%2 == 0) cout << x+n+1 << endl;
	else cout << x-n-1 << endl;

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
