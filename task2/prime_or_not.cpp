#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if((n%i)==0)
        {
            cout<<"is not prime num "<<endl;
            break;
        }
    else{
    cout<<"prime num"<<endl;
    break;
    }
    }
}
int main(){
int n;
cin>>n;
prime(n);
return 0;
}