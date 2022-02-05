#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long int x;
        cin>>x;
        if(x==0)
            cout<<"NULL"<<"\n";
            else if(x>0)
            {
                if(x%2==0)
                    cout<<"EVEN POSITIVE"<<"\n";
                else
                   cout<<"ODD POSITIVE"<<"\n";
            }
            else if(x<0)
            {
                if(x%2==0)
                   cout<<"EVEN NEGATIVE"<<"\n";
                else
                    cout<<"ODD NEGATIVE"<<"\n";
            }
    }
    return 0;
}
