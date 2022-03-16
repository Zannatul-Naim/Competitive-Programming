#include<iostream>
using namespace std;
int main()
{
    unsigned long int n,x,f;

    while(cin >> n >> x)
    {
        f = n^x;
        cout << f << endl;
    }
    return 0;
}
