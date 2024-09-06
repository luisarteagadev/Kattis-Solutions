#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <iostream>

int getR(string linea){
    int R;
    string numR;
    int pos=linea.find(' ');
    numR=linea.substr(0,pos);
    R=stoi(numR);
    return R;

}
double getS(string linea){
    string numS;
    double S;
    int pos=linea.find('.');
    numS=linea.substr(pos,linea.size());
    S=stod(numS);
    return S;

}

int main(){
int R;
int v;
double S;
char c;
string linea;
string output;
for(int x=0;x<4;x++){
   cin>>
   if(linea[linea.size()]=='\0'){
    R=getR(linea);
    S=getS(linea);
    if(( R>99 && R<5281 ) && ( S>0.009 && S<1.0) ){

        v=sqrt((R*(S+.16))/.067);
        output+=to_string(v);
        output+="\n";
      }else{

      break;
      }

   }
}
cout<<output;
return 0;
}
