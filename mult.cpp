#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
int n,k,num;
bool flag,entra;
entra=true;
vector<int> mult;
cin>>n;
for(int i=0;i<n;i++){
        cin>>k;
        if(entra==true){
            num=k;
            entra=false;
            }
            else{
                if(k%num==0){
                    entra=true;
                    mult.push_back(k);

                }
        }
}

for(int i=0;i<mult.size();i++){

    cout<<mult[i]<<endl;
}







return 0;
}
