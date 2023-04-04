#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {

	int n;
	char c;
	cin >> n >> c;

	string s;
	cin >> s;

	s = c + s;

	for(int i = 0; i < n; i++) {

		if(s[i] <= s[i+1]) {
			swap(s[i], s[i+1]);
		} else break;
	}

	cout << s << endl;
	
}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
