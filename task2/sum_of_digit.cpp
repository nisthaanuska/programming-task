#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int s=0;
    while(n!=0)
    {
       int d=n%10;
       s=s+d;
       n=n/10;
    }
    return s;
}

int main(){
int n;
cin>>n;
int t=sum(n);
cout<<t<<endl;
return 0;
}