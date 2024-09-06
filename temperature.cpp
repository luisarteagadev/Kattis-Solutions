#include <bits/stdc++.h>
#include <limits.h>
#include <math.h>

using namespace std;

int main(){
double x,y;
double z;
cin>>x>>y;
//z=x/(1-Y)->-(x)/(y-1)
y=1-y;
if(y==0){
    if(x==0){

         cout << "ALL GOOD" << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;

    }

}else{
    if(x==0 && y!=0){
            cout << 0 << endl;

    }else{
        cout << fixed;
    cout.precision(9);
    cout << x/y << endl;
    }

}











return 0;
}
