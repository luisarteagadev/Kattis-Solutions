#include <bits/stdc++.h>
using namespace std;


int main(){
int cont;
double a,b,acum;
cin>>cont;
while(cont--){
    cin>>a>>b;
    acum=acum+abs(a*b);
}
printf("%f",abs(acum));


return 0;
}
