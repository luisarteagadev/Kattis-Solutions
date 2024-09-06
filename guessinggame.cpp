#include<bits/stdc++.h>
#include<string>

using namespace std;

bool verifica(int number,int menores[], int mayores[]);

int main(){
int number=1;

int i=0;
int j=0;
string resp;
string too;

int menores[10]={0};
int mayores[10]={0};
while(1){

cin>>number;

if(number==0){
    break;
}

cin>>too>>resp;
if(resp=="high"){
    mayores[i]=number;
    i++;
}else if(resp=="low"){
    menores[j]=number;
    j++;
}else{
    bool flag=verifica(number,menores,mayores);
    if(flag){
         cout<<"Stan may be honest"<<endl;
    }else{
        cout<<"Stan is dishonest"<<endl;
    }
    for (int i = 0; i < 10; ++i) {
            menores[i] = 0;
            mayores[i]=0;
            }
        i=0;
        j=0;

}


}



return 0;
}

bool verifica(int number, int menores[], int mayores[]) {

    for(int i=0;i<10;i++){
            if(menores[i]==0){
                break;
            }else{
                if(number<menores[i]){
                    return false;
                }
            }
    }


    for(int i=0;i<10;i++){
            if(mayores[i]==0){
                break;
            }else{
                if(number>mayores[i]){
                    return false;
                }
            }
    }
    return true;
}

