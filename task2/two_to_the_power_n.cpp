#include<bits/stdc++.h>
using namespace std;
int power(int n)
{
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p*=2;
    }
    return p;
}
int main(){
int n;
cin>>n;
int pow=power(n);
cout<<pow<<endl;
return 0;
}