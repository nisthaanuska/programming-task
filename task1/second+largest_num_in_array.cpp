#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n)
{
   int large1=INT_MIN;
   int large2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(large1<arr[i])
        {
            large2=large1;
            large1=arr[i];
        }
        else if(large2<arr[i])
        {
            large2=arr[i];
        }
    }
    return large2;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int t=largest(arr,n);
cout<<t<<endl;
return 0;
}