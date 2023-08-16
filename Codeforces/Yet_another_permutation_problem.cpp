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

    vector < int > a;

    // a.push_back(1);
    bool f[n+1];
    for(int i = 1; i <= n; i++) f[i] = false;
    // f[1] = true;
    for(int i = 1; i <= n; i++) {

        if(!f[i]) {
            for(int k = i; k <= n; k *= 2) {
                f[k] = true;
                a.push_back(k);
            }
        }
    }

    for(auto i : a) cout << i << " ";
    cout << endl;
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
