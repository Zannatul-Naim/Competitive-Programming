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

	char ch;
	cin >> ch;

	map <char, int> m;

	for(char c = '6'; c <= '9'; c++) m[c] = c - '0';
	m['T'] = 10; 
	m['J'] = 11; 
	m['Q'] = 12; 
	m['K'] = 13; 
	m['A'] = 14; 

	string x, y;
	cin >> x >> y;

	if(x[1] == y[1] and m[x[0]] > m[y[0]]) {
		cout << "YES" << endl;
		return;
	}

	if(x[1] == ch and y[1] != ch) {
		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;
}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
