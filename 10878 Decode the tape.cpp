#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s,s1;
    int i,j,k,l,m=0;
    while(getline(cin,s)){
        l=s.length();
        if(s=="___________"){
            if(m==1){
                cout<<s1;
                break;
            }
            else{
                m=1;
            }
        }
        else{
            k=1;
            j=0;
            for(i=l-1;i>=0;i--){
                if(s[i]=='o'){
                    j+=(1*k);
                    k=k*2;
                }
                else if(s[i]==' '){
                    j+=(0*k);
                    k=k*2;
                }
            }
            s1+=(char)(j);
        }
    }
    return 0;
}
