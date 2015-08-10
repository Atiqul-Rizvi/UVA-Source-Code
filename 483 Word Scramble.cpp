#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int i,j,k,l,m;
    while(getline(cin,s)){
        l=s.length();
        m=-1;
        for(i=0;i<l;i++){
            if(s[i]==' '){
                for(j=i-1;j>m;j--){
                    cout<<s[j];
                }
                cout<<" ";
                m=i;
            }
        }
        for(i=l-1;i>m;i--){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
