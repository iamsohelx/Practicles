#include <iostream>
using namespace std;
double f(double x)
{
    double a = 1 / (1 + x * x);
    return a;
}

int main()
{
    int n, i; // n is for subintervals and is for loop
    double a, b, h, sum = 0, integrals;
    cout << "Enter the limits of integration, \nInitial limit, a = ";
    cin >> a;
    cout << "final limit, b = ";
    cin >> b;
    cout << "Enter the no. of subintervals, n = ";
    cin >> n;
    double x[7], y[7];
    h = (b - a) / n;
    for (i = 0; i <= n; i++)
    {
        x[i] = a + i * h;
        y[i] = f(x[i]);
    }

    for (i = 1; i < n; i++)
    {
        sum = sum + h * y[i];
    }
    integrals = h / 2.0 * (y[0] + y[n]) + sum;
    cout << "The define integerals is " << integrals << endl;

    return 0;
}