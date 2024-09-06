#include<bits/stdc++.h>
#include <map>
#include <algorithm>
using namespace std;

int main(){
vector<int> nums;
nums.push_back(5);
nums.push_back(3);
nums.push_back(5);
nums.push_back(9);
nums.push_back(38);
nums.push_back(51);
nums.push_back(5);
nums.push_back(5);
nums.push_back(5);
nums.push_back(38);
nums.push_back(9);
nums.push_back(38);
nums.push_back(51);
map<int,int> a;
for(int x: nums){

    a[x]= a[x]==0? 1: a[x]+1;

}

for(pair<int,int> x:a){
cout<<x.first<<" "<<x.second<<"\n";
}
return 0;
}

