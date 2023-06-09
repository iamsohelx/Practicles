#include <iostream>
using namespace std;
int main()
{
    float x0, x1, y0, y1, xp, yp;
    cout << "enter the value for first point: " << endl;
    cin >> x0 >> y0;
    cout << "enter the value for end point: " << endl;
    cin >> x1 >> y1;
    cout << "enter the interpolation point: " << endl;
    cin >> xp;
    yp = y0 + ((y1 - y0) / (x1 - x0)) * (xp - x0);
    cout << "interpolated value at " << xp << " = " << yp;
    return 0;
}