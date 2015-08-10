#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
    string s1,s2;
    int l1,l2,a,b,c,d,e,f,g,h,i,j,sum,sum1,sum2,sum3,div,div1;
    float r;
    while(getline(cin,s1)){
        getline(cin,s2);
        l1=s1.length();
        l2=s2.length();
        sum=0;
        for(i=0;i<l1;i++){
            if(s1[i]>='a'&&s1[i]<='z'){
                sum+=s1[i]-96;
            }
            else if(s1[i]>='A'&&s1[i]<='Z'){
                sum+=s1[i]-64;
            }
        }
        for(a=1;a!=0;a++){
            sum1=0;
            for(b=1;b!=0;b++){
                c=sum%10;
                sum=sum/10;
                sum1+=c;
                if(sum==0){
                    sum=sum1;
                    break;
                }
            }
            if(sum<=9){
                break;
            }
        }
        sum2=0;
        for(j=0;j<l2;j++){
            if(s2[j]>='a'&&s2[j]<='z'){
                sum2+=s2[j]-96;
            }
            else if(s2[j]>='A'&&s2[j]<='Z'){
                sum2+=s2[j]-64;
            }
        }
        for(a=1;a!=0;a++){
            sum3=0;
            for(b=1;b!=0;b++){
                c=sum2%10;
                sum2=sum2/10;
                sum3+=c;
                if(sum2==0){
                    sum2=sum3;
                    break;
                }
            }
            if(sum2<=9){
                break;
            }
        }
        if(sum>=sum2){
            r=(((float)sum2/(float)sum)*100);
        }
        else{
            r=(((float)sum/(float)sum2)*100);
        }
        cout<<fixed<<setprecision(2)<<r<<" %"<<endl;
    }
    return 0;
}
