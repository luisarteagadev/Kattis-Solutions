#include <bits/stdc++.h>

using namespace std;
int main(){
    int x,y,z;
    int v,ans=0;
    int lbrs;
    char c;
    while(scanf("%d %d %d",&x,&y,&z)==3) break;
    lbrs=(x-y)*0.90;

    while(scanf("%d%c",&v,&c)!=EOF){
        ans+=v;
        if(c=='\n') break;
    }
    printf("%d",lbrs-ans);
return 0;
}
