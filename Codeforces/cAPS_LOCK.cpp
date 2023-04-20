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

	string s;
	cin >> s;

	int c = 0;

	int n = s.size();
	for(int i = 1; i < n; i++) {
		if(s[i] >= 'A' and s[i] <= 'Z') c++;
	}


	if(c == n-1) {
		for(int i = 0; i < n; i++) {
			if(s[i] >= 'A' and s[i] <= 'Z') {
				s[i] = s[i] + 'a' - 'A';
			} else {
				s[i] = s[i] + 'A' - 'a';
			}
		}
	}

	cout << s << endl;

}	

int main()
{
	fastIO();

	int t = 1;
//	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
