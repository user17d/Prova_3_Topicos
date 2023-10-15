#include <iostream>
using namespace std;

int main() {
    double tempo;
    double VM;

    cout<< "Digite a velocidade que estava dirigindo: \n";
    cin >> VM;
    cout<< "Digite o tempo que levou para percorrer a distancia: \n";
    cin >> tempo;

    double D = tempo * VM;
    double Litros_Usados = D/12;

    cout << "Velocidade: \n"
    << VM;
    cout <<" Km/h";

    cout <<"\n Tempo gasto na viagem: \n"
    << tempo;
    cout << " Horas";

    cout << "\n Distancia percorrida: \n"
    << D;
    cout << "\n Quantos litros gastou na viagem: \n"
    << Litros_Usados;

    return 0;
}
