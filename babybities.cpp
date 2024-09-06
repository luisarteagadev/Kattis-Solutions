#include <bits/stdc++.h>
using namespace std;
int main(){
int num;
string k;
int contador;
bool is_correct;
is_correct=true;
contador=0;

cin>>num;
for(int i=1;i<=num;i++){

    cin>>k;
    if(k=="mumble"){
    }else if(k==to_string(i)){
    }else{
        is_correct=false;
        break;
    }
}

if(is_correct==true){
    cout<<"makes sense"<<endl;
}else{
    cout<<"something is fishy"<<endl;
}


return 0;
}
