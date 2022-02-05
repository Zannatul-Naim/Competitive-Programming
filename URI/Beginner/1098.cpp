#include <iostream>

using namespace std;

int main() {
    float i=0.0,j=1.0,m;
    for(i=0.0;i<=2.1;i+=0.2)
    {
        m=j;
        for(m;m<=j+2.0;m++)
        {
            cout<<"I="<<i<<" "<<"J="<<m<<"\n";
        }
        j+=0.2;
    }
    return 0;
}
