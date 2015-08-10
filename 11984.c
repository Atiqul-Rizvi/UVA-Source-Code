#include<stdio.h>
int main()
{
    int a,b;
    double c,d,e,f;
    while(scanf("%d",&a)==1){
        for(b=1;b<=a;b++){
            scanf("%lf%lf",&c,&d);
            e=((9*c)/5)+d;
            f=(e*5)/9;
            printf("Case %d: %.2lf\n",b,f);
        }
    }
    return 0;
}
