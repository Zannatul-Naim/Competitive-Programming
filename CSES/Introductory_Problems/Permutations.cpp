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
 
	if(n == 2 || n == 3) { 
		cout << "NO SOLUTION" << endl;
		return;
	} 
	if(n == 4) {
		cout << "2 4 1 3" << endl;
		return;
	}
 
	int x = n/2;
	int y = n;
 
	while(x) {
		cout << y-- << " " << x-- << " ";
	}
	if(n&1) cout << n/2+1 << endl;
	else cout << endl;
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
