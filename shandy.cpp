#include<bits/stdc++.h>
#include<string>

using namespace std;
int main(){
int b,l;
int menor;
cin>>b;
cin>>l;
if(b==0 || l==0){
    cout<<0<<endl;
}else if(b==l){
    cout<<b*2<<endl;
}else {
    b>l?menor=l:menor=b;
    cout<<menor*2<<endl;
}

return 0;

}
