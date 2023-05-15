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

	int n;
	cin >> n;
	
	int a[n+1];
	
	map <int, int> m;
	
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		m[a[i]] = i;
	}
	
	vector <ll> p;
	
	for(int i = 1; i <= n; i++) {
		if(i != a[i]) {
			p.push_back(abs(m[i] - i));
		}
	}
	
	ll ans = p[0];
	
	for(int i = 2; i < p.size(); i++) {
		ans = __gcd(ans, p[i]);
	}
	
	cout << ans << endl;
	

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
