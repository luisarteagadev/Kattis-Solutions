#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
int n,pi,votosGanados=0,citiesLost;
vector<int> nums;
cin>>n;


citiesLost=(n/2)+1;
for(int i=0;i<n;i++){
    cin>>pi;
    nums.push_back(pi);
}
sort(nums.begin(),nums.end());
for(auto num:nums){

    int value=num;
    if(citiesLost>0){
        votosGanados=votosGanados+(value/2);
        citiesLost--;
    }else{
        votosGanados=votosGanados+value;

    }

}
cout<<votosGanados<<endl;

return 0;




}
