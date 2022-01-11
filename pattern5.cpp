#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n\t";
    cin>>n;
    int sp=n/2,st=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sp;j++){
            cout<<"\t";
        }
        for(int k=1;k<=st;k++){
            cout<<"*\t";
        }
        if(i<=n/2){
            sp-=1;
            st+=2;
        }
        else{
            sp+=1;
            st-=2;
        }
        cout<<"\n";
    }
    return 0;

}