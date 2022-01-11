#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,b,a,num1,num2,num11=0,num22=0,count=1;
    cout<<"Enter the base: ";
    cin>>b;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    while (n1>0)
    {
        a=n1%10;
        n1=n1-a;
        n1=n1/10;
        num1=count*a;
        num11=num11+num1;
        count=b*count;
    }
    count=1;
    while (n2>0)
    {
        a=n2%10;
        n1=n2-a;
        n2=n2/10;
        num2=count*a;
        num22=num22+num2;
        count=b*count;
    }
    int total,final=0;
    total=num11+num22;
    int count1=1;
    while(total>0){
        a=total%b;
        total=total-a;
        total=total/b;
        num2=count1*a;
        final=final+num2;
        count1=10*count1;
    }
    cout<<final;
    return 0;
}