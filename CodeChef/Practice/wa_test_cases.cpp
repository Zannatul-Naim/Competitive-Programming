#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    string s;
	    cin >> s;
	    int min = 1000;
	    for(int i = 0; i < n; i++) {
	        if(s[i] == '0') {
	            if(a[i] < min) min = a[i];
	        }
	    }
	    cout << min << endl;
	}
	return 0;
}
