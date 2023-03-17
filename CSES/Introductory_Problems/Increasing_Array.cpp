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
 
	ll a[n];
 
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll c = 0;
	for(int i = 0; i < n-1; i++) {
		if(a[i] > a[i+1]) {
			while(a[i] != a[i+1]) {
				a[i+1]++;
				c++;
			}
		}
	}
 
	cout << c << endl;
	
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
