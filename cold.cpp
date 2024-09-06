
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n,t,sum=0;
  cin>>n;
for(int i=0;i<n;i++){
    cin>>t;
    if(t<0){
        sum+=1;
    }
}
  cout<<sum<<endl;

}
