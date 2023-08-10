#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

void solve() {

    ll n;
    cin >> n;

    ll a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    ll x = 0;
    ll y = 0;

    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            x = __gcd(a[i], x);
        } else {
            y = __gcd(a[i], y);
        }
    }

    for(int i = 1; i < n; i+=2) {
        if(a[i] % x == 0) {
            x = 0;
            break;
        }
    }

    for(int i = 0; i < n; i+=2) {
        if(a[i]%y == 0) {
            y = 0;
            break;
        }
    }

    cout << max(x, y) << endl;
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
