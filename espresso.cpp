#include<bits/stdc++.h>
#include <string>

using namespace std;

int main(){
int n,s,s0,cont=0,x;
bool isLatte=false;
string orden;
cin>>n>>s;
s0=s;

for(int i=0;i<n;i++){
    cin>>orden;
    x=orden[0]-'0';
    if(orden[1] == 'L'){
    x=x+1;
    }

    if(s<x){
        cont++;
        s=s0-x;
    }else{
        s-=x;
    }



}

cout<<cont<<endl;




return 0;
}
