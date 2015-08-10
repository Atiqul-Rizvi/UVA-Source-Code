#include<stdio.h>
int main()
{
    int n,k,p,a,b,c;
    while(scanf("%d",&a)==1){
        for(b=1;b<=a;b++){
            scanf("%d%d%d",&n,&k,&p);
            c=k+p;
            while(c>n){
                c=c-n;
            }
            printf("Case %d: %d\n",b,c);
        }
    }
    return 0;
}
