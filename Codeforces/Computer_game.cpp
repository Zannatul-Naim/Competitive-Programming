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

	ll k, n, a, b;
	cin >> k >> n >> a >> b;

	if(n*b >= k) {
		cout << -1 << endl;
		return;
	}

	k = k - n*a;
	if(k > 0) {
		cout << n << endl;
		return;
	}

	k = abs(k);

	ll d = a-b;
	ll x = (k+d)/d;
	if(x-n > 0) {
		cout << -1 << endl;
	} else {
		cout << n - x << endl;
	}

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
