#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

bool esPrimo(int x);

int main(){

vector<int> primos;
int num;

scanf("%d",&num);
for(int i=2;i<=num;i++){
        if(esPrimo(i)){
            primos.push_back(i);
        }
}

for(int i = 0; i < primos.size(); i++) {
        cout << "Elemento " << i << ": " << primos[i] << endl;
    }

return 0;
}


bool esPrimo(int x){
    int cont=0;
    bool primo=true;
    for(int i=2;i<x-1;i++){
        if(x%i==0){
            primo=false;
            return primo;}
    }
    return primo;

}
