#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,sum_of_odd=0;
        cin>>x>>y;
        if(x <= y)
        {
        for(x = x+1; x < y; x++)
        {
            if(x%2 == 1)
            sum_of_odd += x;

        }
        }
        else if(x > y)
        {
        for(y = y+1; y < x; y++)
        {
            if(y%2 == 1)
            sum_of_odd += y;

        }
        }
        cout<<sum_of_odd<<"\n";
    }
    return 0;
}
