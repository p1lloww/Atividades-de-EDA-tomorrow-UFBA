#include <iostream>
using namespace std;

int pot(int base, int exp)
{
    int result = base;
    for (int i = 0; i < exp - 1; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int x, e;
    cin >> x >> e;
    cout << pot(x, e) << endl;
    return 0;
}