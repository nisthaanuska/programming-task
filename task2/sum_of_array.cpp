#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=arr[i];
    }
    return s;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int res=sum(arr,n);
cout<<res;
return 0;
}