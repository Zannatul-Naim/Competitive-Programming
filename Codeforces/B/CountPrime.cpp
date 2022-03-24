#include<bits/stdc++.h>
using namespace std;

bool isPrime(int m) {
	int count = 0;
		for(int i = 2; i*i <= m; i++) {
			if(m % i == 0) count++;
		}
		if(count == 0) return true;
		else return false;
}

void countPrime(long int n) {
	if(n == 1) cout << 0 << endl;
	else if(n == 2) cout << 1 << endl;
	else {
		int count = 1;
		for(int i = 3; i <= n; i++) {
			if(i % 2 != 0) {
				if(isPrime(i)) {
					count++;
				}
			}
		}
		cout << count << endl;
	}
}



#define ll long long
int main()
{

	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	long int n;
    	cin >> n;
    	countPrime(n);
    }
	return 0;
} 
