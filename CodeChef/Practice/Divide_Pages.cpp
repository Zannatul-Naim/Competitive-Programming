#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	    int a[n];
	    for(int i = 0; i < n; i++) cin >> a[i];
	    
	    int sum = accumulate(a, a+n, 0);
	    
	    if(sum&1) cout << "NO" << endl;
	    else cout << "YES" << endl;
	}
	return 0;
}
