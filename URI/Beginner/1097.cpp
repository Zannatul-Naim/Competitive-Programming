#include <iostream>

using namespace std;

int main() {
    int i=1,j=7,m;
    for(i=1;i<=9;i+=2)
    {
        m=j;
        for(m;m>=j-2;m--)
        {
            cout<<"I="<<i<<" "<<"J="<<m<<"\n";
        }
        j+=2;
    }
    return 0;
}
