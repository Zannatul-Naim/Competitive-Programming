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

	string s;
	cin >> s;

	map <string, int> m;

	for(int i = 0; i < n-1; i++) {
		string tmp = "";
		tmp += s[i];
		tmp += s[i+1];
		m[tmp]++;
	}
	string ans = "";
	int mx = -1;
	for(auto i : m) {
		if(i.second > mx) {
			ans = i.first;
			mx = i.second;
		}
	}

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
