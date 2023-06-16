#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {
		
	int n;
	cin >> n;

	vector < pair < int, int > > v;

	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;

		v.push_back({x, y});
	}

	sort(v.begin(), v.end());

	for(int i = 1; i < n; i++) {

		if(v[i].second < v[i-1].second) {
			cout << "Happy Alex" << endl;
			return;
		}
	}

	cout << "Poor Alex" << endl;

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
