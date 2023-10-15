#include <iostream>
using namespace std;

int main() {
    float C;

    cout << "Qual o valor da temperatura?\n";
    cin >> C;

    float F = (9 * C + 160)/5;

    cout << "A temperatura em Fahrenheit: \n"
    << F;

    return 0;
}
