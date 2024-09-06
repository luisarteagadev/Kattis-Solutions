#include<bits/stdc++.h>
using namespace std;

int main(){


int problems, solved;
cin>>problems>>solved;
int promTotal,promEstimado;
cin>>promTotal>>promEstimado;

double total=problems*promTotal;
double restante=problems-solved;
double actual=solved*promEstimado;

if(total-actual>100*restante){
    cout<<"impossible\n";

}else{
    cout << fixed << setprecision(10);
    double val=(total-actual)/restante;
    if(val>=0 && val<=100){
        cout<<val<<"\n";
    }else{

        cout<<"impossible\n";
    }

}

}
