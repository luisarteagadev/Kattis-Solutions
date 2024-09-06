#include<bits/stdc++.h>

using namespace std;
int main(){
int n,dm,dmi,cont=0;
bool flag=false;
cin>>n>>dm;
for(int i=0;i<n;i++){
        cin>>dmi;
        if(dmi>dm){
             cont++;

        }else{
            flag=true;
            break;

        }

}

if(flag){
    cout<<"It hadn't snowed this early in "<<cont<<" years!"<<endl;
}else{
    cout<<"It had never snowed this early!"<<endl;
}



}
