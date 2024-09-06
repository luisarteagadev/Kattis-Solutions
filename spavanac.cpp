#include<bits/stdc++.h>
using namespace std;
int main(){
int h,m;
cin>>h>>m;
int resto=45-m;
if(resto>=0){
    h = h==0 ? 23 : h-1;
    m=60-resto;
}else{
    m=abs(resto);
}

printf("%d %d\n",h,m);
}
