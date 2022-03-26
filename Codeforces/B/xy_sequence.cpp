#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, b, x, y;
        cin >> n >> b >> x >> y;
        long long int sum = 0, a;
        a = sum;
        for(int i = 1; i <= n; i++) {
           a += (a+x) <= b? x : -y;
           sum += a;
        }
        cout << sum << endl;
    }
    return 0;
}
