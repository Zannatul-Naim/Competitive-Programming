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

	int n, m;
	cin >> n >> m;


	queue < pair < int, int > > q;

	for(int i = 1; i <= n; i++) {

		int x;
		cin >> x;

		q.push({x, i});
	}

	while(q.size() > 1) {
		if(q.front().first > m) {
			q.push({q.front().first - m, q.front().second});
		}
		q.pop();
	}

	cout << q.front().second << endl;

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
