#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter:";
    cin>>n;
    int num=2,num2=2,num1=1;
    cout<<"0\n"<<"1\t"<<"1\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i+2;j++){
            if(num<=n){
            cout<<num<<"\t";
            num=num1+num2;
            num1=num2;
            num2=num;
            }
            else{
                exit(1);
            }
        }
        cout<<"\n";
        
    }
    return 0;
}