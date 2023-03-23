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

	string s;
	cin >> s;

	sort(s.begin(), s.end());

	if(s[0] == s[s.size()-1]) {
		cout << -1 << endl;
		return;
	}

	map <char, int> m;

	for(auto i : s) {
		m[i]++;
	}

	int mx = -1;

	for(auto i : m) {

		mx = max(mx, i.second);
		
	}
	
	if(mx <= 2) {
		cout << 4 << endl;
	} else if(mx == 3) {
		cout << 6 << endl;
	} else {
		cout << -1 << endl;
	}
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
