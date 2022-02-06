#include <iostream>

using namespace std;

int main() {

    int a,b,sum=0;
    cin>>a>>b;

   if(a<b) {
        for(a;a<=b;a++)
    {
        if(a%13!=0)
        sum+=a;
    }
   }
   else if(a>b)
   {
       for(b;b<=a;b++)
    {
        if(b%13!=0)
        sum+=b;
    }
   }
   else if(a==b)
    sum=0;
    cout<<sum<<"\n";
    return 0;
}
