#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    int cnt = 0;
    n = n - 1;
    int i;
    for(i = 0; i <= n; i++)
    {
      if(a[i] <= k)
        {
          cnt++;
        }
      else
        break;
    }
    for(n; n != i - 1; n--)
    {
      if(a[n] <= k)
        cnt++;
      else
        break;
    }
    cout<< cnt << endl;
    return 0;
}
