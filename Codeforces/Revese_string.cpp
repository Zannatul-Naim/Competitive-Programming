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

    string s, t;
    cin >> s >> t;
    int n = s.size();
    
    for(int i = 0; i < n; i++) {
        string x, y;
        x = s.substr(0, i+1);
        y = s.substr(0, i);

        reverse(y.begin(), y.end());

        string temp = x+y;

        auto f = temp.find(t);

        if(f != string::npos) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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
