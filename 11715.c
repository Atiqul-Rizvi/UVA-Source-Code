#include<stdio.h>
#include<math.h>
int main()
{
    double a,s,t,u,v;
    int c,b=0;
    while(scanf("%d",&c)&&c!=0){
        b++;
        if(c==1){
            scanf("%lf%lf%lf",&u,&v,&t);
            s=((u+v)/2)*t;
            a=(v-u)/t;
            printf("Case %d: %.3lf %.3lf\n",b,s,a);
        }
        if(c==2){
            scanf("%lf%lf%lf",&u,&v,&a);
            s=(v*v-u*u)/(2*a);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",b,s,t);
        }
        if(c==3){
            scanf("%lf%lf%lf",&u,&a,&s);
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",b,v,t);
        }
        if(c==4){
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",b,u,t);
        }
    }
    return 0;
}
