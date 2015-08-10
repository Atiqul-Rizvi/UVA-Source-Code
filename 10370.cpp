#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,k,l,m,t,sum;
    double div,n;
    int a[1001];
    cin>>t;
    for(i=0;i<t;i++){
        cin>>k;
        for(j=0;j<k;j++){
            cin>>a[j];
        }
        sum=0;
        for(j=0;j<k;j++){
            sum+=a[j];
        }
        div=sum/k;
        m=0;
        for(j=0;j<k;j++){
            if(a[j]>div){
                m++;
            }
        }
        n=(double)m/(double)k*100;
        cout<<fixed<<setprecision(3)<<n<<"%"<<endl;
    }
    return 0;
}
