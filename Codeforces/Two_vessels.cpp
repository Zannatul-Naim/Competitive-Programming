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
	
	double a, b, c;
	cin >> a >> b >> c;

	if(a == b) {
		cout << 0 << endl;
		return;
	}

	if(a < b) swap(a, b);
	double d = (a-b) / 2;
	d /= c;

	int x = d;

	if(d - double(x) == 0) {
		cout << x << endl;
	} else {
		cout << x + 1 << endl;
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
