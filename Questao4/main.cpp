#include <iostream>
using namespace std;

int main() {
    float HT = 80;
    double VH = 12.50;
    double PD = 7.5;

    double SB = HT * VH;
    double TD = (PD/100) * SB;
    double SL = SB - TD;

    cout << "O valor da hora trabalhada é: \n"
    << VH
    << "\nO valor do salário bruto é: \n"
    << SB
    << "\nDescontado: \n"
    << TD
    << "\nSalario liquido: \n"
    << SL << endl;




    return 0;
}
