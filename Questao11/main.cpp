#include <iostream>
using namespace std;

int main() {
    // modulo = resto
    int int1;
    int int2;

    cout << "Digite um numero: \n";
    cin >> int1;
    cout << "Digite um numero: \n";
    cin >> int2;

    double div = int1 / int2;
    double rest = int1 % int2;

    cout << "O quociente da divisão é : \n"
    << div;
    cout << "\nO resto da divisão é: \n"
    << rest;
    return 0;
}
