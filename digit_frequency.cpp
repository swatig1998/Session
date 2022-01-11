#include<iostream>
using namespace std;
int main(){
    int n,d,a,b,count=0,n1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the digit: ";
    cin>>d;
    n1=n;
    do
    {
        a=n%10;
        n=n/10;
        if (a==d)
        {
            count++;
        }
        
    } while (n>0);
    cout<<"Total frequency of "<<d<<" in "<<n1<<" is "<<count;
    
    return 0;
}