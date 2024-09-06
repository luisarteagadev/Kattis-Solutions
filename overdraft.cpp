#include <bits/stdc++.h>
#include <cmath>

using namespace std;
int main(){
int saldo=0,comision=0;
int k,n,tposi=0,tnega=0;

cin>>n;

for(int i=0;i<n;i++){
    cin>>k;
    if(k>0){

        saldo=saldo+k;
    }else{

        saldo=saldo-abs(k);
        if(saldo<0){
            comision=comision+saldo;
            saldo=0;
        }
    }



}
cout<<abs(comision)<<endl;


return 0;
}
