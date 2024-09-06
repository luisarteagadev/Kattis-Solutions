#include<bits/stdc++.h>
#include<vector>
#include<limits>;
using namespace std;
int main(){
vector<int> v;
int n;
cin>>n;
int t0=0,d0=0;
for(int i=0;i<n;i++){
    int t,d;
    cin>>t>>d;
    if(t==0 && d==0){
        v.push_back(0);

    }else{
    int vi=(d-d0)/(t-t0);
    v.push_back(vi);
    }
    t0=t;
    d0=d;
}
int maxima=0;
for(int num:v){
    maxima=max(maxima,num);
}
cout<<maxima<<endl;



}
