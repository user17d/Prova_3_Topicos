#include <iostream>

using namespace std;

int main() {
    double A;
    double B;

    cout << "Digite um valor para A: \n";
    cin >> A;

    cout << "Digite um valor para B: \n";
    cin >> B;

    double x;
    x = A;
    A = B;
    B = x;

    cout << "Valor de A: \n"
    << A;
    cout << "\nValor de B: \n"
    << B;

    return 0;
}
