#include <iostream>
using namespace std;

int finder(int size, int arr[], int n) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n) {
            return arr[i];
        }
    }
    return -1;
    
}

int main() {
    int size, n;

    cin >> size;

    int boxes[size];

    for (int i = 0; i < size; i++)
    {
        cin >> boxes[i];
    }

    cin >> n;

    cout << finder(size, boxes, n) << endl;
    
}