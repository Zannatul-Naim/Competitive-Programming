#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int x, y;
	    cin >> x >> y;
	    
	    int mod = abs(x-y);
	    if((mod&1)) cout << mod/2 + 1 << endl;
	    else cout << mod/2 << endl;
	}
	return 0;
}
