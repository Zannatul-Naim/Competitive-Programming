#include<bits/stdc++.h>
#include <iostream>

 
using namespace std;
 
int main() {
        double a,b,c,temp;
        cin >> a >> b >> c;
        if(a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
       if (b < c)

     {
        temp = b;
        b = c;
        c = temp;
      }
    if(a<b)
        {
            temp = a;
            a = b;
            b = temp;
        } 
        if(a >= (b+c))
        {
        cout<<"NAO FORMA TRIANGULO"<<"\n";
        }
       else if(a*a==(b*b+c*c))
        {
        cout<<"TRIANGULO RETANGULO"<<"\n";
        }
        else if(a*a>(b*b+c*c))
        {
        cout<<"TRIANGULO OBTUSANGULO"<<"\n";
        }
        else if(a*a<(b*b+c*c))
        {
        cout<<"TRIANGULO ACUTANGULO"<<"\n";
        }
        if(a==b && b==c)
        {
        cout<<"TRIANGULO EQUILATERO"<<"\n";
        }
        else if(a==b || b==c)
        {
        cout<<"TRIANGULO ISOSCELES"<<"\n";
        }
    return 0;
}
