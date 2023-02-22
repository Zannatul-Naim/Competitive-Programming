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

	bool A = false, a = false, n = false;
	
	for(auto i : s) {

		if(i >= 'A' && i <= 'Z') A = true;
		else if(i >= 'a' && i <= 'z') a = true;
		else if(i >= '1' && i <= '9') n = true;
		else if(i == '!' || i == '.' || i == ',' || i == '?' or i == '_') continue;
		else continue;
	}

	if(A and a and n and s.size() >= 5) cout << "Correct" << endl;
	else cout << "Too weak" << endl;

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
