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

	int n;
	cin >> n;

	string s;
	cin >> s;

	vector < int > a;

	int mx = 0, c = 0;
	int tmp = c;

	for(int i = 0; i < n; i++) {
		if(s[i] == s[0]) c++;
		else c--;

		if(tmp + c > 0) a.pb(1);
		else a.pb(2);

		tmp = c; // no of bracket have back from this point.

		mx = max(mx, a[i]);
	}	

	if(c != 0) {
		cout << "-1" << endl;
		return;
	}

	cout << mx << endl;
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	} cout << endl;

}	

int main() {

	fastIO();
    // freopen("./input.txt", "r", stdin);
	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
