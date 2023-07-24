#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

    ll a, b;
    cin >> a >> b;

    if(b == 0) {
        cout << 1 << endl;
        return;
    }

    if(b%4 == 0) b = 4;
    else b %= 4;

    int last_digit = int(pow(a, b)) % 10;

    cout << last_digit << endl;
}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) solve();

	return 0;
}
