#include<bits/stdc++.h>
#include<string>

using namespace std;
int main(){
int k,q,r,b,kn,p;
int nk,nq,nr,nb,nkn,np;

cin>>k>>q>>r>>b>>kn>>p;


k>1? nk=1-k : k<1 ? nk=1: nk=0;
q>1? nq=1-q : q<1 ? nq=1: nq=0;
r>2? nr=2-r : r<2 ? nr=2-r: nr=0;
b>2? nb=2-b : b<2 ? nb=2-b: nb=0;
kn>2? nkn=2-kn: kn<2 ? nkn=2-kn: nkn=0;
p>8? np=8-p: p<8 ? np=8-p: np=0;
cout << nk << " " << nq << " " << nr << " " << nb << " " << nkn << " " << np << endl;

return 0;
}
