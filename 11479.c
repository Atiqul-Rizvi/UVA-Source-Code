#include<stdio.h>
int main()
{
    long int a,b=1,c,d,e;
    scanf("%ld",&a);
    while(b<=a){
        scanf("%ld%ld%ld",&c,&d,&e);
        if((c+d)<=e||(d+e)<=c||(e+a)<=d){
            printf("Case %ld: Invalid\n",b);
        }
        else if(c<=0||d<=0||e<=0){
            printf("Case %ld: Invalid\n",b);
        }
        else if(c==d&&d==e){
            printf("Case %ld: Equilateral\n",b);
        }
        else if(c==d||d==e||e==c){
            printf("Case %ld: Isosceles\n",b);
        }
        else{
            printf("Case %ld: Scalene\n",b);
        }
        b++;
    }
    return 0;
}
