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

	ll a, b;
	cin >> a >> b;

	if(a == b) {
		cout << 0 << " " << 0 << endl;
		return;
	}

	ll x = abs(a-b);

	cout << x << ' ' << min(a%x, (x-a%x)) << endl;

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
