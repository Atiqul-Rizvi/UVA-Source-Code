#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        scanf("%d",&c);
        d=((((((c*567)/9)+7492)*235)/47)-498);
        for(e=1;e<=2;e++){
            f=d%10;
            d=d/10;
        }
        printf("%d\n",abs(f));
    }
    return 0;
}
