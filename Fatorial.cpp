#include <iostream>
using namespace std;

int fat(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << fat(n) << endl;
    return 0;
}