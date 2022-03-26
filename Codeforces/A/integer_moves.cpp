#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int s = sqrt(x*x + y*y);
        int sq = (x*x + y*y);
        if(x == 0 && y == 0) cout << 0 << endl;
        else if(s*s == sq) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
