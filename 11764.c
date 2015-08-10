#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        int g=0,h=0,f=0;
        scanf("%d",&c);
        for(d=1;d<=c;d++){
            scanf("%d",&e);
            if(e>f&&d>1){
                g++;
            }
            if(e<f&&d>1){
                h++;
            }
            f=e;
        }
        printf("Case %d: %d %d\n",b,g,h);
    }
    return 0;
}
