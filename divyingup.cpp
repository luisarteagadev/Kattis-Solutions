#include <bits/stdc++.h>
using namespace std;


int main(){
int n,k,acum;


cin>>n;
for(int i=0;i<n;i++){
    cin>>k;
    acum=acum+k;
}
if(acum%3==0){
    cout<<"yes"<<endl;

}else{
    cout<<"no"<<endl;

}

return 0;

}
