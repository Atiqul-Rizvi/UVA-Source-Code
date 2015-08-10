#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j;
    string s;
    while(cin>>s){
        j=s.length();
        for(i=0;i<j;i++){
            cout<<(char)(s[i]-7);
        }
        cout<<"\n";
    }
    return 0;
}
