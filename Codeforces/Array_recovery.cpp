#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back
#define sortAll sort(v.begin(), v.end());


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

    int n;
    cin >> n;

    int d[n];

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> d[i];
    }

    a[0] = d[0];
    for(int i = 1; i < n; i++) {
        if(d[i] != 0 && a[i-1] - d[i] >= 0) {
            cout << -1 << endl;
            return;
        }
        a[i] = d[i] + a[i-1];
    }

    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main()
{
	fastIO();

	ll t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}
