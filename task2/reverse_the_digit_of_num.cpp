#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
int main(){
int n;
cin>>n;
int t=reverse(n);
cout<<t<<endl;
return 0;
}