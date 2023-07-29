#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"

void solve() {
	
	int n, k;
	cin >> n >> k;

	while(k--) {
		if(n%10) n--;
		else n /= 10;
	}

	cout << n << endl;

}

int main()
{

	int t = 1;
	// cin >> t;

	while(t--) solve();

	return 0;
}
