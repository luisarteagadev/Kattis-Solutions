#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
int wc,hc,ws,hs;
int difw,difh;
cin>>wc>>hc>>ws>>hs;
if(wc-2>=ws && hc-2>=hs){
    printf("%d\n",1);
}else{
    printf("%d\n",0);
}

return 0;
}
