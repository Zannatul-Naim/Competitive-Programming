#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {
	
	ll n, k;
	cin >> n >> k;

	// approach (n-k)%2 == 0 (you can't make a sum of odd using even no. of 3 or
	// you can't make sum of even using odd no. of 3)
	// k-= n%3 means no. of 3^0
	
	while(n) {

		k -= n%3;
		n /= 3;
	}

	if((n-k)%2 == 0 and k >= 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}

int main()
{
	fastIO();

	int t;
	cin >> t;

	while(t--) solve();

	return 0;
}
