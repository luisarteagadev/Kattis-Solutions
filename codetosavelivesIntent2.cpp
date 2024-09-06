#include <iostream>
#include <sstream>

using namespace std;

int main() {
int t,result=0;


cin>>t;
cin.ignore(256,'\n');
for(int i=0;i<t;i++){
        int resultAcum=0;
        for(int i=0;i<2;i++){
            string linea;
            int num;

            getline(cin,linea);
            stringstream ss(linea);
            while(ss>>num){
                  result = result * 10 + num;

            }
            resultAcum=resultAcum+result;
            result=0;
            ss.str("");

        }

        stringstream ssresult;
        char c;
        ssresult<<resultAcum;
        while(ssresult>>c){
            cout<<c<<" ";
        }
            cout<<"\n";

}




}
