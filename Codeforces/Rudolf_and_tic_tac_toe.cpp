#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define INF INT_MAX


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

char a[3][3];

bool check(char ch) {

	for(int i = 0; i < 3; i++) {
		bool flag = true;
		for(int j = 0; j < 3; j++) {
			if(a[i][j] == ch) continue;
			else {
				flag = false;
				break;
			}
		}
		if(flag) return true;
	}
	for(int i = 0; i < 3; i++) {
		bool flag = true;
		for(int j = 0; j < 3; j++) {
			if(a[j][i] == ch) continue;
			else {
				flag = false;
				break;
			}
		}
		if(flag) return true;
	}

	if(a[0][0] == ch and a[1][1] == ch and a[2][2] == ch) return true;
	if(a[0][2] == ch and a[1][1] == ch and a[2][0] == ch) return true;

	return false;

}


void solve() {

	// char a[3][3];
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) cin >> a[i][j];
	}

	if(check('+')) {
		cout << '+' << endl;
	} else if(check('X')) {
		cout << 'X' << endl;
	} else if(check('O')) {
		cout << 'O' << endl;
	} else {
		cout << "DRAW" << endl;
	}

}	

int main() {

	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
