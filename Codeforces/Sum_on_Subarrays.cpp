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

	if(k == 0) {
		for(ll i = 0; i < n; i++) cout << -1 << " ";
		cout << endl;
		return;
	}

	ll i;
	for(i = n; i > 0; i--) {
		if(k > i) {
			cout << 1000 << " ";
			k -= i;
		} else {
			
			cout << 2*k - 1 << " ";
			i--;
			break;
		}
	}

	while(i--) cout << -2 << " ";
	cout << endl;

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
