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
 
	ll s = 0;
	for(int i = 1; i < n; i++) {
		ll x;
		cin >> x;
 
		s += x;
	}
 
	ll ss = n*(n+1)/2;
 
	cout << ss - s << endl;
	
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
