#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
int main(){

string aux,line="";

char c,num,digit;
int v,x;
int t,cont;
string result;

if(scanf("%d",&t)!=EOF);
cont=2*t;

while(cont>0){
        while(scanf("%d%c",&v,&c)!=EOF){
            num=v+'0';
            line+=num;
            if(c=='\n')break;
        }
        x+=std::stoi(line);
        line="";
        if(cont&1==1){
            aux=to_string(x);
            REP(i,aux.length()){
                digit=aux.at(i);
                line+=digit;
                line+=' ';
              }
            result+=line;
            result+='\n';
            x=0;
            line="";
            aux="";
        }
        cont--;
    }
cout<<result<<endl;
return 0;
}


