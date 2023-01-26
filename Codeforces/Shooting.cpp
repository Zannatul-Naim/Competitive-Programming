#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int gcd(int a, int b) {
	return b==0? a : gcd(b, a%b);
}

int lcm(int a, int b) {
	return (a * (b / gcd(a, b)));
}

bool isPrime(int n) {  // A number is Prime number or not.
	if(n < 2) return false;
	for(int i = 2; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

long long int factorial(int n) {
	return n * factorial(n-1);
}

void solve() {

    int n;
    cin >> n;

    // int a[n];

    // for(int i = 0; i < n; i++) {}

    // vector < int > v(n);

    // for(auto &i : v) cin >> i;

    // sort(v.rbegin(), v.rend());

    // pair < int , int > p
    vector < pair < int, int > > p;

    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        p.push_back({x, i});
    }

    int ans = 1;   

    sort(p.rbegin(), p.rend());

    for(int i = 1; i < n; i++) {
        ans += p[i].first * i + 1;
    }

    cout << ans << endl;

    for(auto i : p) {
        cout << i.second << " ";
    }
    cout << endl;
  
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
