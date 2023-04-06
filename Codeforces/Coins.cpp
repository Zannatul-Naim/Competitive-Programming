#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {

	ll n, k;
	cin >> n >> k;

	if((n-k) % 2 == 0 or (n-2) % k == 0) {
		cout << "YES" << endl;
		return;
	}

	if(n % 2 == 0 or n % k == 0) {
		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;
	
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
