#include<bits/stdc++.h>
using namespace std;
void multiplication(int n)
{
    for(int i=1;i<=10;i++)
    {
        
       cout<<n <<" x " <<i<<" = "<<n*i<<endl;
    }
}
//2 x 1 = 2

int main(){
int n;
cin>>n;
multiplication(n);
return 0;
}