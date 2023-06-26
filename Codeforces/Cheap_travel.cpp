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

	int n, m, a, b;
	cin >> n >> m >> a >> b;

	int ans1 = n*a;
	int ans2 = (n/m)*b + (n%m)*a;
	int ans3;
	if(n%m == 0) {
		ans3 = (n/m)*b;
	} else {
		ans3 = (n/m + 1)*b;
	}

	cout << min(ans1, min(ans2, ans3)) << endl;

}	

int main() {

	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
