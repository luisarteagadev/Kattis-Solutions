#include<bits/stdc++.h>

using namespace std;
int main(){

int a,b,c;
cin>>a>>b>>c;
int dist1,dist2;
dist1=b-a;
dist2=c-b;
if( (dist1>dist2) && dist2<0 ){
    cout<<"turned"<<endl;
}else if(dist1==dist2){
        cout<<"cruised"<<endl;

}else if( dist1>dist2){
        cout<<"braked"<<endl;

}

}
