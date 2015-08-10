#include<stdio.h>
#include<math.h>
#define m 18500000
char p[m];
long t[1000000];
void s()
{
    long i,j,k;
    for(i=2;i<=m;i++){
        p[i]=0;
    }
    k=sqrt(m);
    for(i=2;i<=k;){
        for(j=2*i;j<=m;j+=i){
            p[j]=1;
        }
        i++;
        for(;p[i];i++){

        }
    }
}
int main()
{
    s();
    long x,y,z=1,a;
    for(x=3;x<=m;x+=2){
        if(p[x]==0&&p[x+2]==0){
            t[z]=x;
            z++;
        }
    }
    while(scanf("%d",&a)==1){
        printf("(%d, %d)\n",t[a],t[a]+2);
    }
    return 0;
}
