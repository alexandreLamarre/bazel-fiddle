#include "matrix.h"
#include <stdlib.h>

template <typename T>
T **malloc2D(int col_max, int row_max)
{
    T **x = (T **)malloc(col_max * sizeof(T *) + col_max * row_max * sizeof(T));

    x[0] = (T *)x + col_max;

    for (int j = 1; j < col_max; j++)
    {
        x[j] = x[j - 1] + row_max;
    }
    return (x);
}

template <typename T>
void free2D(T **x, int col_max, int row_max)
{
    for (int j = 0; j < col_max; j++)
    {
        free(x[j]);
    }
    free(x);
}