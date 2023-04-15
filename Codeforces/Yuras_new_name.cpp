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
	int n = s.size();

	int ans = 0;
	if(s[0] == '_') ans++;
	if(s[n-1] == '_') {
		ans++;
	}

	if(n == 1) {
		if(s[0] == '^') {
			cout << 1 << endl;
			return;
		}
		if(s[0] == '_') {
			cout << 2 << endl;
			return;
		}
	}

	for(int i = 0; i < n; i++) {
		if(s[i] == '_' and s[i+1] == '_') ans++;
	}
	cout << ans << endl;

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
