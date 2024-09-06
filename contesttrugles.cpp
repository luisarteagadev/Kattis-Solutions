#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("casos_prueba.txt");

    if (!inputFile) {
        cerr << "Error al abrir el archivo de entrada." << endl;
        return 1;
    }

    double n, k, d, s;
    double result;

    while (inputFile >> n >> k >> d >> s) {

            result = (n * d) - (s * k);
            result = result / (n - k);

            if (result < 100 && result > 0) {
                cout << result << endl;
            } else {
                cout << "impossible" << endl;
            }

    }

    inputFile.close();

    return 0;
}
