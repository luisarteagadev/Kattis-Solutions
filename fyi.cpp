#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
int num;
string s;

scanf("%d",&num);
s=to_string(num);
if(s.substr(0,3)=="555"){
    printf("%d",1);
}else{
    printf("%d",0);
}

return 0;
}
