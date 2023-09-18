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

	int n;
	cin >> n;
	string s;
	cin >> s;

	string ans = "";
	if(n&1) {
		for(int i = 0; i < n; i++) {
			if(i&1) ans = s[i] + ans;
			else ans += s[i];
		}
	} else {
		for(int i = 0; i < n; i++) {
			if(i&1) ans += s[i];
			else ans = s[i] + ans;
		}
	}
	cout << ans << endl;
}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;
	while (t--) {
        solve();
    }

	return 0;
}
