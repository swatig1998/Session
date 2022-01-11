#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b,b1,a,num=0,num1,count=1,a1,num2,count1=1,final=0;
    cout<<"Enter the number and base: ";
    cin>>n;
    cin>>b;
    while (n>0)
    {
        a=n%10;
        n=n-a;
        n=n/10;
        num1=count*a;
        num=num+num1;
        count=b*count;
    }
    cout<<"Decimal version "<<num<<endl;
    cout<<"Enter the next base: ";
    cin>>b1;
    while(num>0){
        a1=num%b1;
        num=num-a1;
        num=num/b1;
        num2=count1*a1;
        final=final+num2;
        count1=10*count1;
    }
    cout<<final;
    

    return 0;
}