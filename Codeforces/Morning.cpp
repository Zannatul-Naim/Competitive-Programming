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

	string s;
	cin >> s;

	int x = 1, ans = 0;

	for(auto i : s) {
		int tmp = i - '0';
		if(tmp == 0) {
			tmp = 10;
		}
		ans += abs(x - tmp) + 1;
		x = tmp;
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
