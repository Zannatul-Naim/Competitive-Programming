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

	ll n, m;
	cin >> n >> m;

	ll k = 1, x = n;

	while(x%10 == 0 && x > 0) x /= 10;

	while(x%2 == 0 and k*5 <= m) {
		x /= 2;
		k *= 5;
	}

	while(x%5 == 0 and k*2 <= m) {
		x /= 5;
		k *= 2;
	}

	while(k*10 <= m) k *= 10;

	k = k * (m/k);

	cout << n*k<< endl;

	
	
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
