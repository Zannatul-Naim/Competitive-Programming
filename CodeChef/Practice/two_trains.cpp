#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int a[n-1];
	    for(int i = 0; i < n-1; i++) cin >> a[i];
	    
	    int s = a[0];
	    int x = 0;
	    for(int i = 0; i <= n-2; i++) {
	        x += a[i];
	        if(x > s) s += (x-s);
	        s += a[i];
	    }
	    cout << s << endl;
	}
	return 0;
}
