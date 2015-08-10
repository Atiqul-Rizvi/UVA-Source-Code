#include<iostream>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    char c;
    int i,j,k,l;
    while(cin>>c>>s){
        if(c=='0'&s=="0"){
            break;
        }
        s.erase(remove(s.begin(),s.end(),c),s.end());
        l=s.length();
        if(l==0){
            cout<<"0"<<endl;
        }
        else{
            j=0;
            for(i=0;i<l;i++){
                if(s[i]=='0'){
                    j++;
                }
            }
            if(j==l){
                cout<<"0"<<endl;
            }
            else{
                cout<<s<<endl;
            }
        }
    }
    return 0;
}
