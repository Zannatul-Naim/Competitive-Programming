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
    int x, y;
    cin >> x;
    for(int i = 1; i < n; i++) cin >> y;

    if(x == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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
