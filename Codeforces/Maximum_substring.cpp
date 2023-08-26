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

    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll mx = 1, cur = 1, one = 0, zero = 0;

    for(auto i : s) {
        if(i == '0') zero++;
        else one++;
    }

    for(ll i = 0; i < n-1; i++) {
        if(s[i] == s[i+1]) {
            cur++;
        } else {
            mx = max(mx, cur);
            cur = 1;
        }
    }

    mx = max(mx, cur);

	cout << max(mx*mx, zero*one) << endl;


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
