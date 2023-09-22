#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int a[10][10] = {
		{1,1,1,1,1,1,1,1,1,1},
		{1,2,2,2,2,2,2,2,2,1},
		{1,2,3,3,3,3,3,3,2,1},
		{1,2,3,4,4,4,4,3,2,1},
		{1,2,3,4,5,5,4,3,2,1},
		{1,2,3,4,5,5,4,3,2,1},
		{1,2,3,4,4,4,4,3,2,1},
		{1,2,3,3,3,3,3,3,2,1},
		{1,2,2,2,2,2,2,2,2,1},
		{1,1,1,1,1,1,1,1,1,1}
	};

	int ans = 0;

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			char ch;
			cin >> ch;

			if(ch == 'X') ans += a[i][j];
		}
	}
	cout << ans << endl;

}


int main()
{
	fastIO();

	int t = 1;
	cin >> t;
	while (t--) {
        solve();
    }

	return 0;
}
