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
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];

	if(n%2) {
		cout << 4 << endl;
		cout << "1 " << n-1 << endl;
		cout << "1 " << n-1 << endl;
		cout << n-1 << " " << n << endl;
		cout << n-1 << " " << n << endl;
	} else {
		cout << 2 << endl;
		cout << "1 " << n << endl;
		cout << "1 " << n << endl;
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
