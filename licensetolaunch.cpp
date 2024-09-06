#include <bits/stdc++.h>
#include <limits>
#include <vector>
using namespace std;


int main(){
int n,k;
int menor,pos;
vector<int> numeros;
menor=numeric_limits<int>::max();
cin>>n;
for(int i=0;i<n;i++){
    cin>>k;
    numeros.push_back(k);
    menor=min(menor,k);

}
for(int i=0;i<n;i++){
    if(numeros[i]==menor){
        pos=i;
        break;
    }
}


cout<<pos<<endl;





return 0;
}

