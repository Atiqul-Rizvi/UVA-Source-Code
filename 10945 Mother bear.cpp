#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int i,j,k,l;
    while(getline(cin,s)){
        if(s=="DONE"){
            break;
        }
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string s1,s2;
        l=s.length();
        for(i=0;i<l;i++){
            if(s[i]>='a'&&s[i]<='z'){
                s1+=s[i];
            }
        }
        s2=s1;
        reverse(s2.begin(),s2.end());
        if(s1==s2){
            cout<<"You won't be eaten!"<<endl;
        }
        else{
            cout<<"Uh oh.."<<endl;
        }
    }
    return 0;
}
