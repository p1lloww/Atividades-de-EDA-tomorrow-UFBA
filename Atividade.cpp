#include <iostream>
using namespace std;

struct pessoa {
    string nome;
    int peso;
};

int main() {
    int n, pesoMaximo;
    cin >> n;
    pessoa amigosBilbo[n];
    bool acimaDoPeso = false;

    for (int i = 0; i < n; i++)
    {
        pessoa p;
        cin >> p.nome >> p.peso;
        amigosBilbo[i] = p;
    }

    cin >> pesoMaximo;

    for (pessoa p : amigosBilbo) {
        if (p.peso > pesoMaximo) {
            cout << "Vamos virar almoço de aranhas gigantes!" << endl;
            acimaDoPeso = true;
            break;
        }
    }

    if (!acimaDoPeso) {
        cout << "Vamos todos encontrar a montanha!" << endl;
    }

    for (pessoa p : amigosBilbo) {
        if (p.peso > pesoMaximo) {
            cout << p.nome << endl;
        }
    }
    

}