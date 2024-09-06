#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <iostream>
int main(){
int R;
double S;
int v;
string output;
for(int x=0;x<4;x++){

    cin>>R>>S;
    if(( R>99 && R<5281 ) && ( S>0.009 && S<1.0) ){
        v=sqrt((R*(S+.16))/.067);
      }else{

      break;
      }

}

return 0;


}
