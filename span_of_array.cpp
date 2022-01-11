#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    cout<<"Enter size of array: ";
    cin>>n;
    int m;
    m=n+1;
    int arr[m],min=INT_MAX,max=INT_MIN;
    for(int i=1;i<=n;i++){
        cout<<"Enter "<<i<<" element of array: ";
        cin>>arr[i];
        if(arr[i]<min){
            min=arr[i];
        }
        else if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    num=max-min;
    cout<<num;
    return 0;
}