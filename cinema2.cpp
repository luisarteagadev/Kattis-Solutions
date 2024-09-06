#include<bits/stdc++.h>

using namespace std;

int main(){
int n,m,cont=0,iter=0,sumaAcum=0;
cin>>n>>m;
int k;
while(cin>>k){
    sumaAcum=sumaAcum+k;
    cont++;
    iter++;


    if(sumaAcum>n){
        sumaAcum=sumaAcum-k;
        cont--;
    }else if(sumaAcum==n){

        break;
    }
    if(iter==m){

        break;
    }





}

int resto=m-cont;
cout<<resto<<endl;



return 0;

}
