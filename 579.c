#include<stdio.h>
int main()
{
    double h,m,c;
    while(scanf("%lf:%lf",&h,&m)==2){
        if(h==0&&m==0){
            break;
        }
        else{
            if(h>=1&&h<=6){
                c=(12+h)*30-m*(5.5);
            }
            else{
                c=(12-h)*30+m*(5.5);
            }
        }
        if(c>180&&c<=360){
            printf("%.3lf\n",360-c);
        }
        else if(c>360){
            printf("%.3lf\n",c-360);
        }
        else{
            printf("%.3lf\n",c);
        }
    }
    return 0;
}
