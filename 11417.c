#include<stdio.h>
int gcd(int a,int b)
{
    int c;
    while(a!=0){
        c=b%a;
        b=a;
        a=c;
    }
    return b;
}
int main()
{
    int a,b,n;
    while(scanf("%d",&n)&&n!=0){
        long g=0;
        for(a=1;a<n;a++)
        for(b=a+1;b<=n;b++){
            g+=gcd(a,b);
        }
        printf("%ld\n",g);
    }
    return 0;
}
