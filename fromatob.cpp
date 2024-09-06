#include<bits/stdc++.h>
#include <cmath>

using namespace std;
bool isPar(int num){
    bool flag;

    if(num%2==0){
        flag=true;
    }else{

        flag=false;
    }

return flag;
}

int main(){
int a,b,cont=0;
cin>>a>>b;

while(true){
    if(a==b){
        break;
    }else if(a>b){
        if(isPar(a)==true){
            a=a/2;
            cont++;

        }else{
            a=a+1;
            cont++;
        }
    }else if(a<b){
        a=a+1;
        cont++;

    }

}
cout<<cont<<endl;








return 0;
}
