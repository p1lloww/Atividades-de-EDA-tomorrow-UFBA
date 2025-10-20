#include <iostream>
#include <vector>
#include <string>
#include <utility> 

using namespace std;

int main() {
    int size;
    cin >> size; 

    vector<pair<string, int>> inimigos(size); 

    for (int i = 0; i < size; i++) {
        cin >> inimigos[i].first >> inimigos[i].second;
    }

    long long n; 
    cin >> n;

    int countDalek = 0;
    int countCyberMan = 0;
    bool precisaDeAjuda = false;
    
    for (int i = 0; i < size; i++) {
        if (inimigos[i].second <= n) { 
            n -= inimigos[i].second;
            
            if (inimigos[i].first == "Dalek") {
                countDalek++;
            } else {
                countCyberMan++;
            }
        } else {
            precisaDeAjuda = true;
            break; 
        }
    }

    if (precisaDeAjuda) {
        cout << "Consegui derrotar " << countDalek << " daleks e " << countCyberMan << " cyberman. Preciso de ajuda!" << endl;
    } else {
        cout << "Consegui derrotar todos!" << endl;
    }
}