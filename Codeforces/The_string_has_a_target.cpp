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
	cin >> n;

	string s;
	cin >> s;

	if(n == 1) {
		cout << s << endl;
		return;
	}

	char x = 'z';
	int j = 0;
	for(int i = n-1; i >= 0; i--) {
		if(x > s[i]) {
			x = s[i];
			j = i;
		}
	}

	string ss = s;
	s.erase(j, 1);

	s = x + s;

	if(s < ss) cout << s << endl;
	else cout << ss << endl;

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
