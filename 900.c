#include<stdio.h>
int main()
{
    long long f[60],i,n;
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        f[0]=1;
        f[1]=1;
        for(i=2;i<=n+1;i++){
            f[i]=f[i-1]+f[i-2];
        }
        printf("%lld\n",f[n]);
    }
    return 0;
}
