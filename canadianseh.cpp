#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <iostream>
int main(){
string msg;
getline(cin, msg);
if( msg.back()=='?'){
        msg.pop_back();
    if(msg.back()=='h'){
        msg.pop_back();
        if(msg.back()=='e'){
            printf("%s","Canadian!");
         return 0;
        }
    }else{
 printf("%s","Imposter!");
}
}else{
 printf("%s","Imposter!");
}



return 0;
}
