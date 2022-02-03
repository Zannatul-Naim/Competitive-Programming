#include <stdio.h>

int main() {

    int x;
    double y,ans;
    scanf("%d %lf", &x,&y);
    ans=x/y;
    printf("%0.3lf km/l\n",ans);
    return 0;
}
