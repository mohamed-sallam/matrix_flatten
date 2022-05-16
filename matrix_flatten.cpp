#include <iostream>

using namespace std;
//                           |
//           for consistency V
template <typename T, size_t i, size_t j, size_t k>
T *flatten(T matrixIn3D[][j][k])
{
    return &matrixIn3D[0][0][0];
}

int main()
{
    /*---------------------------- Testing ----------------------------*/

    // 3D Matrix
    int A[3][3][3] {
        {{2, 3, 5},
         {7, 11, 13},
         {17, 19, 23}},

        {{29, 31, 37},
         {41, 43, 47},
         {53, 59, 61}},

        {{67, 71, 73},
         {79, 83, 89},
         {97, 101, 103}}};
    // 1D Array
    int *p {flatten<int, 3, 3, 3>(A)};
    // Printing out 1D array
    for (int y {0}; y < 27; ++y)
        cout << p[y] << ", ";
    // output: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103

    cout << '\n';
    return 0;
}