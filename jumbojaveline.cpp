#include <bits/stdc++.h>
using namespace std;

int main(){
int num,resta;
int x,sum=0;
cin>>num;
resta=num-1;
while(num--){
    scanf("%d",&x);
    sum+=x;
    }
printf("%d",sum-resta);



return 0;
}
