#include<stdio.h>
int main()
{
    unsigned long long int a,b;
    while(scanf("%llu",&a)==1&&a!=0){
        do{
            b=0;
            while(a>=10){
                b+=(a%10);
                a=a/10;
            }
            b+=a;
            a=b;
        }while(a>=10);
        printf("%llu\n",a);
    }
    return 0;
}
