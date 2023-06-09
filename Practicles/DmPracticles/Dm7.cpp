#include <iostream>
using namespace std;
const int MAX = 20;
void printArray(int *arr, int len)
{

    for (int i = 0; i < len; i++)
    {

        cout << arr[i] << ", ";
    }
    cout << "\b\b}\n";
}
void setDifference(int *A, int *B, int *C, int A_len, int B_len, int &C_len)
{
    int i = 0, j = 0;
    for (; (i < A_len) && (j < B_len);)
    {
        if (A[i] == B[j])
        {
            i++;
            j++;
        }
        else if (A[i] < B[j])
        {

            C[C_len++] = A[i];
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int A[] = {1, 2, 5, 7, 9, 11, 12, 14, 15, 18};
    int B[] = {0, 2, 4, 5, 6, 7, 11, 12, 13, 14, 15, 16, 18, 19};
    int C[MAX];
    int A_len = 10, B_len = 14, C_len = 0;
    setDifference(A, B, C, A_len, B_len, C_len);
    cout << "Set A: {";
    printArray(A, A_len);
    cout << "Set B: {";
    printArray(B, B_len);
    cout << "Set A- B: {";
    printArray(C, C_len);
    return 0;
}