#include <iostream>
using namespace std;

int main() {
    double F;


    cout << "Digite o valor da temperatura: \n";
    cin >> F;

    double C = (F - 32) * (5 / 9);

    cout << "temperatura em C°\n"
    << C
    << endl;

    return 0;
}
