#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    int mx = 1, cur = 1, one = 0, zero = 0;

    for(auto i : s) {
        if(i == '0') zero++;
        else one++;
    }

    for(int i = 0; i < n-1; i++) {
        if(s[i] == s[i+1]) {
            cur++;
        } else {
            mx = max(mx, cur);
            cur = 1;
        }
    }

    mx = max(mx, cur);

    int ans = max(mx*mx, zero*one);
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
