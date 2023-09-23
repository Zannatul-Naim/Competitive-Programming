#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	int ans = 0;

	for(int i = 0; i < n; i) {
		if(s[i] == 'W') i++;
		else {
			string x = s.substr(i, k);
			if(x.find('B') != string::npos) {
				ans++;
			}
			i += k;
		}
	}
	cout << ans << endl;

}


int main()
{
	fastIO();

	int t = 1;
	cin >> t;
	while (t--) {
        solve();
    }

	return 0;
}
