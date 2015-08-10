#include<stdio.h>
int main()
{
    long long a,b,c,d,e,f,g,h;
    while(scanf("%lld",&a)==1){
        for(b=1;b<=a;b++){
            scanf("%lld",&c);
            d=c;
            for(e=1;e!=0;e++){
                f=0;
                for(g=1;g!=0;g++){
                    h=d%10;
                    d=d/10;
                    f+=h*h;
                    if(d==0){
                        d=f;
                        break;
                    }
                }
                if(d<=9){
                    break;
                }
            }
            if(d==1){
                printf("Case #%lld: %lld is a Happy number.\n",b,c);
            }
            else{
                printf("Case #%lld: %lld is an Unhappy number.\n",b,c);
            }
        }
    }
    return 0;
}
