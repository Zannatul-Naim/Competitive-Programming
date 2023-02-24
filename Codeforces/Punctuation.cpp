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

	string str;
	getline(cin, str);

	string s = "";

	bool f = false;

	int n = str.size();

	for(int i = 0; i < n; i++) {

		if(isalpha(str[i])) {
			s.push_back(str[i]);
			f = false;
		} else if(str[i] == ' ' && f == false) {
			s.push_back(' ');
			f = true;
		} else if(str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?') {
			if(f) s.pop_back();

			s.push_back(str[i]);
			s.push_back(' ');

			f = true;
		}
	}

	cout << s << endl;
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
