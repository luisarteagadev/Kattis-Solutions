#include <bits/stdc++.h>
using namespace std;

int isVowel(char ch){
    char vowel[6]="aeiou";
    //EN C++ CUALQUIER VALOR DIFERENTE DE CERO SE CONSIDERA VERDADERO
    for(int j=0;vowel[j];j++){
        cout<<vowel[6]<<endl;
        if(vowel[j]==ch){
            return 1;
        }
    }
    return 0;
}


int main(){
string s;
int numVocals;
getline(cin,s);
for(int i=0;i<s.size();i++){
    numVocals+=isVowel(s[i]);

}

cout<<numVocals;

return 0;
}
