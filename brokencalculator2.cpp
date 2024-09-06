#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int cases;
    std::cin >> cases;

    std::cout << std::setprecision(0) << std::fixed;  // Configuración para imprimir números sin decimales

    long double prevAnswer = 1.0, answer = 0.0;

    for (int i = 0; i < cases; i++) {
        int a, b;
        char operand;

        std::cin >> a >> operand >> b;

        switch (operand) {
            case '+':
                answer = static_cast<long double>(a + b) - prevAnswer;
                prevAnswer = answer;
                break;

            case '-':
                answer = static_cast<long double>(a - b) * prevAnswer;
                prevAnswer = answer;
                break;

            case '*':
                answer = std::pow(static_cast<long double>(a * b), 2);
                prevAnswer = answer;
                break;

            case '/':
                if (a % 2 == 0)
                    answer = static_cast<long double>(a / 2);
                else
                    answer = static_cast<long double>((a + 1) / 2);
                prevAnswer = answer;
                break;
        }
        std::cout << static_cast<long long>(answer) << std::endl;
    }

    return 0;
}
