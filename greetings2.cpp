#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <iostream>
int main(){
string s;
cin>>s;
int pos=s.size()-2;
string subcadena=s.substr(1,pos);
cout<<s.insert(pos,subcadena);
return 0;
}
