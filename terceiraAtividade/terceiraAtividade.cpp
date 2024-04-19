//atividade 1//
/*#include <iostream>

using namespace std;

int main() {
    int numero1, numero2;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2) {
        cout << "O primeiro numero e maior." << std::endl;
    }
    else if (numero2 > numero1) {
        cout << "O segundo numero e maior." << std::endl;
    }
    else {
        cout << "Os numeros sao iguais." << std::endl;
    }

    return 0;
}*/


//atividade 2//
/*#include <iostream>

using namespace std;

int main() {
    int quantidade_estoque;

    cout << "Digite a quantidade de produtos em estoque: ";
    cin >> quantidade_estoque;

    if (quantidade_estoque >= 100) {
        cout << "Quantidade suficiente no estoque.",
    }
    else if (quantidade_estoque >= 50) {
        cout << "Atencao ao estoque.";
    }
    else {
        cout << "Faca um novo pedido e reabasteca o estoque.";
    }

    return 0;
}*/


//atividade 3//

#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "O numero e positivo." << endl;
    } else if (numero < 0) {
        cout << "O numero e negativo." << endl;
    } else {
        cout << "O numero e igual a zero." << endl;
    }

    return 0;
}
