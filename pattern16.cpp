#include<iostream>
using namespace std;
int main(){
    int n,t,val1=1;
    cin>>n;
    int sp=n+1;
    t=n;
    for(int i=1;i<=n;i++){
        int val=1;
        do{
        cout<<val<<"\t";
        val++;
        }while(val<=val1);
        val-=1;

        for(int j=1;j<=sp;j++){
            cout<<"\t";
        }

        do{
            cout<<val<<"\t";
            val--;
        }while(val>=1);

        cout<<"\n";
        val1++;
        sp-=2;
    }
    
    return 0;
}