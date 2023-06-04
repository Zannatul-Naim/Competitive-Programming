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

void solve() {

	int n, k;
	cin >> n >> k;

	if(k == 1) {
		cout << n << endl;
		return;
	}

	int ans = n/k;

	if(n%k > 1) ans += 1;

	cout << ans + 1 << endl;

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
