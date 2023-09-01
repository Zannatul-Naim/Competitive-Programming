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

	string a, b;
	cin >> a >> b;

	int n = a.size();

	for(int i = 0; i < n; i++) {
		if((a[i] == '0' and b[i] == '0') and (a[i+1] == '1' and b[i+1] == '1')) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;

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
