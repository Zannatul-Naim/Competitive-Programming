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

	if(n%2 == 0) {
		cout << "-1" << endl;
		return;
	}

	int a[100];

	int i = 0;

	while(n != 1) {

		n /= 2;

		if(!(n&1)) {
			n++;
			a[i] = 1;
		} else {
			a[i] = 2;
		}
		i++;
	}

	cout << i << endl;

	for(int j = i-1; j >= 0; j--) cout << a[j] << " ";
	cout << endl;

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
