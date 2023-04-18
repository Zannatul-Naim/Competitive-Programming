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

	int cnt_2 = 0, cnt_3 = 0;

	while(n%2 == 0) {
		cnt_2++;
		n /= 2;
	}

	while(n%3 == 0) {
		cnt_3++;
		n /= 3;
	}

	if(n == 1 and cnt_2 <= cnt_3) {
		cout << 2*cnt_3 - cnt_2 << endl;
	} else {
		cout << -1 << endl;
	}

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
