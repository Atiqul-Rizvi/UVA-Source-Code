#include<iostream>
#include<cstring>
#include<algorithm>
#include<cctype>
#include<cstdlib>
#include<stdio.h>
using namespace std;
int main()
{
    string s,s1;
    int i,j,k,l,m,n,o,t;
    cin>>t;
    getchar();
    while(t--){
        getline(cin,s);
        s1=s;
        l=s1.length();
        transform(s1.begin(),s1.end(),s1.begin(),::tolower);
        int a[30]={},a1[30];
        for(i=0;i<l;i++){
            if(s1[i]>='a'&&s1[i]<='z'){
                k=s1[i]-'a';
                a[k]++;
            }
        }
        for(i=0;i<26;i++){
            a1[i]=a[i];
        }
        sort(a1,a1+26,greater<int>());
        for(i=0;i<26;i++){
            if(a[i]==a1[0]){
                cout<<(char)(i+97);
            }
        }
        cout<<endl;
    }
    return 0;
}
