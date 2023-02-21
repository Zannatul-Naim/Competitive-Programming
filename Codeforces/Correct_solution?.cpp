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

	string n, m;
	cin >> n;
	cin >> m;

	sort(n.begin(), n.end());

	if(n[0] == '0' && n[n.size()-1] == '0') {
		if(n == m) cout << "OK" << endl;
		else cout << "WRONG_ANSWER" << endl;
		return ;
	}

	int i = 0;
	while(i < n.size() && n[i] == '0') i++;

	swap(n[0], n[i]);

	if(n == m) cout << "OK" << endl;
	else cout << "WRONG_ANSWER" << endl;


}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}
