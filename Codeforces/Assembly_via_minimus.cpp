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

    int n;
    cin >> n;

    int m = n*(n-1)/2;

    int a[m];

    for(int i = 0; i < m; i++) cin >> a[i]; 

    sort(a, a+m);

    n -= 1;

    for(int i = 0; i < m;) {
        cout << a[i] << " ";
        i += n;
        n -= 1;
    }

    cout << "1000000000" << endl;

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
