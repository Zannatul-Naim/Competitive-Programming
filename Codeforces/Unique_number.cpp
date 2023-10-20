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

	if(n > 45) {
		cout << -1 << endl;
		return;
	}

	string ans = "";

	for(int i = 9; i >= 1; i--) {
		if(n >= i) {
			n -= i;
			ans += (i+'0');
		}
	}
	// sort(ans.begin(), ans.end());
	reverse(ans.begin(), ans.end());

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
