#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num,d;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int max=INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cout<<"Enter "<<i<<" element of array: ";
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int j=1;j<max;j++){
        for(int i=1;i<=n;i++){
            if(arr[i]>=max-j){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
    
    return 0;
}