#include <iostream>
using namespace std;

int main() {
      double r;
      double h;

      cout<< "Digite o valor do raio: \n";
      cin >> r;

      cout<< "Digite o valor da Altura: \n";
      cin >> h;

      double v = 3.14159 * (r * r) * h;

      cout<< "Valor do volume: "
      << v
      << endl;

    return 0;
}
