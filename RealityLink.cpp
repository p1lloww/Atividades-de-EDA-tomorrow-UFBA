#include <iostream>
using namespace std;

int repeated(int arr[], int size, int n) {
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n) {
            count++;
        }
    }
    return count;
    
}

int main() {
    int size, n;
    cin >> size;
    int arr[size];
    
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cin >> n;

    cout << repeated(arr, size, n) << endl;
    
}