#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
int base=0, k=0;
int cont=0;
bool nuevo=true;
cin>>n;
for(int i=0;i<n;i++){
        base=k;
        cin>>k;
        if(k>base){
        cont++;
        }
}
cout<<cont<<endl;



}
