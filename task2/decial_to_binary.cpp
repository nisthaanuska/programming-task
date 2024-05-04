#include<bits/stdc++.h>
using namespace std;
// int binary(int n)
// {
//     int i=0;
//     int bin=0;
//     while(n!=0)
//     {
//         int dig=n&1;
//         bin=(dig*ceil(pow(10,i)))+bin;
//         n=n>>1;
//         i++;
//     }
//     return bin;
// }
string s(int n)
{
    string res;
    while(n!=0){
    int ld=n&1;
    if(ld==1)
    {
        res.push_back('1');
    }
    else
    {
        res.push_back('0');
    }
    n=n>>1;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int n;
    cin>>n;
  string t= s(n);
  cout<<t<<endl;
return 0;
}