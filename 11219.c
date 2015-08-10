#include<stdio.h>
int main()
 {
    int year_b,year_c,month_c,month_b,day_c,day_b,age,i,j,k,test_case;
    while(scanf("%d",&test_case)==1){
        for(i=1;i<=test_case;i++){
            scanf("%d/%d/%d",&day_c,&month_c,&year_c);
            scanf("%d/%d/%d",&day_b,&month_b,&year_b);
            age=(year_c-year_b);
            if(month_c<month_b)
                age--;
            else if(month_c==month_b){
                if(day_c<day_b)
                    age--;
            }
            if(age<0)
                printf("Case #%d: Invalid birth date\n",i);
            else if(age>130)
                printf("Case #%d: Check birth date\n",i);
            else
                printf("Case #%d: %d\n",i,age);
        }
    }
    return 0;
 }
