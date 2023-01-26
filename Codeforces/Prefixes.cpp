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

    string s;
    cin >> s;

    int cnt = 0;

    for(int i = 0; i < n-1; i+=2) {
        if(s[i] == 'b' && s[i+1] == 'b') {
            cnt++;
            s[i] = 'a';
        } else if(s[i] == 'a' && s[i+1] == 'a') {
            cnt++;
            s[i] = 'b';
        }
    }

    cout << cnt << endl;
    cout << s << endl;
}

int main()
{
	fastIO();

	// freopen("input.in", "r", stdin);
	// freopen("output.txt", 'w');

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
