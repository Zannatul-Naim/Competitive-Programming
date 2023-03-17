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
 
	cout << n << " ";
	while(n != 1) {
		if(n&1) n = 3*n + 1;
		else n /= 2;
 
		cout << n << " ";
	} cout << endl;
	
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
