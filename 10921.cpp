#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k;
    string s;
    while(cin>>s){
        j=s.length();
        for(i=0;i<j;i++){
            if(s[i]=='1'){
                cout<<"1";
            }
            else if(s[i]=='0'){
                cout<<"0";
            }
            else if(s[i]=='-'){
                cout<<"-";
            }
            else if((s[i]=='A')||(s[i]=='B')||(s[i]=='C')){
                cout<<"2";
            }
            else if((s[i]=='D')||(s[i]=='E')||(s[i]=='F')){
                cout<<"3";
            }
            else if((s[i]=='G')||(s[i]=='H')||(s[i]=='I')){
                cout<<"4";
            }
            else if((s[i]=='J')||(s[i]=='K')||(s[i]=='L')){
                cout<<"5";
            }
            else if((s[i]=='M')||(s[i]=='N')||(s[i]=='O')){
                cout<<"6";
            }
            else if((s[i]=='P')||(s[i]=='Q')||(s[i]=='R')||(s[i]=='S')){
                cout<<"7";
            }
            else if((s[i]=='T')||(s[i]=='U')||(s[i]=='V')){
                cout<<"8";
            }
            else if((s[i]=='W')||(s[i]=='X')||(s[i]=='Y')||(s[i]=='Z')){
                cout<<"9";
            }
        }
        cout<<"\n";
    }
    return 0;
}
