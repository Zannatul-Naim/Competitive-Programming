#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    int res = 0;
    int cnt = 0;
    for(int i = 0; i < n * 2; i++)
    {

        if(a[i%n] == 1)
        {
        cnt++;
        res = max(res, cnt);
        }
        else {
            cnt = 0;
        }
    }
    cout<< res <<"\n";
    return 0;
}
