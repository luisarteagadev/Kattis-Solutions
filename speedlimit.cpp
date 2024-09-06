#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main(){

int n;
vector<int> nums;
while(n!=-1){
cin>>n;
    if(n!=-1){
        int velocidad=0;
        int s,tiempo=0,t=0,newTiempo;
        for(int i=0;i<n;i++){
            tiempo=t;
            cin>>s>>t;
            newTiempo=t-tiempo;
            velocidad=velocidad+s*newTiempo;
        }

        cout<<velocidad<<" "<<"miles"<<endl;



    }

}


return 0;
}
