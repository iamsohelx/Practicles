#include <iostream>
using namespace std;
int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int n, r;
    int answer;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r;
    answer = factorial(n) / (factorial(r) * factorial(n - r));
    cout << "The combination of given number is: " << answer;
    return 0;
}