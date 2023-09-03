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

	if(n%2) {
		cout << s[0] << s[1] << s[2];
		for(int i = 3; i+1 < n; i+=2) {
			cout << "-" << s[i] << s[i+1];
		} cout << endl;
	} else {
		cout << s[0] << s[1];
		for(int i = 2; i+1 < n; i+=2) {
			cout << "-" << s[i] << s[i+1];
		} cout << endl;
	}
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
