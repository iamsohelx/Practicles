#include <iostream>
using namespace std;
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (x * power(x, n - 1));
    }
}
int main()
{

    int x, n, p;
    cout << "Enter the value x: ";
    cin >> x;
    cout << "Enter the value of n: ";
    cin >> n;
    p = power(x, n);
    cout << "\nThe value of " << x << "^" << n << " = " << p;
    return 0;
}