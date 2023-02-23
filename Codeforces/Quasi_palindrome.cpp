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

	string s;
	cin >> s;

	int i = 0, j = s.size()-1;

	int n = s.size();	
	while(s[i] == '0') i++;
	
	string x = s.substr(i);

	reverse(x.begin(), x.end());

	i = 0;
	while(x[i] == '0') i++;

	string ans = x.substr(i);

	string rev = ans;

	reverse(rev.begin(), rev.end());

	if(rev == ans) cout << "YES" << endl;
	else cout << "NO" << endl;


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
