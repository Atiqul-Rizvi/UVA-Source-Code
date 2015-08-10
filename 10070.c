#include<stdio.h>
#include<string.h>
int e(char x[],int y,int z)
{
    int a=0,b;
    for(b=0;b<y;b++){
        a=((x[b]-'0')+a*10)%z;
    }
    if(a==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    char y[1000000];
    int a=0;
    while(scanf("%s",y)!=EOF){
        int b,c,d;
        c=strlen(y);
        if(a){
            printf("\n");
        }
        a=1;
        b=0;
        d=0;
        if((e(y,c,4)==0&&e(y,c,100)!=0)||(e(y,c,400)==0)){
            printf("This is leap year.\n");
            d=1;
            b=1;
        }
        if(e(y,c,15)==0){
            printf("This is huluculu festival year.\n");
            b=1;
        }
        if(d==1&&e(y,c,55)==0){
            printf("This is bulukulu festival year.\n");
        }
        if(b==0){
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
