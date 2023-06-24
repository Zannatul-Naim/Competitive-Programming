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

	int n;
	cin >> n;
	int cnt = 0;

	for(int a = 1; a <= n; a++) {
		for(int b = a; b <= n; b++) {
			int c = a^b;

			if(c < b or c > n) continue;
			if(a+b > c) cnt++;
		}
	}

	cout << cnt << endl;

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
