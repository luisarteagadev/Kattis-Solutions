#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k,x,sum,cont,dif;
float resultMin,resultMax;
cin>>n>>k;
cont=k;
while(cont--){
    cin>>x;
    sum+=x;
}
dif=n-k;
if(dif==0){
    resultMin=resultMax=(sum+0.0)/n;
}else{
    resultMin=((sum-3*dif)+0.0)/n;
    resultMax=((sum+3*dif)+0.0)/n;

}
    printf("%f %f\n",resultMin,resultMax);
}
