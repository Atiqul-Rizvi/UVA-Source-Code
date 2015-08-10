#include<stdio.h>
int main()
{
    int a,b,c,d,e,f[200];
    scanf("%d",&a);
    for(b=0;b<a;b++){
        scanf("%d",&c);
        for(d=0;d<c;d++){
            scanf("%d",&f[d]);
        }
        e=c/2;
        printf("Case %d: %d\n",b+1,f[e]);
    }
    return 0;
}
