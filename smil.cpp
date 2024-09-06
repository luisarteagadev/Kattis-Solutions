#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main(){
vector<char> simbolos;
string caracteres;
vector <int> nums;

getline(cin,caracteres);
for(char x:caracteres){
     simbolos.push_back(x);

}


for(int i=0;i<simbolos.size();i++){
    if(simbolos[i]==':' || simbolos[i]==';'){
        if(simbolos[i+1]==')' || ( simbolos[i+1]=='-'&&simbolos[i+2]==')')){
            nums.push_back(i);

        }

    }

}

for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<endl;
}


return 0;
}
