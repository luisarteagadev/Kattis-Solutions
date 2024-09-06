#include <bits/stdc++.h>
using namespace std;
#include <string>

int main(){
string a,b,c;
cin>>a>>b>>c;

if( a[0]=='S' && b[0]=='N' && c[0]=='E'){
    cout<<"Yes"<<endl;

}else if( a[0]=='N' && b[0]=='S' && c[0]=='W'){
    cout<<"Yes"<<endl;
}else if( a[0]=='S' && b[0]=='W' && (c[0]=='E' || c[0]=='N') ){
    cout<<"Yes"<<endl;
}else if( a[0]=='N' && b[0]=='E' && (c[0]=='W' || c[0]=='S') ){
    cout<<"Yes"<<endl;
}else if( a[0]=='W' && b[0]=='E' && c[0]=='S'){
    cout<<"Yes"<<endl;

}else if( a[0]=='E' && b[0]=='W' && c[0]=='N'){
    cout<<"Yes"<<endl;

}else if( a[0]=='W' && b[0]=='N' && (c[0]=='E'|| c[0]=='S' ) ){
    cout<<"Yes"<<endl;
}else if( a[0]=='E' && b[0]=='S' && (c[0]=='W'|| c[0]=='N' ) ){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
    }


return 0;
}
