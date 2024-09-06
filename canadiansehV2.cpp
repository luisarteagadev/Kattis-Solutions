#include <bits/stdc++.h>
using namespace std;

int main(){

string cad;
getline(cin,cad);
if(cad.subtr(cad.size()-3,3) =="eh?")
    cout<<"Canadian!"<<endl;
else
        cout<<"Imposter!"<<endl;

return 0;
}
