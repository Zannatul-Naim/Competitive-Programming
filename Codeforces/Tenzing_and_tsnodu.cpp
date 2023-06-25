#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define INF INT_MAX


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {

	ll x, y;
	cin >> x >> y;

	ll a[x], b[y];

	for(int i = 0; i < x; i++) cin >> a[i];
	for(int j = 0; j < y; j++) cin >> b[j];

	ll s1 = 0, s2 = 0;
	for(auto i : a) s1 += i;
	for(auto i : b) s2 += i;

	if(s1 > s2) cout << "Tsondu" << endl;
	else if(s1 < s2) cout << "Tenzing" << endl;
	else cout << "Draw" << endl;

}	

int main() {

	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
