#include <bits/stdc++.h>

using namespace std;

string getSigno(int d, string m){
    string signo;


    if ((m=="Mar" && d>=21) || (m=="Apr" && d<=20)){
            signo="Aries";

    }else if((m=="Apr" && d>=21) || (m=="May" && d<=20)){
        signo="Taurus";
    }else if ((m == "May" && d >= 21) || (m == "Jun" && d <= 21)) {
        signo = "Gemini";
    } else if ((m == "Jun" && d >= 22) || (m == "Jul" && d <= 22)) {
        signo = "Cancer";
    } else if ((m == "Jul" && d >= 23) || (m == "Aug" && d <= 22)) {
        signo = "Leo";
    } else if ((m == "Aug" && d >= 23) || (m == "Sep" && d <= 21)) {
        signo = "Virgo";
    } else if ((m == "Sep" && d >= 22) || (m == "Oct" && d <= 22)) {
        signo = "Libra";
    } else if ((m == "Oct" && d >= 23) || (m == "Nov" && d <= 22)) {
        signo = "Scorpio";
    } else if ((m == "Nov" && d >= 23) || (m == "Dec" && d <= 21)) {
        signo = "Sagittarius";
    } else if ((m == "Dec" && d >= 22) || (m == "Jan" && d <= 20)) {
        signo = "Capricorn";
    } else if ((m == "Jan" && d >= 21) || (m == "Feb" && d <= 19)) {
        signo = "Aquarius";
    } else if ((m == "Feb" && d >= 20) || (m == "Mar" && d <= 20)) {
        signo = "Pisces";
    }



    return signo;
}

int main(){
    string signo;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int d;string m;
        cin>>d>>m;
        signo=getSigno(d,m);
        cout<<signo<<endl;
    }



    return 0;
}
