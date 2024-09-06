#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, n;
    string resp;
    cin>>a>>b>>c>>n;
if( n<=20 && n>=1)
    {
   if(a!= 0 && b!=0 && c!=0){
    if(a+b+c >= n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }else{
         cout<<"NO"<<endl;
   }
   }else{
        cout<<"NO"<<endl;
   }

   return 0;
}
