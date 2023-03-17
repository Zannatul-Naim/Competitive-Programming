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
 
	ll n;
	cin >> n;
 
	ll p = 5;
 
	ll ans = 0;
 
	while(n / p) {
		ans += (n/p);
		p *= 5;
	}
 
	cout << ans << endl;
}
 
int main()
{
	fastIO();
 
	int t = 1;
	// cin >> t;
 
	while(t--) {
	  solve();
	}
 
	return 0;
}
