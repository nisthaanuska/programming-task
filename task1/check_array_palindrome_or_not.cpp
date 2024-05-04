#include<bits/stdc++.h>
using namespace std;
int palindrome(int arr[], int n){
     int i=0;
     int j=n-1;
      while(i<=j)
      {
        if(arr[i]!=arr[j])
        {
            return 0;
        }
        i++;
        j--;
      }
      return 1;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int t=palindrome(arr,n);
if(t==0){
cout<<" is not palindrome";
}
else{
cout<<" palindrome";
}
return 0;
}