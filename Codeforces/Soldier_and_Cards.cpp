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

ll p(ll n) {

	ll x = 1;
	ll mod = 1e9 + 7;
	for(ll i = 1; i <= n; i++) {
		x = (x*2) % mod;
	}

	return x;

}

void solve() {

	queue < int > q1, q2;

	int n;
	cin >> n;

	int k1;
	cin >> k1;
	for(int i = 0; i < k1; i++) {
		int x;
		cin >> x;
		q1.push(x);
	}

	int k2;
	cin >> k2;
	for(int i = 0; i < k2; i++) {
		int x;
		cin >> x;
		q2.push(x);
	}

	int c = 0; 
	while(!q1.empty() && !q2.empty()) {

		int q1f = q1.front();
		q1.pop();
		int q2f = q2.front();
		q2.pop();

		if(q1f > q2f) {
			q1.push(q2f);
			q1.push(q1f);
		} else {
			q2.push(q1f);
			q2.push(q2f);
		}

		c++;

		if(c > 1234) {
			cout << -1 << endl;
			return;
		}
	}

	cout << c << " ";
	if(q1.size() == 0) cout << 2 << endl;
	else cout << 1 << endl;

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
