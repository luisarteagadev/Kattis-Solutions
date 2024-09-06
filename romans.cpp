#include <bits/stdc++.h>
int main(){
double efeet,rfeet,y,x;
int result;
efeet=5280;
rfeet=4854;
y=efeet/rfeet;
scanf("%lf",&x);
result=round(1000*x*y);
printf("%d",result);
}
