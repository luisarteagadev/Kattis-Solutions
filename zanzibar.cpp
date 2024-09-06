#include <bits/stdc++.h>

using namespace std;

int main(){
int n,k=0,k0;
cin>>n;
for(int i=0;i<n;i++){
 int difAcum=0;
while(true){
    k0=k;
    cin>>k;
    if(k==0){
        break;

    }
    if(k>(2*k0)&&k0!=0){
        difAcum=difAcum+(k-2*k0);
    }

}
cout<<difAcum<<endl;


}




return 0;
}
