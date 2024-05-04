#include<bits/stdc++.h>
using namespace std;
int smallest(int arr[],int n)
{
   int small1=INT_MAX;
   int small2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(small1>arr[i])
        {
            small2=small1;
            small1=arr[i];
        }
        else if(small2>arr[i])
        {
            small2=arr[i];
        }
    }
    cout<<small1<<endl;
    return small2;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int t=smallest(arr,n);
cout<<t<<endl;
return 0;
}