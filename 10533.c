#include<stdio.h>
#include<math.h>
int dsum(int c)
{
    int s=0;
    while(c!=0){
        s=(c%10)+s;
        c=c/10;
    }
    return s;
}
int prime(int c)
{
    int x,y;
    y=sqrt(c);
    if(c<2){
        return 0;
    }
    else if(c==2||c==5){
        return 1;
    }
    else if(c%2==0){
        return 0;
    }
    else{
        for(x=3;x<=y;x=x+2){
            if(c%x==0){
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int a,b,c,d,e;
    static int f[1000000];
    scanf("%d",&a);
    b=0;
    for(c=1;c<1000000;c++){
        if(1==prime(c)){
            if(1==prime(dsum(c))){
                b++;
            }
        }
        f[c]=b;
    }
    while(a--){
        scanf("%d%d",&d,&e);
        printf("%d\n",f[e]-f[d-1]);
    }
    return 0;
}
