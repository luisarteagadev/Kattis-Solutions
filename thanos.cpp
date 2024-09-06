#include<bits/stdc++.h>
#include <cmath>

using namespace std;


int main(){
double n,p,r,f,result,cont;
cin>>n;
for(int i=0;i<n;i++){
cont=-1;
cin>>p>>r>>f;
while(true){
    cont++;
    result=p*pow(r,cont);
    if(result>f){
        break;
    }

}
  cout<<cont<<endl;

}









return 0;
}
