#include<stdio.h>
int main()
{
    long long a,b,c,d,e,f;
    while(scanf("%lld",&a)==1){
        for(b=1;b<=a;b++){
            scanf("%lld",&c);
            d=c;
            e=0;
            while(1){
                f=0;
                while(c!=0){
                    f=(f*10)+(c%10);
                    c=c/10;
                }
                if(f==d){
                    break;
                }
                else{
                    c=f+d;
                    d=f+d;
                    e++;
                }
            }
            printf("%lld %lld\n",e,d);
        }
    }
    return 0;
}
