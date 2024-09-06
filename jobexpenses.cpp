#include<bits/stdc++.h>
using namespace std;


int main(){
int n,gastoAcum=0;
cin>>n;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    if(k<0){
        gastoAcum=gastoAcum+abs(k);
    }

}
cout<<gastoAcum<<endl;



}
