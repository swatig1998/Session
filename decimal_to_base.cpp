#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n, b,a,c,num,count=1,num1;
    cout<<"Enter the number and base: ";
    cin>>n;
    cin>>b;
    while (n>0)    
    {
        a=n%b;
        n=n-a;
        n=n/b;
        num1=count*a;
        num=num+num1;
        count=10*count;


    }
    
    cout<<num;
    
    return 0;
}