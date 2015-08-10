#include<stdio.h>
int d(int b)
{
    int x,y=0;
    for(x=1; ;x++){
        y+=x;
        if(y>=b){
            break;
        }
    }
    y-=b;
    while((y%2)!=0){
        x++;
        y+=x;
    }
    return x;
}
int main()
{
    int a,b,c;
    scanf("%d",&a);
    while(a-->0){
        scanf("%d",&b);
        if(b<0){
            b=-b;
        }
        printf("%d\n",d(b));
        if(a!=0){
            printf("\n");
        }
    }
    return 0;
}
