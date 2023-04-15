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

	int n;
	cin >> n;

	vector < string > v;

	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;

		v.push_back(s);
	}

	sort(v.begin(), v.end());

	string ans = v[n/2];

	cout << ans << endl;


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
