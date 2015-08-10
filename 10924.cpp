#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k,l,sum;
    string s;
    while(cin>>s){
        l=s.length();
        sum=0;
        for(i=0;i<l;i++){
            if(s[i]>='a'&&s[i]<='z'){
                sum+=s[i]-'a'+1;
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                sum+=s[i]-'A'+27;
            }
        }
        k=0;
        for(i=2;i<=sum/2;i++){
            if(sum%i==0){
                k=1;
                break;
            }
        }
        if(k==1){
            cout<<"It is not a prime word."<<endl;
        }
        else{
            cout<<"It is a prime word."<<endl;
        }
    }
    return 0;
}
