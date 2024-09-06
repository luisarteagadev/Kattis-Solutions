#include <bits/stdc++.h>
using namespace std;
#include <string>
int main(){
string mes;
int dia;
cin>>mes>>dia;
if((mes=="OCT" && dia==31) || (mes=="DEC" && dia==25)){
    printf("yup");
    return 0;
}else{
printf("nope");
}


return 0;
}
