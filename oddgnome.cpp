#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;



void getJefe(){
int e,k,respt;
vector<int> numeros;
cin>>e;
while(e--){
    cin>>k;
    numeros.push_back(k);
}

int aux= numeros[0];
for(int i=1;i<numeros.size();i++){
    aux++;
    if(numeros[i]!=aux){
        respt=i+1;
        break;
    }
}

cout<<respt<<endl;

}

int main(){

int n,j;
string numeros;
string linea;
cin>>n;
for(int i=0;i<n;i++){

getJefe();


}



return 0;
}
