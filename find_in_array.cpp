#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num,d;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter the element to be found: ";
    cin>>d;
    int m;
    m=n+1;
    int arr[m];
    for(int i=1;i<=n;i++){
        cout<<"Enter "<<i<<" element of array: ";
        cin>>arr[i];
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==d){
            cout<<i-1;
            break;
        }
        else{
            count++;
        }
    }
    if(count==n){
        cout<<"-1";
    }
    return 0;
}