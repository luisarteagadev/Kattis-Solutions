#include <bits/stdc++.h>
using namespace std;
int main(){

int tarifa=4;
int total,sum;
int num,meses,x;

cin>>num;
cin>>meses;
total=4*num;
while(meses--){
    cin>>x;
    sum+=x;
}
printf("%d\n",total-sum);
return 0;
}
