#include <iostream>
using namespace std;
#include <conio.h>
#include <math.h>
#define S 50
int main()
{
    int n, i;
    float x[S], y[S], sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0, a, b, A, B;
    cout << "How many data points?" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "x["<< i << "]=";
        cin >> x[i];
        cout << "y[" << i << "]=";
        cin >> y[i];
    }
    for (i = 1; i <= n; i++)
    {
        sumX = sumX + x[i];
        sumX2 =  sumX2 + x[i] * x[i];
        sumY = sumY + log(y[i]);
        sumXY = sumXY + x[i] * log(y[i]);
    }
    B = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    A = (sumY - B * sumX) / n;
    a = exp(A);
    b = exp(B);
    cout << "Values are: a=" << a << " and b=" << b;
    return 0;
}