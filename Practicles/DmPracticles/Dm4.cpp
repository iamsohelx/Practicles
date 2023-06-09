#include <iostream>
#define MAX_RANGE 10
using namespace std;
int main()
{
    int A[50], a_len;
    int holes[MAX_RANGE + 1], i;
    cout << "Enter length of array: ";
    cin >> a_len;
    cout << "Enter element of array from range (0-10): ";
    for (int i = 0; i < a_len; i++)
    {
        cin >> A[i];
        // If value is given greater than 10 or less than 0, then set
        if (A[i] > 10 || A[i] < 0)
        {
            A[i] = 0;
        }
    }
    // Set holes value to 0
    for (i = 0; i <= MAX_RANGE; i++)
    {
        holes[i] = 0;
    }
    // Count values
    for (i = 0; i < a_len; ++i)
    {
        holes[A[i]]++;
    }
    cout << "\nSorted Array: ";
    // Print values from holes
    for (i = 1; i <= MAX_RANGE; i++)
    {
        while (holes[i] != 0)
        {
            cout << i << " ";
            holes[i]--;
        }
    }
    return 0;
}