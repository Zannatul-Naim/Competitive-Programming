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

    vector < int > v;
    int c = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x < 0){ c++;}

        v.push_back(x);
    }

    sort(v.rbegin(), v.rend());

    // for(auto i : v) cout << i << " ";
    // cout << endl;

    int ct = 0;
    vector < int > ans;
    for(int i = 0; i < n; i++) {
        if(v[i] >= 0) {
            ++ct;
            ans.push_back(ct);
            cout << ct << " ";
        }
        else {
            --ct;
            ans.push_back(ct);
            cout << ct << " ";
        }
    } cout << endl;

    for(int i = 1; i <= c; i++) {
        cout << 1 << " " << 0 << " ";
    }
    if(c&1) n -= (2*c);
    else n -= (2*c);

    for(int i = 0; i < n; i++) cout << ans[i] << " ";
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
