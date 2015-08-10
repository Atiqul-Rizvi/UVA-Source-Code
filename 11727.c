#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d",&a)==1){
        for(b=1;b<=a;b++){
            scanf("%d%d%d",&c,&d,&e);
            if(c>d&&d>e||c<d&&d<e){
                f=d;
            }
            if(c>e&&e>d||c<e&&e<d){
                f=e;
            }
            if(d>c&&c>e||d<c&&c<e){
                f=c;
            }
            printf("Case %d: %d\n",b,f);
        }
    }
    return 0;
}
