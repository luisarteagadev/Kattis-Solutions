#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <iostream>
int getPower(char card) {
    int power = 0;
    switch(card) {
        case 'G':
            power = 3;
            break;
        case 'S':
            power = 2;
            break;
        case 'C':
            power = 1;
            break;
        default:
            // Manejar el caso predeterminado (lanzar una excepción o devolver un valor predeterminado).
            break;
    }
    return power;
}

string getCardVictory(int suma) {
    string t;
   if(suma>=8){
    t="Province";
   }else if(suma>=5){
    t="Duchy";
   }else if(suma>=2){
   t=  "Estate";
   }else{
   t="";
   }
   return t;
}
string  getCardTreasure(int suma) {
    string t;
    if(suma>=6){
    t="Gold";
   }else if(suma>=3){
     t= "Silver";
   }else if(suma>=0){
    t= "Copper";
   }else{
    t="";
   }
    return t;
}

int main(){
int g,s,c;
int sum=0;
int p;
char card;
string x,y;

cin>>g>>s>>c;

if((g+s+c)<=5 ){
    if(g>0){
        p=getPower('G');
        sum+=p*g;
    }

     if(s>0){
        p=getPower('S');
        sum+=p*s;
    }

     if(c>0){
        p=getPower('C');
        sum+=p*c;
    }

}

x=getCardVictory(sum);
y=getCardTreasure(sum);

if(x!="" && y!=""){

   cout << x << " or " << y << endl;
}else if(y!=""){
   cout << y << endl;

}else{
    cout << x << endl;
}



return 0;
}
