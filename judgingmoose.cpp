#include <bits/stdc++.h>
using namespace std;
int main(){
int l,r,num;
scanf("%d %d",&l,&r);
if((l|r)==0){
    printf("Not a moose\n");
    return 0;
}
else{
    int maxi=(l<r)?r:l;
    if(l==r){
        printf("Even ");

    }else{
    printf("Odd ");
    }
    printf("%d\n", (maxi<<1));
}
return 0;
}
