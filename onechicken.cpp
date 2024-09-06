#include <bits/stdc++.h>
using namespace std;

int main(){

int n,m,dif;
string part1,part2;
cin>>n>>m;
if(n!=m){
  if(n<m){
    part1="Dr. Chaz will have ";
    dif=m-n;

    if(dif<10){
        part2=" piece of chicken left over!";
    }else{
        part2=" pieces of chicken left over!";
    }

    cout<<part1<<dif<<part2<<endl;

  }else{
    dif=n-m;
    part1="Dr. Chaz needs ";
    if(dif==1){
        part2=" more piece of chicken!";
    }else{
        part2=" more pieces of chicken!";
    }
    cout<<part1<<dif<<part2<<endl;
  }
}

}
