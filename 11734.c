#include<stdio.h>
#include<string.h>
void s(char* s)
{
    char a[25];
    int i,j;
    for(i=0,j=0;s[i];i++){
        while(s[i]==' '){
            i++;
        }
        a[j++]=s[i];
    }
    a[j]='\0';
    strcpy(s,a);
}
int main()
{
    int t,i;
    char ch1[22],ch2[22],ch3;
    scanf("%d%c",&t,&ch3);
    for(i=1;i<=t;i++){
        gets(ch1);
        gets(ch2);
        if(strcmp(ch1,ch2)==0){
            printf("Case %d: Yes\n",i);
        }
        else{
            s(ch1);
            if(strcmp(ch1,ch2)==0){
                printf("Case %d: Output Format Error\n",i);
            }
            else{
                printf("Case %d: Wrong Answer\n",i);
            }
        }
    }
    return 0;
}
