#include<bits/stdc++.h>
using namespace std;
void factor(int n){

     for(int i=1;i<=n;i++)
     {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
     }
}
int main(){
int n;
cin>>n;
factor(n);
return 0;
}