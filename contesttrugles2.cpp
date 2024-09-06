#include <bits/stdc++.h>
using namespace std;

int main(){
double n,k,d,s,resto;
double result;
cin>>n>>k;
cin>>d>>s;

result=(n*d)-(s*k);
resto=n-k;


if( (result)>100*resto){

   cout<<"impossible"<<endl;
}else{
cout << fixed << setprecision(6);
    double respt=result/resto;
     if(respt>=0 && respt<=100){
        cout<<respt<<"\n";
    }else{

        cout<<"impossible\n";
    }

}






return 0;
}
