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

	int s, n;
	cin >> s >> n;

	vector < pair < int , int > > p;

	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		p.push_back({x, y});
	}

	sort(p.begin(), p.end());

	for(auto i : p ) {
		if((s-i.first) > 0) {
			s += i.second;
		} else {
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;
	return;

}	

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
