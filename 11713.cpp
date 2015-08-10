#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string ch1,ch2;
    int i,j,k,l,t,m,f;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>ch1>>ch2;
        k=ch1.length();
        l=ch2.length();
        if(k!=l){
            cout<<"No\n";
        }
        else{
            f=1;
            for(j=0,m=0;j<k;j++,m++){
                if(ch1[j]!=ch2[m]){
                    if((ch1[j]=='a'||ch1[j]=='e'||ch1[j]=='i'||ch1[j]=='o'||ch1[j]=='u')&&(ch2[m]=='a'||ch2[m]=='e'||ch2[m]=='i'||ch2[m]=='o'||ch2[m]=='u')){
                        f=1;
                    }
                    else{
                        f=0;
                        break;
                    }
                }
                else{
                    f=1;
                }
            }
            if(f==1){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}
