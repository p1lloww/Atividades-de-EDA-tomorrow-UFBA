#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void somadorMoedas(int n, pair<string, int> moedas[], int size) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (moedas[i].second >= size) {
            sum += moedas[i].second;
            cout << moedas[i].first << " " << moedas[i].second << endl;
        }
    }
    if (sum >= 0) {
        cout << sum << endl;
    } else {
        cout << 0 << endl;
    }
    

}

int main() {

    int n;
    cin >> n;

    pair<string, int> moedas[n];

    for (int i = 0; i < n; i++)
    {
        cin >> moedas[i].first >> moedas[i].second;
    }

    int size;
    cin >> size;

    somadorMoedas(n, moedas, size);
    
}