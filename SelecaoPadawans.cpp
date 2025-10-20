#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> jovens(n);

    for (int i = 0; i < n; i++)
    {
        cin >> jovens[i];
    }

    float yoda;
    cin >> yoda;

    for (int i = 0; i < n; i++)
    {
        if (jovens[i] >= yoda / 2) {
            cout << i << " ";
        }
    }
    
}