#include<stdio.h>
int main()
{
    long int h,e;
    while(scanf("%ld%ld",&h,&e)!=EOF){
        if(h>e){
            printf("%ld\n",h-e);
        }
        else{
            printf("%ld\n",e-h);
        }
    }
    return 0;
}
