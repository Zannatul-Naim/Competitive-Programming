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

	string s;
	cin >> s;

	if(s[0] == '1') {
		cout << 19 << endl;
	} else if(s[0] == '3' or s[0] == '4' or s[0] == '6' or s[0] == '7') {
		cout << s[0] << '1' << endl;
	} else if(s[0] == '5') {
		cout << "53" << endl;
	} else if(s[0] == '2' or s[0] == '8') {
		cout << s[0]<<3 << endl;
	} else {
		cout << "97" << endl;
	}

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
