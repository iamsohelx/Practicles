#include <iostream>
#include <math.h>
#define MAX 15
using namespace std;
int main()
{
    int n, n1, n2, i;
    float a, b, h, sum, ict, x[MAX], y[MAX];
    cout << "Enter number of data points: ";
    cin >> n;
    cout << "Input table values set by set: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }
    cout << "Enter initial values of x: ";
    cin >> a;
    cout << "Enter final values of x: ";
    cin >> b;
    cout << "Enter segment width: ";
    cin >> h;
    n1 = (int)(fabs(a - x[1]) / h) + 1.5;
    n2 = (int)(fabs(b - x[1]) / h) + 1.5;
    sum = 0.0;
    for (i = n1; i <= n2 - 1; i++)
    {
        sum += y[i] + y[i + 1];
    }

    ict = sum * h / 2.0;

    cout << "\nIntegral form " << a << " to " << b << " is " << ict;
    return 0;
}