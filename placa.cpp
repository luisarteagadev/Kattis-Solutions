#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool validarPlaca(const string& );

int main()
{
    string placa;

    while(true){
        cout << endl << "Ingrese la placa: " ;
        getline(cin, placa);

        if(validarPlaca(placa)){
            cout<<endl<<"La placa fue valida";
        }
        else{
            cout<<endl<<"La placa fue invalida";
        }

    }


    return 0;
}

bool validarPlaca(const string& placa){

    ///Regex para las placas
    const regex expReg("[A-Z]{3}-\\d{2}-\\d{2}");

    return regex_match(placa, expReg);

}
