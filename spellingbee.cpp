#include<bits/stdc++.h>
#include <map>
using namespace std;
int main(){

map<char, bool> miDiccionario;
string diccionario;
bool isCenter,isCorrect;
char centro;

cin>>diccionario;
centro=diccionario[0];
for(char i:diccionario){
    miDiccionario[i]=true;
}

int n;
string word;
cin>>n;
for(int i=0;i<n;i++){
    isCenter=false;
    isCorrect=false;

    cin>>word;
    for(char i:word){
        if(i==centro){
            isCenter=true;
            }

        if(miDiccionario[i]==true){
            isCorrect=true;
        }else{
            isCorrect=false;
        }

        if(isCorrect==false){
            break;
        }
    }
    if(isCorrect==true && isCenter==true && word.size()>=4){
        cout<<word<<endl;
    }

}





return 0;
}
