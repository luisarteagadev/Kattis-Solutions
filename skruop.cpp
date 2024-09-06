#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){
int n;
string orden;
int base=7;
cin>>n;
cin.ignore(256,'\n');
for(int i=0;i<n;i++){
    getline(cin,orden);

   if(orden=="Skru op!"){
        if(base<10){
        base++;
         }
        }else{
    if(base>0){
            base--;
    }
}

}
cout<<base<<endl;

}
