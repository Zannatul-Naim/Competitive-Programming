#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int x = a + c - 2 * b;
        if(x % 3 == 0)
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
    return 0;
}
