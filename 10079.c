#include<stdio.h>
long long n;
long long p(long long n)
{
    if(n==0){
        return 1;
    }
    return p(n-1)+n;
}
int main()
{
    for(;;){
        scanf("%lld",&n);
        if(n<0){
            break;
        }
        printf("%lld\n",p(n));
    }
    return 0;
}
